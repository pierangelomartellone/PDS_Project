#pragma once
#include <iostream>
#include <Serialize.h>
#include "Message.h"
#include <qpixmap.h>
#include <QtNetwork/qtcpsocket.h>
#include "CRDT.h"
#include "QTextedit.h"

class Controller : public QObject
{
	Q_OBJECT
private:
	Controller() {}		                 // Constructor? (the {} brackets) are needed here.

	// C++ 03
	// ========
	// Don't forget to declare these two. You want to make sure they
	// are unacceptable otherwise you may accidentally get copies of
	// your singleton appearing.
	Controller(Controller const&) = delete;              // Don't Implement
	void operator=(Controller const&) = delete;  // Don't implement

	// C++ 11
	// =======
	// We can use the better technique of deleting the methods
	// we don't want.
	QTcpSocket *socket; 
	bool connected = false;
	bool fromOutside = false;
	bool readyForCRDT = false;
	bool userListPresent = false;

	QHash<int, QString> listaIDUtenteNome;
	QString loggedUser;
	QPixmap myimage;
	std::vector<Symbol> symbolList;
	CRDT crdt;
	Message lastMessage;
public:

	static Controller& getInstance();

	int connectSocket();
	int updateUsername(std::string username);
	int updatePassword(std::string psw);
	int checkLogin(std::string username, std::string password);
	int registerUser(std::string username, std::string password);
	int openFile(std::string name);
	int newFile(std::string name);
	int getCompleteUserList();
	QStringList askForFileList();
	int saveFileAs(std::string name);
	int setImage(QPixmap q);
	QPixmap getImage();
	QString getNameFromID(int id);
	Message getMessage();
	int notifyChange(Message m);
	bool isChangeFromOutside();
	QPixmap getUserImage(int h, int w);
	QString getUserName();
	CRDT& getCRDT();
	Message getLastMessage();
	void saveCRDT(CRDT& crdt);
	void setCRDT(int siteid);
	void setReadyForCRDT(bool value);
	void setUserName(QString name);
	void closeFile(QString name);

	QString toText(std::vector<Symbol> list);
	QTextEdit& toRichText(std::vector<Symbol> list);
	QString symbolstoText();
	QTextEdit& Controller::symbolstoRichText();

	int getDeleteIndex();

signals:
	void textupdatefromserver(void);
	void newuserconnected(int id);
	void userwriting(int id);

public slots:
	int receiveMessage();
	int saveFile(std::string name);

	// Note: Scott Meyers mentions in his Effective Modern
	//       C++ book, that deleted functions should generally
	//       be public as it results in better error messages
	//       due to the compilers behavior to check accessibility
	//       before deleted status
};