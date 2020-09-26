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
#include <mysql.h>
#include <openssl/rand.h>
#include <openssl/evp.h>
#include <openssl/sha.h>
#include <sstream>
#include <Base64.h>







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

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn) {
		if (!mysql_query(conn, "SELECT * from user")) {
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res)) {
				id = std::stoi(row[0]);
				user = row[1];
				psw = row[2];
				Utente u(id, user, psw);

				listaUtenti.push_back(u);   // VERIFICARE L'UTILITA
			}
		}
		mysql_close(conn);
	}
	else {
		qDebug() << "Unable to connect to Database";
		return -1;
	}

	return listaUtenti.size();
}

int Service::registerNewUser(std::string u, std::string p, std::string addr, std::string port, QTcpSocket *s) {
	int nuser = listaUtenti.size();
	unsigned char salt[8] = "\0";
	std::stringstream hexsalt;
	unsigned char pwd[40] = "\0";
	unsigned char hashed_pwd[EVP_MAX_MD_SIZE];
	
	
	/*std::string pwd;
	std::string hashed_pwd;*/
	SHA256_CTX ctx;
	

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	std::string str = "SELECT * FROM user WHERE Username = '"+u+"'";
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn) {
		if (mysql_query(conn, str.c_str()) == 0) {
			res = mysql_store_result(conn);
			if (res->row_count != 0) {
				mysql_free_result(res);
				if (mysql_errno(conn) != 0)
					return -1; //error in the query
				else
					return -5; // already existing
			}

			else {
				//hashing of password
				RAND_bytes(salt, 8);
				qDebug() << salt;
				/*hexsalt << std::hex << std::setfill('0');
				for (int i = 0; i < sizeof(salt); ++i)
				{
					hexsalt << std::setw(2) << static_cast<unsigned>(salt[i]);
				}*/

				memcpy(pwd, p.c_str(), strlen(p.c_str()));
				memcpy(pwd + (strlen(p.c_str())), salt, 8);
				qDebug() << pwd;
				SHA256_Init(&ctx);    //aggiungere gestione errrori
				SHA256_Update(&ctx, pwd, strlen((const char*)pwd));
				SHA256_Final(hashed_pwd, &ctx);
				
				
				std::string base64_pwd = base64_encode(hashed_pwd, sizeof(hashed_pwd));
				std::string base64_salt = base64_encode(salt, sizeof(salt));
				Utente ut(nuser + 1, u, std::string((char*)hashed_pwd));
				ut.setConnected(addr, port);
				ut.setSocket(s);
				listaUtenti.push_back(ut);
				str.clear();
				str = "INSERT INTO user (ID, Username, Password, Salt) VALUES ('" + std::to_string(ut.getID()) +"','" +  u + "','"+ base64_pwd+"','"+ base64_salt+"')";
			
				if (mysql_query(conn, str.c_str())!=0)
					return -1; //error in the query

			}

		}
		mysql_close(conn);
	}
	else {
		qDebug() << "Unable to connect to Database";
		return -1;
	}


	

	/*---Diritti di accesso sui File -> Creazione Riga in filelist---*/
	//inFile.open("filelist.txt", std::ios_base::app);
	//if (!inFile) {
	//	std::cout << "Unable to open file";
	//	return -1;
	//}
	//inFile << "\n" << nuser + 1 <<" ";
	//inFile.close();
	///*---*/
	
	return listaUtenti.size();
}

int Service::checkUserLogin(std::string user, std::string psw, std::string addr, std::string port, QTcpSocket* s)
{
	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	unsigned char pwd[40] = "\0";
	SHA256_CTX ctx;
	unsigned char hashed_pwd[EVP_MAX_MD_SIZE];

	std::string str = "SELECT * FROM user WHERE Username = '" + user + "'";
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn) {
		if (mysql_query(conn, str.c_str()) == 0) {
			res = mysql_store_result(conn);
			if (res->row_count != 0) {

				if (mysql_errno(conn) != 0)
					return -1; //error in the query
				else
				{
					row = mysql_fetch_row(res);
					memcpy(pwd, psw.c_str(), sizeof(psw));
					qDebug() << strlen(row[3]);
					qDebug() << row[3];
					std::string str1 = base64_decode((unsigned char*)row[3], strlen(row[3]));
					
					memcpy(pwd + (strlen(psw.c_str())), str1.c_str(), strlen(row[3]));

					SHA256_Init(&ctx);    //aggiungere gestione errrori
					SHA256_Update(&ctx, pwd, strlen((const char*)pwd));
					SHA256_Final(hashed_pwd, &ctx);
					std::string str2 = base64_decode((unsigned char*)row[2], strlen(row[2]));
					if (CRYPTO_memcmp(hashed_pwd, str2.c_str() , sizeof(str2.c_str()))==0) {
						for (auto it = listaUtenti.begin(); it < listaUtenti.end(); it++) {
							if (it->getUsername() == user) {
									it->setConnected(addr, port);
									it->setSocket(s);
								return true;
							}
						}

					}


					//controllo password
					mysql_free_result(res);
				}
			}
		}


		/*for (auto it = listaUtenti.begin(); it < listaUtenti.end(); it++) {
		if (it->getUsername() == user) {
			bool res = it->loginCheck(user, psw);
			if (res == true) {
				it->setConnected(addr, port);
				it->setSocket(s);
			}


			return res;
		}
	}*/


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

Utente Service::getUserFromID(const int uid) {
	for (Utente u : listaUtenti) {
		if (u.getID() == uid)
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

QStringList Service::lookForUserFiles(Utente u) { /* Restituisce la lista dei files su cui l'Utente u ha diritto di accesso */
	int id;
	std::string line, word;
	QStringList filenames;
	std::ifstream inFile;
	inFile.open("filelist.txt");
	if (inFile)
	{
		while (inFile >> id >> line) {
			if (id == u.getID()) {
				for (auto c : line) {
					if (c != ',')
						word.push_back(c);
					else {
						filenames.append(QString::fromStdString(word));
						word = "";
					}
				}
				filenames.append(QString::fromStdString(word));
				word = "";
			}
		}

		for (QString name : filenames) {
			File f(name.toStdString());
			listaFileApribili.append(f);
		}
	}
	return filenames;
}

	int Service::AddFiletoList(Utente u, std::string filename) {
		int id;
		std::string line, word;
		std::vector<std::string> filenames;
		std::ifstream inFile;
		std::ofstream outFile;

		inFile.open("filelist.txt");
		if (!inFile) {
			std::cout << "Unable to open file";
			return -1;
		}
		outFile.open("temp.txt");
		if (!inFile) {
			std::cout << "Unable to open file";
			return -1;
		}

		while (inFile >> id >> line) {
			if (id == u.getID()) {
				for (auto c : line) {
					if (c != ',')
						word.push_back(c);
					else {
						filenames.push_back(std::move(word));
					}
				}
				filenames.push_back(std::move(word));
				std::vector<std::string>::iterator it = std::find(filenames.begin(), filenames.end(), filename);
				if(it == filenames.end())
					outFile << id << " " << line << "," << filename << "\n";
				else
					outFile << id << " " << line << "\n";
			}
			else
				outFile << id << " " << line << "\n";
		}
		inFile.close();
		outFile.close();

		std::remove("filelist.txt");
		std::rename("temp.txt", "filelist.txt");
		return 0;
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
	if (u.checkImage()) {
		std::string imgn2("./userimages/" + std::to_string(imgn) + ".jpg");
		imagepath = QString::fromStdString(imgn2);
		QFileInfo checkFile(imagepath);
		if (checkFile.exists() && checkFile.isFile()) {
			u.setImage();
			immagine.load(imagepath);
		}
	}
	return immagine;
}

void Service::insertInAperti(File f) {
	listaFileAperti.push_back(f);
}

Service::~Service()
{
}