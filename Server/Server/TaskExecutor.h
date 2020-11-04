#pragma once
#include <shared_mutex>
#include <atomic>
#include <vector>
#include <shared_mutex>
#include <atomic>
#include <thread>
#include "TaskExecutor.h"
#include <qlist.h>
#include <qtcpsocket.h>
#include "Serialize.h"
#include "Service.h"
#include "Utente.h"
#include "CRDT.h"
#include <thread>

class TaskExecutor: public QObject
{
private:
	int code;
	std::mutex bloccoshared;
	std::mutex m;
	std::atomic<int> active;
	std::condition_variable cv;

	QList<QTcpSocket*> socketList;
	Serialize serialize;
	Service service;

	std::atomic<int> activeThreads = 0;

public:
	QString sharedbuffer;
	Utente shareduser;
	QTcpSocket *sharedsocket;   

	TaskExecutor();
	void setService(Service & service);
	void work(int code);
	void sendToClients(Message m, File f);
	void sendBigToClients(std::vector<Symbol> symbols, File f, int code, int option);
	Service& start();
	void addSocketToExecutor(QTcpSocket * s);
	void removeSocketToExecutor(QTcpSocket * s);
	void newThreadCaller(int code);
	void updateCaption(File f);  
	void sendFiletoClient(QStringList list, QTcpSocket* actualSocket);
	//void sendBigToClients(std::vector<Symbol> symbols, File f,int code);
	void setSavingTimer(int codeth);

	~TaskExecutor();
};

