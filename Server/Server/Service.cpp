#include "Service.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <filesystem>
#include "qdir.h"
#include <qimage.h>
#include "Utente.h"
#include <qurl.h>
#include <qimagewriter.h>
#include <qdebug.h>

Service::Service()
{
	lookForUser();
}

void Service::insert_crdt(File file, CRDT crdt) {  /************************************NUOVO***************************************/

	this->listaFileCRDT.insert(file, crdt);
}

QHash<File, CRDT> Service::getListafileCRDT()/************************************NUOVO***************************************/
{
	return this->listaFileCRDT;
}

QList<File> Service::getListaFileAperti()/************************************NUOVO***************************************/
{
	return this->listaFileAperti;
}

QList<File> Service::getListaFileApribili()/************************************NUOVO***************************************/
{
	return this->listaFileApribili;
}

QHash<Utente, File> Service::getListaUtenteFile() /************************************NUOVO***************************************/
{
	return this->listaUtenteFile;
}

QHash<File, int> Service::getListaFileThread() /************************************NUOVO***************************************/
{
	return this->listaFileThread;
}


File Service::searchFile(std::string filename, int selector)  /************************************NUOVO***************************************/
{
	File erorr("");
	if (selector == 1) {
		for (File u : this->getListaFileAperti()) {
			if (u.getFilename() == filename) {
				return u;
			}
		}
	}
	if (selector == 0) {
		for (File u : this->getListaFileApribili()) {
			if (u.getFilename() == filename) {
				return u;
			}
		}


	}

	return erorr;
}

void Service::removeCRDT(File f)   /************************************NUOVO***************************************/
{
	this->listaFileCRDT.remove(f);
}


int Service::lookForUser() {
	int id;
	std::string user;
	std::string psw;

	std::ifstream inFile;

	inFile.open("userlist.txt");
	if (!inFile) {
		std::cout << "Unable to open file";
		return -1;
	}

	while (inFile >> id >> user >> psw) {
		Utente u(id, user, psw);
		listaUtenti.push_back(u);
	}

	inFile.close();
	return listaUtenti.size();
}

int Service::registerNewUser(std::string u, std::string p, std::string addr, std::string port, QTcpSocket *s) {
	int nuser = listaUtenti.size();

	std::ofstream inFile;

	inFile.open("userlist.txt", std::ios_base::app);
	if (!inFile) {
		std::cout << "Unable to open file";
		return -1;
	}
	
	for (Utente ut : listaUtenti) {
		if (ut.getUsername() == u)
			return -5; // already existing
	}

	Utente ut(nuser+1, u, p);
	ut.setConnected(addr, port);
	ut.setSocket(s);
	listaUtenti.push_back(ut);
	inFile << "\n" << nuser + 1 << " " << u << " " << p;
	inFile.close();
	
	return listaUtenti.size();
}

int Service::checkUserLogin(std::string user, std::string psw, std::string addr, std::string port, QTcpSocket *s)
{
	for (auto it = listaUtenti.begin(); it < listaUtenti.end(); it++) {
		if (it->getUsername() == user) {
			bool res = it->loginCheck(user, psw);
			if (res == true) {
				it->setConnected(addr, port);
				it->setSocket(s);
			}
				
			
			return res;
		}
	}
	return 0;
}

Utente Service::getUserFromPort(std::string addr, std::string port) {
	for (Utente u : listaUtenti) {
		std::string a = u.getAddress();
		std::string b = u.getPort();
		if (u.getAddress() == addr && u.getPort() == port && u.getConnection() == true)
			return u;
	}
	Utente error; //exception???
	return error;
}

int Service::fileOpened(Utente u, std::string filename)
{
	// se è già tra i file aperti
	for (auto f = listaFileAperti.begin(); f < listaFileAperti.end(); f++ ) {
		if (f->getFilename() == filename) {

			f->addPeopleWorking();
			listaUtenteFile.insert(u, *f);
			int threadid = listaFileThread.value(*f);
			return threadid;
		}
	}

	// se è tra i file da aprire
	int size = listaFileThread.size();
	for (auto f = listaFileApribili.begin(); f < listaFileApribili.end(); f++) {
		if (f->getFilename() == filename) {
			
			f->addPeopleWorking();
			f->setThreadID(size);
			listaFileThread.insert(*f, size);

			listaUtenteFile.insert(u, *f);
			//nuovo numero crea un nuovo thread
			return size;
		}
	}
	return -1; // il file specificato non esiste
}

int Service::fileClosed(Utente u, std::string filename)
{
	// se è già tra i file aperti
	for (File f : listaFileAperti) {
		if (f.getFilename() == filename) {

			if (f.getPeopleWorking() <= 0)
				return -55;

			f.removePeopleWorking();
			listaUtenteFile.remove(u);
			if (f.getPeopleWorking() == 0) {
				listaFileAperti.removeOne(f);
				listaFileThread.remove(f);
				f.setThreadID(-1);
				return f.getPeopleWorking();
			}
		}
	}
	return -55;
}

File Service::getFilefromUser(Utente u)
{
	File f; //controllare qua
	if (listaUtenteFile.contains(u))
		f = listaUtenteFile.value(u);

	return f;
}

QStringList Service::lookForFiles()
{
	QStringList allfiles;
	QDir directory("./Files");
	if( directory.exists() )
	allfiles = directory.entryList(QStringList() << "*.txt", QDir::Files);

	for (QString name : allfiles) {
		File f(name.toStdString());
		listaFileApribili.append(f);
	}

	return allfiles;
}


int Service::setImagefromUser(Utente u, QPixmap img)
{
	int imgn = u.getID();
	std::string imagepath("./userimages/" + std::to_string(imgn) + ".jpg");
	QString imagename = QString::fromStdString(imagepath);

	QImageWriter writer(imagename);
	if (!writer.write(img.toImage()))
	{
		qDebug() << writer.errorString();
		return -1;
	}
	u.setImage();
	return 1;
}

QPixmap Service::sendImagetoUser(Utente u)
{
	QString imagepath;
	QPixmap immagine;
	int imgn = u.getID();
	std::string imgn2("userimages\\" + std::to_string(imgn) + ".jpg");
	imagepath = QString::fromStdString(imgn2);
	QFileInfo checkFile(imagepath);
	if (checkFile.exists() && checkFile.isFile()) {
		u.setImage();
		immagine.load(imagepath);
	}
	//ritorna una qpixmap NULL se l'utente non ha caricato immagine
	return immagine;
}

void Service::insertInAperti(File f) {
	listaFileAperti.push_back(f);
}

Service::~Service()
{
}