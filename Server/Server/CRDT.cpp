#include "CRDT.h"
#include <Symbol.h>
#include <Serialize.h>

void CRDT::process(const Message& m)
{
	int i = 0;
	if (m.getType() == 1) {  //messaggio di tipo inserimento
		if (this->_symbols.size() != 0) {
			while (i != this->_symbols.size() && m.getSymbol().getFrz() > this->_symbols[i].getFrz()) {
				i++;
			}
			this->_symbols.insert(this->_symbols.begin() + i, m.getSymbol());
		}

		else
			this->_symbols.push_back(m.getSymbol());
	}

	if (m.getType() == 0) {  //messaggio di tipo cancellazione
		for (i = 0; i < this->_symbols.size(); i++) {
			if ((m.getSymbol().getFrz() == this->_symbols[i].getFrz()) && (m.getSymbol().getSID() == this->_symbols[i].getSID())) {
				this->_symbols.erase(this->_symbols.begin() + i);
				break;
			}
		}
	}

}

void CRDT::fromFiletoSymbols(std::string filename){

	QColor c(0, 0, 0);
	QFont f("Segoe UI");
	f.setPointSize(20);
	std::vector<int> ptfrz;
	std::ifstream iFile("./Files/" + filename);
	if (iFile.is_open())
	{
		std::string line;
		int count = 1;
		while (getline(iFile, line)) {
			for (int i = 1; i <= line.size(); i++) {
				Symbol s(i * count, 0, line.c_str()[i-1], f, c);
				ptfrz.push_back(i - 1);
				s.Initialize(ptfrz);
				this->_symbols.push_back(s);
				ptfrz.clear();
			}
			count++;
		}
			
	}
		iFile.close();
}

void CRDT::fromFileFormattedtoSymbols(std::string filename) {

	Serialize ser;
	std::vector<int> ptfrz;
	std::ifstream iFile("./Files/" + filename);
	if (iFile.is_open())
	{
		std::string line;
		int count = 1;
		// a partire dal file come righe di JSON di Symbol 
		// Questa funzione dovrebbe rigenerare il CRDT a partire dai json
		// un json per riga
		while (getline(iFile, line)) {
			Symbol s = ser.fromJsonToSymbol(QString::fromStdString(line));
			ptfrz.push_back(count - 1);
			s.Initialize(ptfrz);
			this->_symbols.push_back(s);
			ptfrz.clear();
			count++;
		}

	}
	iFile.close();
} //// ???????


void CRDT::deleteSymbols() {

	this->_symbols.erase(this->_symbols.begin());
}

std::vector<Symbol> CRDT::getSymbols()
{
	return this->_symbols;
}

void CRDT::fromSymbolstoFile(std::string filename) {
	std::ofstream oFile("./Files/" + filename);
	for (Symbol s : this->_symbols) {
		if (oFile.is_open())
			oFile << s.getC();
	}
	oFile.close();
	
}

void CRDT::fromSymbolstoFileFormatted(std::string filename) {
	Serialize ser;
	std::ofstream oFile("./Files/" + filename);
	for (Symbol s : this->_symbols) {
		if (oFile.is_open())
			oFile << ser.fromSymbolToJson(s).toStdString() + "\n";
	}
	oFile.close();

}