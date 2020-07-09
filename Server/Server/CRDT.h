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

public:	
	void process(const Message& m);
	void fromFiletoSymbols(std::string filename);
	void fromFileFormattedtoSymbols(std::string filename);
	void fromSymbolstoFile(std::string filename);
	void fromSymbolstoFileFormatted(std::string filename);
	void deleteSymbols();
	std::vector<Symbol> getSymbols();
};

