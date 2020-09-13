#pragma once
#include <QList>
#include "Utente.h"
#include "File.h"
#include "CRDT.h"
#include <QHash>
#include <qpixmap>

class Service
{
private:
	QList<Utente> listaUtenti;
	QList<File> listaFileAperti; 
	QList<File> listaFileApribili; 
	QHash<File, int> listaFileThread;
	QHash<Utente, File> listaUtenteFile;
	QHash<File, CRDT> listaFileCRDT;


public:
	Service();
	void insert_crdt(File file, CRDT crdt); 
	QHash<File, CRDT> getListafileCRDT();  
	QList<File> getListaFileAperti();   
	QList<File> getListaFileApribili();  
	QHash<Utente, File> getListaUtenteFile(); 
	QHash<File, int> getListaFileThread();
	File searchFile(std::string filename, int selector);  
	void removeCRDT(File f);                             

	int lookForUser();
	int registerNewUser(std::string u, std::string p, std::string addr, std::string port, QTcpSocket *s);
	int checkUserLogin(std::string user, std::string psw, std::string addr, std::string port, QTcpSocket *s);
	Utente getUserFromPort(std::string addr, std::string port);
	Utente getUserFromID(const int uid);
	int fileOpened(Utente u, std::string filename);
	int fileClosed(Utente u, std::string filename);
	File getFilefromUser(Utente u);
	QStringList lookForFiles();
	QStringList lookForUserFiles(Utente u);
	int AddFiletoList(Utente u, std::string filename);
	int setImagefromUser(Utente u, QPixmap img);
	QPixmap sendImagetoUser(Utente u);
	void insertInAperti(File f);
	~Service();
};

