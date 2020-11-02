#include "Serialize.h"

Serialize::Serialize(QWidget *parent)
{
}

QString Serialize::userSerialize(QString user, QString psw, int type)
{
	QJsonObject utente;
	utente.insert("type", QJsonValue(type));
	utente.insert("user", QJsonValue(user));
	utente.insert("psw", QJsonValue(psw)); //md5 password?
	QJsonDocument doc(utente);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QStringList Serialize::userUnserialize(QString utente)
{
	QJsonDocument doc = QJsonDocument::fromJson(utente.toLatin1());
	QJsonObject obj = doc.object();
	QString user = obj.value("user").toString();
	QString psw = obj.value("psw").toString();
	QString type = obj.value("type").toString();
	QStringList list;
	list.append(user);
	list.append(psw);
	return list;
}

QStringList Serialize::updateUserUnserialize(QString utente)
{
	QJsonDocument doc = QJsonDocument::fromJson(utente.toLatin1());
	QJsonObject obj = doc.object();
	QString user = obj.value("user").toString();
	QString newUser = obj.value("newUser").toString();
	QString type = obj.value("type").toString();
	QStringList list;
	list.append(user);
	list.append(newUser);
	return list;
}

QStringList Serialize::updatePswUnserialize(QString utente)
{
	QJsonDocument doc = QJsonDocument::fromJson(utente.toLatin1());
	QJsonObject obj = doc.object();
	QString psw = obj.value("psw").toString();
	QString type = obj.value("type").toString();
	QString user = obj.value("user").toString();
	QStringList list;
	list.append(psw);
	list.append(user);
	return list;
}


QString Serialize::filenameSerialize(QString filename, int type)
{
	QJsonObject file;
	file.insert("filename", QJsonValue(filename));
	file.insert("type", type);
	QJsonDocument doc(file);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QString Serialize::filenameUnserialize(QString file)
{
	QJsonDocument doc = QJsonDocument::fromJson(file.toLatin1());
	QJsonObject obj = doc.object();
	QString filename = obj.value("filename").toString();
	QString type = obj.value("type").toString();
	return filename;
}

QString Serialize::messageSerialize(Message m, int type)
{
	QJsonObject obj;
	Symbol s = m.getSymbol();
	int option = m.getType();
	int sender = m.getGen();
	obj.insert("type", QJsonValue(type));
	obj.insert("option", QJsonValue(option));
	obj.insert("sender", QJsonValue(sender));
	QChar c = s.getC();
	int id = s.getSID(); int counter = s.getCounter(); QFont font = s.getFont(); QColor color = s.getColor();
	QString f = font.toString(); int red = color.red(); int green = color.green(); int blue = color.blue();
	obj.insert("c", QJsonValue(c.unicode()));
	obj.insert("Sid", QJsonValue(id));
	obj.insert("ct", QJsonValue(counter));
	obj.insert("f", QJsonValue(f));
	obj.insert("r", QJsonValue(red));
	obj.insert("g", QJsonValue(green));
	obj.insert("b", QJsonValue(blue));
	std::vector<int> pt_fraz = s.getFrz();
	QJsonArray vec;
	for (auto i = 0; i < pt_fraz.size(); i++) {
		int n = pt_fraz.at(i);
		vec.append(QJsonValue(n));
	}
	obj.insert("pt", QJsonValue(vec));
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

Message Serialize::messageUnserialize(QString mes)
{
	QJsonDocument doc = QJsonDocument::fromJson(mes.toLatin1());
	QJsonObject obj = doc.object();
	int id = obj.value("Sid").toInt();
	int counter = obj.value("ct").toInt();
	QChar c = QChar(obj.value("c").toInt());
	QFont font; font.fromString(obj.value("f").toString());
	int red = obj.value("r").toInt(); int green = obj.value("g").toInt(); int blue = obj.value("b").toInt();
	QColor color(red, green, blue);
	QJsonArray a = obj.value("pt").toArray();
	std::vector<int> vec;
	for (auto i = 0; i < a.size(); i++) {
		int n = a.at(i).toInt();
		vec.push_back(n);
	}
	Symbol s(counter, id, c, font, color);
	s.Initialize(vec);
	int option = obj.value("option").toInt();
	int gen = obj.value("sender").toInt();
	Message m(s, option, gen);
	return m;
}

QString Serialize::imageSerialize(QPixmap image, int type)
{
	QJsonObject obj;
	obj.insert("img", this->jsonValFromPixmap(image));
	obj.insert("type", QJsonValue(type));
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QPixmap Serialize::imageUnserialize(QString img)
{
	QJsonDocument doc = QJsonDocument::fromJson(img.toLatin1());
	QJsonObject obj = doc.object();
	QPixmap p = this->pixmapFrom(obj.value("img"));
	return p;
}

QJsonValue Serialize::jsonValFromPixmap(const QPixmap & p)
{
	QBuffer buffer;
	buffer.open(QIODevice::WriteOnly);
	p.save(&buffer, "JPG");
	auto const encoded = buffer.data().toBase64();
	return { QLatin1String(encoded) };
}

QPixmap Serialize::pixmapFrom(const QJsonValue & val)
{
	auto const encoded = val.toString().toLatin1();
	QPixmap p;
	p.loadFromData(QByteArray::fromBase64(encoded), "JPG");
	return p;
}

QString Serialize::responseSerialize(QString str, int type)
{
	QJsonObject obj;
	obj.insert("response", QJsonValue(str));
	obj.insert("type", QJsonValue(type));
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QString Serialize::responseUnserialize(QString str)
{
	QJsonDocument doc = QJsonDocument::fromJson(str.toLatin1());
	QJsonObject obj = doc.object();
	QString res = obj.value("response").toString();
	return res;
}

QString Serialize::fileListSerialize(QStringList list, int type)
{
	QJsonObject obj; int id = 0;
	obj.insert("type", QJsonValue(type));
	obj.insert("size", QJsonValue(list.size()));
	QString key;
	for (QString s : list) {
		std::string idstr = std::to_string(id);
		key = QString(idstr.c_str());
		obj.insert(key, QJsonValue(s));
		id += 1;
	}
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QStringList Serialize::fileListUnserialize(QString str)
{
	QJsonDocument doc = QJsonDocument::fromJson(str.toLatin1());
	QJsonObject obj = doc.object();
	int size = obj.value("size").toInt();
	QStringList list; QString key;
	for (int id = 0; id < size; id++) {
		std::string idstr = std::to_string(id);
		key = QString(idstr.c_str());
		QString name = obj.value(key).toString();
		list.append(name);
	}
	return list;
}

int Serialize::getTypeSerialization(QString json)
{
	QJsonDocument doc = QJsonDocument::fromJson(json.toLatin1());
	QJsonObject obj = doc.object();
	int type = obj.value("type").toDouble();
	return type;
}


QStringList Serialize::symbolsSerialize(std::vector<Symbol> symbols, int type)
{
	QStringList list;
	for (auto i = 0; i < symbols.size(); i++) {
		QJsonObject obj;
		Symbol s = symbols.at(i);
		QChar c = s.getC();
		int id = s.getSID(); int counter = s.getCounter(); QFont font = s.getFont(); QColor color = s.getColor();
		QString f = font.toString(); int red = color.red(); int green = color.green(); int blue = color.blue();
		obj.insert("type", QJsonValue(type));
		obj.insert("c", QJsonValue(c.unicode()));
		obj.insert("Sid", QJsonValue(id));
		obj.insert("ct", QJsonValue(counter));
		obj.insert("f", QJsonValue(f));
		obj.insert("r", QJsonValue(red));
		obj.insert("g", QJsonValue(green));
		obj.insert("b", QJsonValue(blue));
		std::vector<int> pt_fraz = s.getFrz();
		QJsonArray vec;
		for (auto i = 0; i < pt_fraz.size(); i++) {
			int n = pt_fraz.at(i);
			vec.append(QJsonValue(n));
		}
		obj.insert("pt", QJsonValue(vec));
		QJsonDocument doc(obj);
		QString strJson(doc.toJson(QJsonDocument::Compact));
		list.append(strJson);
	}
	return list;
}

std::vector<Symbol> Serialize::symbolsUnserialize(QStringList symbols)
{
	std::vector<Symbol> vett;
	for (auto str : symbols) {
		QJsonDocument doc = QJsonDocument::fromJson(str.toLatin1());
		QJsonObject obj = doc.object();
		int id = obj.value("Sid").toInt();
		int counter = obj.value("ct").toInt();
		QChar c = QChar(obj.value("c").toInt());
		QFont font; font.fromString(obj.value("f").toString());
		int red = obj.value("r").toInt(); int green = obj.value("g").toInt(); int blue = obj.value("b").toInt();
		QColor color(red, green, blue);
		QJsonArray a = obj.value("pt").toArray();
		std::vector<int> vec;
		for (auto i = 0; i < a.size(); i++) {
			int n = a.at(i).toInt();
			vec.push_back(n);
		}
		Symbol s(counter, id, c, font, color);
		s.Initialize(vec);
		vett.push_back(s);
	}
	return vett;
}

QStringList Serialize::fromBlockToList(QString read) {
	QStringList list; QString json;
	for (QChar c : read) {
		if (c == '{') {
			json.clear();
			json.append(c);
		}
		else if (c == '}') {
			json.append(c);
			list.append(json);
		}
		else {
			json.append(c);
		}
	}
	return list;
}

QString Serialize::fromSymbolToJson(Symbol s)
{
	QJsonObject obj;
	QChar c = s.getC();
	int id = s.getSID(); int counter = s.getCounter(); QFont font = s.getFont(); QColor color = s.getColor();
	QString f = font.toString(); int red = color.red(); int green = color.green(); int blue = color.blue();
	obj.insert("c", QJsonValue(c.unicode()));
	obj.insert("Sid", QJsonValue(id));
	obj.insert("ct", QJsonValue(counter));
	obj.insert("f", QJsonValue(f));
	obj.insert("r", QJsonValue(red));
	obj.insert("g", QJsonValue(green));
	obj.insert("b", QJsonValue(blue));
	std::vector<int> pt_fraz = s.getFrz();
	QJsonArray vec;
	for (auto i = 0; i < pt_fraz.size(); i++) {
		int n = pt_fraz.at(i);
		vec.append(QJsonValue(n));
	}
	obj.insert("pt", QJsonValue(vec));
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

Symbol Serialize::fromJsonToSymbol(QString json)
{
	QJsonDocument doc = QJsonDocument::fromJson(json.toLatin1());
	QJsonObject obj = doc.object();
	int id = obj.value("Sid").toInt();
	int counter = obj.value("ct").toInt();
	QChar c = QChar(obj.value("c").toInt());
	QFont font; font.fromString(obj.value("f").toString());
	int red = obj.value("r").toInt(); int green = obj.value("g").toInt(); int blue = obj.value("b").toInt();
	QColor color(red, green, blue);
	QJsonArray a = obj.value("pt").toArray();
	std::vector<int> vec;
	for (auto i = 0; i < a.size(); i++) {
		int n = a.at(i).toInt();
		vec.push_back(n);
	}
	Symbol s(counter, id, c, font, color);
	s.Initialize(vec);
	return s;
}

QString Serialize::WrapSerialize(QStringList list, int type) {
	QJsonObject obj;
	QString str = "";
	for (QString s : list) {
		str.append(s).append("_");
	}
	obj.insert("l", QJsonValue(str));
	obj.insert("type", QJsonValue(type));
	QJsonDocument doc(obj);
	QString strJson(doc.toJson(QJsonDocument::Compact));
	return strJson;
}

QStringList Serialize::WrapUnSerialize(QString str) {
	QJsonDocument doc = QJsonDocument::fromJson(str.toLatin1());
	QJsonObject obj = doc.object();
	QString l = obj.value("l").toString();
	QStringList list = l.split("_");
	return list;
}