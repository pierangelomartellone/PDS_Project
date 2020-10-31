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

QList<Utente> Service::getlistaUtenti()
{
	return listaUtenti;
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

				listaUtenti.push_back(u);   
			}
			mysql_free_result(res);
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
	unsigned char pwd[40] = "\0";
	unsigned char hashed_pwd[EVP_MAX_MD_SIZE];
	
	SHA256_CTX ctx;
	

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	std::string str = "SELECT * FROM user WHERE Username = '"+u+"'";
	conn = mysql_init(NULL);
	if (conn == NULL) {
		qDebug() << "Can't initialize MYSQL ";
		return -1;
	}
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn!=NULL) {
		if (mysql_query(conn, str.c_str()) == 0) {
			if ((res = mysql_store_result(conn)) == NULL)
				return -1;
			if (res->row_count != 0) {
				//mysql_free_result(res);
				if (mysql_errno(conn) != 0)
					return -1; //error in the query
				else
					return -5; // already existing
			}

			else {
				//hashing of password
				RAND_bytes(salt, 8);
				

				memcpy(pwd, p.c_str(), strlen(p.c_str()));
				memcpy(pwd + (strlen(p.c_str())), salt, 8);
				
				if (SHA256_Init(&ctx) == 0)
					return -1;
				if (SHA256_Update(&ctx, pwd, strlen((const char*)pwd)) == 0)
					return -1;
				if (SHA256_Final(hashed_pwd, &ctx) == 0)
					return -1;
				
				
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

	return listaUtenti.size();
}

int Service::updateUsername(std::string u, std::string nu) {
	std::string id;
	std::string str = "SELECT * FROM user WHERE Username = '" + u + "'";

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn) {
		if (!mysql_query(conn, str.c_str())) {
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res)) {
				id = row[0];
				
				str.clear();
				str = "UPDATE user SET Username = '" + nu + "' WHERE ID = '" + id+"'"; 
				if (mysql_query(conn, str.c_str()) != 0)
					return -1; //error in the query
			}
			mysql_free_result(res);
		}
		mysql_close(conn);
	}
	else {
		qDebug() << "Unable to connect to Database";
		return -1;
	}

	return listaUtenti.size();


}

int Service::updatePassword(std::string psw, std::string u) {
	std::string id;
	unsigned char salt[8] = "\0";
	unsigned char pwd[40] = "\0";
	unsigned char hashed_pwd[EVP_MAX_MD_SIZE];
	SHA256_CTX ctx;

	std::string str = "SELECT * FROM user WHERE Username = '" + u + "'";

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn) {
		if (!mysql_query(conn, str.c_str())) {
			res = mysql_store_result(conn);
			row = mysql_fetch_row(res);
				id = row[0];
				RAND_bytes(salt, 8);

				memcpy(pwd, psw.c_str(), strlen(psw.c_str()));
				memcpy(pwd + (strlen(psw.c_str())), salt, 8);

				if (SHA256_Init(&ctx) == 0)
					return -1;
				if (SHA256_Update(&ctx, pwd, strlen((const char*)pwd)) == 0)
					return -1;
				if (SHA256_Final(hashed_pwd, &ctx) == 0)
					return -1;


				std::string base64_pwd = base64_encode(hashed_pwd, sizeof(hashed_pwd));
				std::string base64_salt = base64_encode(salt, sizeof(salt));
			
				str.clear();
				str = "UPDATE user SET Password = '" + base64_pwd + "' ,Salt = '" +base64_salt+"' WHERE ID = '" + id + "'"; 
				if (mysql_query(conn, str.c_str()) != 0)
					return -1; //error in the query
			
			mysql_free_result(res);
		}
		mysql_close(conn);
	}
	else {
		qDebug() << "Unable to connect to Database";
		return -1;
	}

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
	conn = mysql_init(NULL);
	if (conn == NULL) {
		qDebug() << "Can't initialize MYSQL ";
		return -1;
	}
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn!=NULL) {
		if (mysql_query(conn, str.c_str()) == 0) {
			if ((res = mysql_store_result(conn)) == NULL)
				return -1;
			if (res->row_count != 0) {

				if (mysql_errno(conn) != 0) {
					//mysql_free_result(res);
					return -1; //error in the query
				}
					
				else
				{
					row = mysql_fetch_row(res);
					memcpy(pwd, psw.c_str(), sizeof(psw));
				
					std::string str1 = base64_decode((unsigned char*)row[3], strlen(row[3]));
					
					memcpy(pwd + (strlen(psw.c_str())), str1.c_str(), strlen(row[3]));

					if (SHA256_Init(&ctx) == 0)
						return -1;
					if (SHA256_Update(&ctx, pwd, strlen((const char*)pwd))==0)
						return -1;
					if (SHA256_Final(hashed_pwd, &ctx) == 0)
						return -1;
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

					mysql_free_result(res);
				}
			}
		}
		mysql_close(conn);
	}
	else {
		return -1;
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

	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;

	std::string str = "SELECT File FROM files WHERE ID = '" + std::to_string(u.getID()) + "'";
	conn = mysql_init(NULL);
	if (conn == NULL) {
		qDebug() << "Can't initialize MYSQL ";
		return filenames;
	}
	conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
	if (conn!=NULL) {
		if (mysql_query(conn, str.c_str()) == 0) {
			if ((res = mysql_store_result(conn)) == NULL)
				return filenames;
			if (res->row_count != 0) {

				if (mysql_errno(conn) != 0) {
					return filenames;
				}
				else {
					while (row = mysql_fetch_row(res)) {
						File f(row[0]);
						listaFileApribili.append(f);
						filenames.append(row[0]);
					}
					mysql_free_result(res);
				}
				
			}
		}
		mysql_close(conn);
	}
	else {
		qDebug() << "Can't connect to database ";
	}
	return filenames;
}

	int Service::AddFiletoList(Utente u, std::string filename) {
		
		MYSQL* conn;
		MYSQL_RES* res;
		MYSQL_ROW row;

		std::string str = "SELECT * FROM files WHERE File = '" + filename + "' AND ID = '" + std::to_string(u.getID()) + "'";
		conn = mysql_init(NULL);
		if (conn == NULL) {
			qDebug() << "Can't initialize MYSQL ";
			abort();
		}
		conn = mysql_real_connect(conn, "localhost", "root", "toor", "Usersdb", 3306, NULL, 0);
		if (conn != NULL) {
			if (mysql_query(conn, str.c_str()) == 0) {
				if ((res = mysql_store_result(conn)) == NULL)
					return -1;
				if (res->row_count != 0) {
					if (mysql_errno(conn) != 0)
						return -1;
					else {
						qDebug() << "File already exist";
						mysql_free_result(res);
						return 0;
					}
				}
				else {
					str.clear();
					str = "INSERT INTO files (ID, File) VALUES ('"+ std::to_string(u.getID()) + "','" + filename + "')";
					if (mysql_query(conn, str.c_str()) != 0)
						return -1; //error in the query

				}
			}
			mysql_close(conn);
		}
		else {
			qDebug() << "Can't connect to database ";
		}

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
	std::string imgn2("./userimages/" + std::to_string(u.getID()) + ".jpg");
	imagepath = QString::fromStdString(imgn2);
	QFileInfo checkFile(imagepath);
	if (checkFile.exists() && checkFile.isFile()) {
		u.setImage();
		immagine.load(imagepath);
	}
	return immagine;
}

void Service::insertInAperti(File f) {
	listaFileAperti.push_back(f);
}

Service::~Service()
{
}