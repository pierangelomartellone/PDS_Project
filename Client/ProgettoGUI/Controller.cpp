#include "Controller.h"
#include <QtNetwork/QtNetwork>
#include <QAbstractSocket>
#include <qpixmap.h>
#include "Serialize.h"
#include <qdebug.h>
#include <QObject>
#include <qwidget.h>
#define WAITING_TIME 10000
#define LEN 1024

Controller& Controller::getInstance()
{
	static Controller instance; // Guaranteed to be destroyed.// Instantiated on first use.
	return instance;
}

int Controller::connectSocket()
{
	int porta = 4200; // scegliere porta
	socket = new QTcpSocket();
	socket->connectToHost("localhost", porta);
	if (socket->waitForConnected(WAITING_TIME)) {
		//  si è connessa
		connect(socket, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
		connected = true;
		return 1;
	}
	socket->close();
	connected = false;
	return 0;
}

int Controller::checkLogin(std::string username, std::string password)
{
	int checkLogin = 1;
	QString ack("LOGINOK");
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.userSerialize(QString(username.c_str()), QString(password.c_str()), checkLogin);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	if(data.isEmpty())
		QByteArray data = socket->readAll();

	QString read(data);
	QString resp = s.responseUnserialize(read);
	qDebug() << resp;
	QStringList field = resp.split(" ");
	QString respack = field.at(0);

	if (respack == ack) {
		setUserName(QString(username.c_str()));
		int id = field.at(1).toInt();
		Controller::getInstance().setCRDT(id);
		return 1;
	}
	else {
		return 0;
	}
}

int Controller::registerUser(std::string username, std::string password)
{
	int registerUser = 2;
	QString ack("LOGINOK");
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.userSerialize(QString(username.c_str()), QString(password.c_str()), registerUser);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	if (data.isEmpty())
		QByteArray data = socket->readAll();

	QString read(data);
	QString resp = s.responseUnserialize(read);
	QStringList field = resp.split(" ");
	QString respack = field.at(0);

	if (respack == ack) {
		setUserName(QString(username.c_str()));
		int id = field.at(1).toInt();
		Controller::getInstance().setCRDT(id);
		return 1;
	}
	else {
		return 0;
	}
}


int Controller::updateUsername(std::string username)
{
	QString ack("USEROK");
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.updateUserSerialize(Controller::getInstance().getUserName(),QString(username.c_str()), 15);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	if (data.isEmpty())
		QByteArray data = socket->readAll();

	QString read(data);
	QString resp = s.responseUnserialize(read);
	QStringList field = resp.split(" ");
	QString respack = field.at(0);

	if (respack == ack) {
		return 1;
	}
	else {
		return 0;
	}
}

int Controller::updatePassword(std::string psw) {
	QString ack("PSWOK");
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.updatePswSerialize(QString(psw.c_str()), Controller::getInstance().getUserName(),16);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	if (data.isEmpty())
		QByteArray data = socket->readAll();

	QString read(data);
	QString resp = s.responseUnserialize(read);
	QStringList field = resp.split(" ");
	QString respack = field.at(0);

	if (respack == ack) {
		return 1;
	}
	else {
		return 0;
	}


}

int Controller::openFile(std::string name) {
	int openFile = 3; int CRDTmessage = 8;
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.filenameSerialize(QString(name.c_str()), openFile);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	QStringList listasimboli; QByteArray datas;
	while (1)
	{
		socket->waitForReadyRead(3000);
		QByteArray pezzo = socket->readLine();
		datas.append(pezzo);

		if (pezzo.size() == 0) {
			break;
		}
	}
	
	QString read(datas);
	listasimboli = s.fromBlockToList(read);  //trasforma la lettura in una lista di json
	symbolList = s.symbolsUnserialize(listasimboli);
	crdt.copySymbols(symbolList);
	fromOutside = true;
	return 1;
}

int Controller::newFile(std::string name) {
	int newFile = 14;
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.filenameSerialize(QString(name.c_str()), newFile);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	QStringList listasimboli; QByteArray datas;
	while (1)
	{
		socket->waitForReadyRead(1000);
		QByteArray pezzo = socket->readLine();
		datas.append(pezzo);

		if (pezzo.size() == 0) {
			break;
		}
	}

	QString read(datas);
	listasimboli = s.fromBlockToList(read);  //trasforma la lettura in una lista di json
	symbolList = s.symbolsUnserialize(listasimboli);
	crdt.copySymbols(symbolList);
	fromOutside = true;
	return 1;
}

QStringList Controller::askForFileList() {
	int fileRequest = 12;
	
	QStringList list;
	if (connected == false) return list;

	Serialize s;
	QString dati = s.responseSerialize("askforfilerequest", fileRequest);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(1000);

	// response from server
	socket->waitForReadyRead(2000);
	QByteArray data = socket->readAll();
	if (data.isEmpty())
		QByteArray data = socket->readAll();
	QString read(data);

	if (s.getTypeSerialization(read) != fileRequest)
		return list;

	list = s.fileListUnserialize(read);
	return list;
}

int Controller::saveFileAs(std::string name) {
	int saveFileAs = 4;
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.filenameSerialize(QString(name.c_str()), saveFileAs);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	QString read(data);

	read = "SAVEOK";// cancellarE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	if (read == "SAVEOK") {
		return 1;
	}
	else {
		return 0;
	}
}

int Controller::saveFile(std::string name) {
	int saveFile = 5;
	if (connected == false) return 0;

	Serialize s;
	QString dati = s.filenameSerialize(QString(name.c_str()), saveFile);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	return 1;
}


Message Controller::getMessage() {  //non si usa più
	Serialize s;

	socket->waitForReadyRead(WAITING_TIME);
	QByteArray data = socket->readAll();
	QString read(data);

	Message m = s.messageUnserialize(read);
	return m;
}

int Controller::notifyBigChange(QList<Message> m, int option) {
	int CRDTBigMessage = 23;
	int responseBytes = 30; //DA CAMBIARE SE CAMBIA L'ACK
	if (connected == false) return 0;
	int n = 320;

	Serialize s;
	std::vector<Symbol> syms;
	std::vector<Symbol> split;
	for (Message msg : m) {
		syms.push_back(msg.getSymbol());
	}
	int size = (syms.size() - 1) / n + 1;
	for (int i = 0; i < size; i++) {
		auto start_itr = std::next(syms.cbegin(), i * n);
		auto end_itr = std::next(syms.cbegin(), i * n);

		split.resize(n);

		if (i * n + n > syms.size()) {
			end_itr = syms.cend();
			split.resize(syms.size() - i * n);
		}
		else
			end_itr = std::next(syms.cbegin(), i * n + n);

		std::copy(start_itr, end_itr, split.begin());
		
		QStringList list = s.symbolsSerialize(split);
		QString message = s.WrapSerialize(list, CRDTBigMessage, option);

		socket->write(message.toStdString().c_str());
		socket->waitForBytesWritten(WAITING_TIME);

		socket->waitForReadyRead(WAITING_TIME);
		QByteArray data = socket->read(responseBytes);
		QString read(data);
	}
	//QStringList list = s.symbolsSerialize(syms);
	//QString message = s.WrapSerialize(list, CRDTBigMessage);

	//socket->write(message.toStdString().c_str());
	//socket->waitForBytesWritten(WAITING_TIME);

	//socket->waitForReadyRead(WAITING_TIME);
	//QByteArray data = socket->read(responseBytes);
	//QString read(data);

	return 1;
}

int Controller::notifyChange(Message m) {
	int notifyChange = 9; 
	int responseBytes = 30;  //DA CAMBIARE SE CAMBIA L'ACK
	if (connected == false) return 0;


	Serialize s;
	QString message = s.messageSerialize(m, notifyChange);
	
	socket->write(message.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	socket->waitForReadyRead(WAITING_TIME);
	//QByteArray data = socket->read(responseBytes);
	//QString read(data);

	return 1;
}

int Controller::receiveMessage() {
	int CRDTMessage = 8;
	int userInfoMessage = 18;
	int userNotConnectedInfoMessage = 22;
	int CRDTBigMessage = 23;
	if (connected == false) return 0;
	if (readyForCRDT == false) return 0;
	Serialize s;
	QString ack("MSGOK");

	QByteArray datas = socket->readAll();
	qDebug() << datas;
	
	QString bigjson(datas); int typebig;
	if (bigjson.startsWith("{\"l\":") )
		typebig = s.getTypeSerialization(datas);
	if (typebig == CRDTBigMessage) {
		QStringList list = s.WrapUnSerialize(bigjson);
		std::vector<Symbol> m = s.symbolsUnserialize(list);
		lastBigMessage = m;
		bigMessageOption = s.WrapUnSerializeGetOption(bigjson);
		Symbol sym = m.at(sizeof(m) - 2);
		fromOutside = true;
		qDebug() << sym.getC();
		emit userwriting(sym.getSID());
		crdt.processBig(m, bigMessageOption);
		emit bigtextfromserver();
		return 2;
	}

	QStringList listajson = s.fromBlockToList(datas);

	for (QString json : listajson) {

		CRDT& crdt = this->crdt;
		int type = s.getTypeSerialization(json);

		if (type == CRDTMessage) {
			Message m = s.messageUnserialize(json);
			lastMessage = m;
			Symbol sym = m.getSymbol();
			fromOutside = true;
			qDebug() << sym.getC();

			emit userwriting(sym.getSID());
			crdt.process(m);
			emit textupdatefromserver();
		}
		else if (type == userInfoMessage) {
			QString res = s.responseUnserialize(json);
			QStringList fields = res.split(" ");
			int id = fields.at(0).toInt();
			QString name = fields.at(1);
			listaIDUtenteNome.insert(id, name);
			
			emit newuserconnected(id);
		} 
		else if (type == userNotConnectedInfoMessage) {
			QString res = s.responseUnserialize(json);
			QStringList fields = res.split(" ");
			int id = fields.at(0).toInt();
			QString name = fields.at(1);
			listaIDUtenteNome.insert(id, name);
		}

	}
	return 1;
}

int Controller::getCompleteUserList() {
	if (userListPresent == true) return -1;
	int comandReq = 11;
	Serialize s;
	QString dati = s.responseSerialize("askforuserlist", comandReq);

	socket->write(dati.toStdString().c_str());
	socket->waitForBytesWritten(1000);

	userListPresent = true;
	return 1;
}

bool Controller::isChangeFromOutside() {
	if (this->fromOutside == true) {
		fromOutside = false;
		return true;
	} 
	return false;
}

QPixmap Controller::getUserImage(int h, int w)
{
	std::string s = getUserName().toStdString().c_str();
	std::string path = "./images/_" + s + ".jpg";
	QString pathstr = QString(path.c_str());
	QFileInfo checkFile(pathstr);

	if (checkFile.exists() && checkFile.isFile()) {
		QResource::registerResource(pathstr);
		QImage* pic = new QImage;
		pic->load(pathstr);
		myimage = QPixmap::fromImage(*pic);
	}
	else {
		myimage = getImage();
		if (myimage.isNull())
		{
			QImage* pic = new QImage;
			pic->load("./images/defaultpic.jpg");
			myimage = QPixmap::fromImage(*pic);
		}
		else
			myimage.save(pathstr, "JPG");
	}
	return myimage.scaled(h, w, Qt::KeepAspectRatio, Qt::SmoothTransformation);
}

int Controller::setImage(QPixmap q)
{
	int setImage = 6; int longContent = 13;
	QString ack("IMAGEOK");
	if (connected == false) return 0;

	Serialize s;
	QString askforImage = s.responseSerialize("askForImage", setImage);

	socket->write(askforImage.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	QString image = s.imageSerialize(q, longContent);

	socket->write(image.toStdString().c_str());
	socket->waitForBytesWritten(WAITING_TIME);

	// response from server
	socket->waitForReadyRead(300);
	QByteArray data = socket->readAll();
	if (data.isEmpty())
		QByteArray data = socket->readAll();

	QString read(data);
	QString resp = s.responseUnserialize(read);

	if (resp == ack) {
		return 1;
	}
	else {
		return 0;
	}
}

QPixmap Controller::getImage()
{
	int getImage = 7; int longContent = 13;
	if (connected == false) return 0;

	Serialize s;
	QString askforImage = s.responseSerialize("askForImage", getImage);

	socket->write(askforImage.toStdString().c_str());
	//socket->waitForBytesWritten(300);

	// response from server
	QByteArray datas;
	socket->waitForReadyRead(300);
	while (1)
	{
		//socket->waitForReadyRead(300);
		QByteArray pezzo = socket->readAll();
		datas.append(pezzo);

		if (pezzo.size() == 0) {
			break;
		}
	}

	QString read(datas);
	QPixmap p = s.imageUnserialize(read);
	return p;
}

QString Controller::getNameFromID(int id) {
	if (listaIDUtenteNome.contains(id)) {
		return listaIDUtenteNome.value(id);
	}
	else
	return "Reload :)";
}

QString Controller::getUserName()
{
	return loggedUser;
}

CRDT& Controller::getCRDT()
{
	return this->crdt;
}

Message Controller::getLastMessage()
{
	return lastMessage;
}

void Controller::saveCRDT(CRDT& crdt)
{
	this->crdt = crdt;
}

void Controller::setCRDT(int siteid)
{
	this->crdt = CRDT(siteid);
}

void Controller::setReadyForCRDT(bool value)
{
	readyForCRDT = value;
}

void Controller::setUserName(QString name)
{
	loggedUser = name;
}

void Controller::closeFile(QString name)
{
	int closeFile = 99;
	Serialize s;
	QString closeFileReq = s.filenameSerialize(name, closeFile);

	socket->write(closeFileReq.toStdString().c_str());
	socket->waitForBytesWritten(1000);

	return;

}

std::vector<Symbol> Controller::getLastBigMessage()
{
	return this->lastBigMessage;
}

QString Controller::toText(std::vector<Symbol> list) {
	QString testo;
	for (Symbol s : list) {
		testo.append(s.getC());
	}
	return testo;
}

QTextEdit& Controller::toRichText(std::vector<Symbol> list) {  // NON FUNZIONA

	QTextEdit *testo = new QTextEdit();
	QTextCursor cursor(testo->textCursor());
	cursor.movePosition(QTextCursor::Start);
	QTextCharFormat format(cursor.charFormat());

	for (Symbol s : list) {
		testo->moveCursor(QTextCursor::End);
		format.setFont(s.getFont());
		format.setFontPointSize(20);
		QString lettera(s.getC());
		cursor.insertBlock(); // Single character
		cursor.insertText("ciao", format);
	}
	return *testo;
}

QString Controller::symbolstoText()
{
	return toText(symbolList);
}

QTextEdit& Controller::symbolstoRichText() // NON FUNZIONA
{
	return toRichText(symbolList);
}

int Controller::getDeleteIndex() {
	return crdt.getDeleteIndex();
}

int Controller::getBigMessageOption() {
	return bigMessageOption;
}