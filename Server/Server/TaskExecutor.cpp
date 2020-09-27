//#include "pch.h"
#include <iostream>
#include <string>
#include <qhostaddress.h>
#include "TaskExecutor.h"
#include "Service.h"
#include <qtimer>
#define EVER ;;
#define aperti 1      /************************************NUOVO***************************************/
#define apribili 0 

/* DEFINE PER I TIPI DELLA SERIALIZZAZIONE */
#define noTypeInMessage 0 //it's an error
#define checkLogin 1
#define registerUser 2
#define openFile 3
#define saveFileAs 4
#define saveFile 5
#define setImage 6
#define getImage 7
#define CRDTmessage 8 //lo usa solo il server per spedire agli altri
#define notifyChange 9
#define comandAck 10
#define comandReq 11
#define fileRequest 12
#define longContent 13
#define newFile 14
#define userInfoMessage
#define closeFile 99


TaskExecutor::TaskExecutor() 
{
}

void TaskExecutor::updateCaption(File f)
{
	CRDT crdt = service.getListafileCRDT().value(f);
	crdt.fromSymbolstoFileFormatted(f.getFilename());
}

void TaskExecutor::setService(Service& service) 
{
	this->service = service;
}

void TaskExecutor::work(int codep) {
	/*
	-------------------------------------------------------------------
	Task Executor work()
	- chiamato per ogni file aperto
	- elabora le richieste ricevute dal main thread relative al file
	-------------------------------------------------------------------
	*/
	int code = codep; 
	startTimer(code);
	QString local; Utente user; QTcpSocket* localsocket;
	bool chiusuraThread = false;

	for (EVER) {
		{
			std::unique_lock<std::mutex> lm(m);
			cv.wait(lm, [code, this]() {return this->active.load() == code; });
		}

		bloccoshared.lock();
		local = this->sharedbuffer;
		user = this->shareduser;
		localsocket = this->sharedsocket;
		active.store(-1);
		bloccoshared.unlock();

		std::string toprint = std::to_string(code) + local.toStdString();
		qDebug() << toprint.c_str();

		int messageType = serialize.getTypeSerialization(local);
		if (messageType == saveFileAs) {
			// salvo una copia del file della classe Service
		} 
		else if (messageType == notifyChange) {
			/******************************************************/
			//					GESTIONE CRDT
			// arriva un messaggio di modifica del file da un client
			// chiamare qui le classi che lo gestiscono
			/******************************************************/
			CRDT crdt;
			File f = service.getFilefromUser(user);
			Message m = serialize.messageUnserialize(local);
			qDebug() << QString(m.getSymbol().getC());

			crdt = service.getListafileCRDT().value(f);       //otteniamo crdt associato al file
			crdt.process(m);                                  //aggiungo il messaggio al vettore di simboli salvato nell'istanza del crdt
			service.insert_crdt(f, crdt);                     //inserisce nella QHash contenente FIle e istanza del crdt

			std::thread t([&]() { this->sendToClients(m, f); });
			t.join();
		} 
		else if (messageType == closeFile) {
			// chiude il file 
			QString filename = serialize.filenameUnserialize(local);
			File f = service.getFilefromUser(user);
			CRDT crdt = service.getListafileCRDT().value(f);

			int reftofile = service.fileClosed(user, filename.toStdString());
			if (reftofile == 0) {
				crdt.fromSymbolstoFileFormatted(filename.toStdString());
				service.insert_crdt(f, crdt);  //aggiorna la mappa con il crdt con il vettore di simboli azzerato
				this->service.removeCRDT(f);  //cancella l'istanza del crdt dalla QHash File-CRDT
			}
			
			if (reftofile == 0)
				chiusuraThread = true;
		}

		cv.notify_all();

		if (chiusuraThread == true) {
			this->activeThreads--;
			break;
		}

	}
}


void TaskExecutor::sendToClients(Message m, File f) {
	Serialize serialize;
	int sender = m.getGen();
	int responseBytes = 30;
	for (Utente u : service.getListaUtenteFile().keys(f)) {

		if (u.getID() != sender) {  
			QTcpSocket* usersocket = u.getSocket();
			if (u.getConnection() == true && usersocket->isWritable() == true) {  // CONTROLLARE quando crasha la connessione di un client al server potrebbe piantarsi
				usersocket->write(serialize.messageSerialize(m, CRDTmessage).toStdString().c_str()); //dispatch messages
				usersocket->waitForBytesWritten(50000);
			}
		}

	}
	return;
}

Service& TaskExecutor::start()
{
	/*
	-------------------------------------------------------------------
	Task Executor start()
	- sostituisce al vettore di stringhe le ricezioni dal socket
	- controlla il file corrispondente a tali richieste
	- le manda all'apposito thread confrontando una mappa
	-------------------------------------------------------------------
	*/
	// lettura dal socket
	QByteArray datas;
	QString senderPort;
	QString senderAddr;
	QTcpSocket* actualSocket;
	for (QTcpSocket* socket : socketList) {
		datas = socket->readAll();
		QHostAddress ha = socket->peerAddress();
		senderAddr = ha.toString();
		qint16 uport = socket->peerPort();
		senderPort = QString::number(uport);
		actualSocket = socket;

		if (!datas.isEmpty())
			break;
	}



	int codeth; 
	QString readFromSocket(datas);
	Utente u;
	u = service.getUserFromPort(senderAddr.toStdString(), senderPort.toStdString());
	
	int messageType = serialize.getTypeSerialization(readFromSocket);

	if (messageType == newFile) {
		// in caso di richiesta di apertura di un NUOVO file
		// ATTENZIONE!! Replica codice di openFile
		QString filename = serialize.filenameUnserialize(readFromSocket);

		QString path;
		File exists = service.searchFile(filename.toStdString(), apribili);
		if (exists.getFilename() == "") {
			path = "./Files/" + filename;
			std::ofstream newfile(path.toStdString());
			newfile.close();
			QStringList filelist = service.lookForFiles();
		}

		
		service.AddFiletoList(u, filename.toStdString());
		//Inserire controllo sul risultato
		/*---*/

		CRDT crdt;
		codeth = service.fileOpened(u, filename.toStdString());
		File aperto = service.searchFile(filename.toStdString(), aperti);
		File apribile = service.searchFile(filename.toStdString(), apribili);

		if (aperto.getFilename() == "") { //FILE NON APERTO
																		 //cerco il file a partire dal nome tra i file aperti o apribili
			crdt = service.getListafileCRDT().value(apribile);				   //prendo istanza del crdt associata al file trovato precedentemente
			crdt.fromFileFormattedtoSymbols(filename.toStdString());			    //converto il file in un vettore di simboli salvato nell'istanza del crdt
			service.insert_crdt(apribile, crdt);								//aggiorno il crdt associato al file
			service.insertInAperti(apribile);
		} else {  //FILE APERTO

			crdt = service.getListafileCRDT().value(aperto);
		}

		QStringList list = serialize.symbolsSerialize(crdt.getSymbols(), CRDTmessage);
		sendFiletoClient(list, actualSocket);


		if (codeth >= activeThreads) {
			newThreadCaller(codeth);
		}
	} 
	else if ( messageType == openFile) {
		// chiamata in fase di apertura di un file
		
		CRDT crdt; File f;
		QString filename = serialize.filenameUnserialize(readFromSocket);
		codeth = service.fileOpened(u, filename.toStdString());
		File aperto = service.searchFile(filename.toStdString(), aperti);
		File apribile = service.searchFile(filename.toStdString(), apribili);

		if (aperto.getFilename() == "") { //FILE NON APERTO
																		 //cerco il file a partire dal nome tra i file aperti o apribili
			crdt = service.getListafileCRDT().value(apribile);				   //prendo istanza del crdt associata al file trovato precedentemente
			crdt.fromFileFormattedtoSymbols(filename.toStdString());			    //converto il file in un vettore di simboli salvato nell'istanza del crdt
			service.insert_crdt(apribile, crdt);								//aggiorno il crdt associato al file
			service.insertInAperti(apribile);
			f = apribile;
		}
		else {  //FILE APERTO

			crdt = service.getListafileCRDT().value(aperto);
			f = aperto;
		}
		
		QStringList list = serialize.symbolsSerialize(crdt.getSymbols(), CRDTmessage);
		sendFiletoClient(list, actualSocket);

		// mando gli utenti attivi
		for (Utente tosend : service.getListaUtenteFile().keys(f)) {
			QTcpSocket* tosendsocket = tosend.getSocket();
			if (tosendsocket == nullptr) continue;  //CONTROLLARE

			for (Utente u : service.getListaUtenteFile().keys(f)) {
				if (u.getID() != tosend.getID()) {
					QString infoUser = QString::number(u.getID()) + " " + QString(u.getUsername().c_str()); // id nome, type = 18
					QString resp = serialize.responseSerialize(infoUser, 18);
					if( tosendsocket->isValid() == true) { // DA MODICARE
						tosendsocket->write(resp.toStdString().c_str()); //Crasha qui
						tosendsocket->waitForBytesWritten(1000);
						}
				}
			}

		}
		//////////


		if (codeth >= activeThreads) {
			newThreadCaller(codeth);
		}
	}
	else if (messageType == saveFile) {
		// salvo il file della classe Service
 		QString filename = serialize.filenameUnserialize(readFromSocket);
		File aperto = service.searchFile(filename.toStdString(), aperti);
		updateCaption(aperto);
	}
	else if (messageType == setImage) {
		// salva l'immagine ricevuta come pixmap utilizzando i metodi di serialize
		int res;
		datas.clear();
		while (1)
		{
			actualSocket->waitForReadyRead(3000);
			QByteArray pezzo = actualSocket->readAll();
			datas.append(pezzo);
			
			if (pezzo.size() == 0) {
				break;
			}
		}

		QString imageFromSocket(datas);
		QPixmap image = serialize.imageUnserialize(imageFromSocket);
		res = service.setImagefromUser(u, image);
		QString ack;
		if (res == -1)
			ack = serialize.responseSerialize("IMAGENO", comandAck); 
		else
			ack = serialize.responseSerialize("IMAGEOK", comandAck);

		actualSocket->write(ack.toStdString().c_str());
		actualSocket->waitForBytesWritten(1000);
	}
	else if (messageType == getImage) {
		// provvede ad inviare l'immagine usando i metodi di serialize
		QPixmap img = service.sendImagetoUser(u);
		QString imagedata = serialize.imageSerialize(img, longContent);
		actualSocket->write(imagedata.toStdString().c_str());
	}
	else if (messageType == fileRequest) {
		// lista dei file apribili da inviare al client
		QStringList filelist = service.lookForUserFiles(u);
		QString data = serialize.fileListSerialize(filelist, fileRequest);

		actualSocket->write(data.toStdString().c_str());
		actualSocket->waitForBytesWritten(1000);
	}
	else if (messageType == comandReq) {
		QString request = serialize.responseUnserialize(readFromSocket);
		// funzione che gestisce le richieste
	}
	else if( messageType != noTypeInMessage) {
		File alreadyOpened = service.getFilefromUser(u);
		codeth = alreadyOpened.getThreadID();

		active.store(-1);

		bloccoshared.lock();

		sharedbuffer = readFromSocket;
		shareduser = u;
		sharedsocket = actualSocket;
		active.store(codeth);

		bloccoshared.unlock();

		cv.notify_all();

		{
			std::unique_lock<std::mutex> lm(m);
			cv.wait(lm, [this]() {return this->active.load() == -1; });
		}

		QString ack("MSGOK");
		Serialize s;
		QString resp = s.responseSerialize(ack, comandAck);
		actualSocket->write(resp.toStdString().c_str());
		actualSocket->waitForBytesWritten(100);
	}

	return service;
}

void TaskExecutor::addSocketToExecutor(QTcpSocket * s)
{
	socketList.append(s);
}

void TaskExecutor::removeSocketToExecutor(QTcpSocket * s)
{
	socketList.removeOne(s);
}

void TaskExecutor::newThreadCaller(int code)
{
	activeThreads++;
	std::thread t([this, code]() {
		this->work(code);  });

	t.detach();
}

void TaskExecutor::sendFiletoClient(QStringList list, QTcpSocket* actualSocket)
{
	for (auto str : list) {
		actualSocket->write(str.toStdString().c_str());
		//actualSocket->waitForBytesWritten(3000);
	}
}

void TaskExecutor::setSavingTimer(int codeth) {

	File f = service.getListaFileThread().key(code);
	QTimer* timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(updateCaption(f)));
	timer->start(300000); //ogni 5 minuti salvo
}


TaskExecutor::~TaskExecutor()
{
}
