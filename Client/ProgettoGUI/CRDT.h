#pragma once
#include <Message.h>
#include <QString>
#include <fstream>
#include <iostream>
#include <QFont>
#include <QColor>

class CRDT
{
private:
	std::vector<Symbol> _symbols; //vettore di simboli in cui caricare il file->ogni modifica dei client sul file viene riportata anche in questo vettore cosi da scriverle poi sul file
	int _counter;  //contatore dei simboli inseriti
	int _siteId;   //identificatore per ogni editor
	int _deleteIndex;
	int _deleteBigIndex = -9;
public:	
	CRDT(int siteid);
	CRDT();
	void process(const Message& m);
	void processBig(std::vector<Symbol> v ,int type);
	void fromFiletoSymbols(std::string filename);
	void fromSymbolstoFile(std::string filename);
	Message localInsert(int index, QChar value, QFont f, QColor c);
	Message localInsert(int index, char value);
	Message localErase(int index);
	void copySymbols(std::vector<Symbol>& listaSimboli);
	int getDeleteIndex();
	int getBigDeleteLastIndex();
	void deleteSymbols();
	int getSiteID();
	std::vector<Symbol> getSymbols();
	~CRDT();
};

