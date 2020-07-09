#include "Utente.h"


Utente::Utente()
{
}

Utente::Utente(int id, std::string username, std::string password)
{
	this->id = id;
	this->username = username;
	this->password = password;
}


bool Utente::loginCheck(std::string user, std::string password) {
	if (this->username == user && this->password == password) {
		setConnected();
		return true;
	}
	return false;
}

std::string Utente::getUsername() const
{
	return this->username;
}

std::string Utente::getUsername()
{
	return this->username;
}

std::string Utente::getPassword() const
{
	return this->password;
}

std::string Utente::getPassword()
{
	return this->password;
}

std::string Utente::getPort()
{
	return this->port;
}

bool Utente::getConnection()
{
	return this->connected;
}


std::string Utente::getAddress()
{
	return this->address;
}

int Utente::getID()
{
	return this->id;
}

int Utente::getID() const
{
	return this->id;
}

QTcpSocket * Utente::getSocket()
{
	return mysocket;
}

void Utente::setSocket(QTcpSocket * socket)
{
	mysocket = socket;
}


void Utente::setConnected()
{
	connected = true;
}

void Utente::setDisconnected()
{
	port = "";
	address = "";
	connected = false;
}

void Utente::setConnected(std::string addr, std::string port)
{
	connected = true;
	this->address = addr;
	this->port = port;
}

void Utente::changeUsername(std::string newUsername, std::string password)
{
	if (this->password == password)
		this->username = newUsername;
}

void Utente::changePassword(std::string oldPassword, std::string newPassword) {
	if (this->password == oldPassword)
		this->password = newPassword;
}

void Utente::changeNickname(std::string newNickname)
{
	this->nickname = newNickname;
}

bool Utente::operator==(Utente u2) {
	if (username != u2.username) return false;
	if (password != u2.password) return false;
	if (address != u2.address) return false;
	if (port != u2.port) return false;

	return true;
}

void Utente::setImage()
{
	withimage = true;
}

bool Utente::checkImage()
{
	return this->withimage;
}


Utente::~Utente()
{
}