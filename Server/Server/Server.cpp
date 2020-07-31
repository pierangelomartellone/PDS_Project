#include "Server.h"
#include <QAbstractSocket>
#include "TaskExecutor.h"

#define checkLogin 1
#define registerUser 2
#define comandAck 10
#define fileRequest 12

Server::Server()
{
	server = new QTcpServer(this);
	e.setService(service);
	connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

	if (!server->listen(QHostAddress::Any, 4200)) {
		qDebug() << "Server could not start";
	}
	else {
		qDebug() << "Server started";
	}
}

void Server::newConnection()
{
	qDebug() << "New Connection from client";

	QTcpSocket *socket = server->nextPendingConnection();
	acceptUser(socket);
	int loginResult = acceptUser(socket);

	if (loginResult > 0) {
		std::string tosend = "LOGINOK " + std::to_string(loginResult);
		QString res = s.responseSerialize(tosend.c_str(), comandAck);
		socket->write(res.toStdString().c_str());

		sockets.push_back(socket);
		e.addSocketToExecutor(socket);
		QStringList allfiles = service.lookForFiles();
		QString jsonlist = s.fileListSerialize(allfiles, fileRequest);

		//send files via socket
		socket->waitForReadyRead(3000);
		QByteArray data = socket->readAll();
		if (data.isEmpty())
			QByteArray data = socket->readAll();

		QString str(data);
		int type = s.getTypeSerialization(str);
		
		if (type == fileRequest)
			socket->write(jsonlist.toStdString().c_str());

		connect(socket, &QIODevice::readyRead,
			[this, &socket] { this->readyRead(); });
		connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

	}
	else {
		QString res = s.responseSerialize("LOGINNO 0", comandAck);
		socket->write(res.toStdString().c_str());
		qDebug() << "Wrong username or password";
		socket->close();
	}
}

int Server::acceptUser(QTcpSocket* socket)
{
	socket->waitForReadyRead(1000);
	QByteArray datas = socket->readAll();
	QString str = QString::fromLatin1(datas.data());
	QStringList list = s.userUnserialize(str);

	int type = s.getTypeSerialization(str);

	QString user = list.at(0);
	QString psw = list.at(1);
	QHostAddress ha = socket->peerAddress();
	QString addr = ha.toString();
	qint16 uport = socket->peerPort();
	QString port = QString::number(uport);
	
	int result; int usercode = -1;
	if (type == checkLogin)
		result = service.checkUserLogin(user.toStdString(), psw.toStdString(), addr.toStdString(), port.toStdString(), socket);
	else if (type == registerUser)
		result = service.registerNewUser(user.toStdString(), psw.toStdString(), addr.toStdString(), port.toStdString(), socket);
	
	if (result > 0) {
		usercode = service.getUserFromPort(addr.toStdString(), port.toStdString()).getID();
	}

	return usercode;
}

void Server::disconnected()
{
	QTcpSocket *socket = static_cast<QTcpSocket*>(sender());
	socket->deleteLater();

	QHostAddress ha = socket->peerAddress();
	QString addr = ha.toString();
	qint16 uport = socket->peerPort();
	QString port = QString::number(uport);
	Utente u = service.getUserFromPort(addr.toStdString(), port.toStdString());

	e.removeSocketToExecutor(socket);
	sockets.removeOne(socket);
	u.setDisconnected();
}


void Server::readyRead()
{
	e.setService(service);
	service = e.start();
}


//void Server::onReadyRead()
//{
//	QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
//	QByteArray datas = sender->readAll();
//	for (QTcpSocket* socket : sockets) {
//		if (socket != sender)
//			socket->write(QByteArray::fromStdString(sender->peerAddress().toString().toStdString() + ": " + datas.toStdString()));
//	}
//}