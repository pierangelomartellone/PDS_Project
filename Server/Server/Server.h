#pragma once

#include <QtWidgets/QMainWindow>
#include <QtNetwork/QtNetwork>
#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>
#include "Serialize.h"
#include "Service.h"
#include "TaskExecutor.h"

class Server : public QObject
{
	Q_OBJECT

public:
	
	Server();
	int acceptUser(QTcpSocket* socket);

	Service service; //contiene metodi di basso livello per utenti e file
	Serialize s; //serializzatore
	TaskExecutor e; // dopo il login legge tutti i messaggi

public slots:
	
	void newConnection();
	void disconnected();
	void readyRead();

private:
	QTcpServer  *server;
	QList<QTcpSocket*>  sockets;
};
