#pragma once

#include <QtWidgets/QMainWindow>
#include <QJsonObject>
#include <QJsonValue>
#include "Message.h"
#include <QJsonArray>
#include <QStringList>
#include <QImage>
#include <QBuffer>
#include <QJsonDocument>

class Serialize : public QObject
{
	Q_OBJECT

public:
	Serialize(QWidget *parent = Q_NULLPTR);

	QString userSerialize(QString user, QString psw, int type);
	QStringList userUnserialize(QString utente);

	QStringList updateUserUnserialize(QString utente);
	QStringList updatePswUnserialize(QString utente);

	QString filenameSerialize(QString filename, int type);
	QString filenameUnserialize(QString file);

	QString messageSerialize(Message m, int type);
	Message messageUnserialize(QString mes);

	QString imageSerialize(QPixmap image, int type);
	QPixmap imageUnserialize(QString img);

	QString responseSerialize(QString str, int type);
	QString responseUnserialize(QString str);

	QString fileListSerialize(QStringList list, int type);
	QStringList fileListUnserialize(QString str);

	QStringList symbolsSerialize(std::vector<Symbol> symbols, int type);
	std::vector<Symbol> symbolsUnserialize(QStringList symbols);

	QStringList fromBlockToList(QString read);

	QString fromSymbolToJson(Symbol s);
	Symbol fromJsonToSymbol(QString json);

	QStringList WrapUnSerialize(QString str);
	QString WrapSerialize(QStringList list, int type, int option);
	int WrapUnSerializeGetOption(QString str);



	int getTypeSerialization(QString jsonQualunque);

private:
	QJsonValue jsonValFromPixmap(const QPixmap &p);
	QPixmap pixmapFrom(const QJsonValue &val);

};


