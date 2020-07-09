#pragma once
#include <iostream>
#include <qtguiglobal.h>
#include <qtcpsocket.h>

class Utente
{
private:
	int id;
	std::string username;
	std::string password;
	std::string nickname;

	std::string address;
	std::string port;

	bool connected = false;
	bool withimage;
	QTcpSocket* mysocket;
	//immagine
public:
	Utente();
	Utente(int id, std::string password, std::string nickname);
	bool loginCheck(std::string user, std::string password);
	std::string getUsername() const;
	std::string getUsername();
	std::string getPassword() const;
	std::string getPassword();
	std::string getPort();
	bool getConnection();
	std::string getAddress();
	int getID();
	int getID() const;
	QTcpSocket* getSocket();
	void setSocket(QTcpSocket* socket);
	void setConnected();
	void setDisconnected();
	void setConnected(std::string addr, std::string port);
	void changeUsername(std::string newUsername, std::string password);
	void changePassword(std::string oldPassword, std::string newPassword);
	void changeNickname(std::string newNickname);
	bool operator==(Utente u2);
	void setImage();
	bool checkImage();
	~Utente();
};


inline uint qHash(const Utente u)
{
	return ((uint)u.getID());
}

inline bool operator==(const Utente &e1, const Utente &e2)
{
	return (e1.getUsername() == e2.getUsername()) && (e1.getPassword() == e2.getPassword());
}

/*
std::map<int, Utente> userList;
int NumUtenti = 0;
std::vector<File> fileList;

*/
