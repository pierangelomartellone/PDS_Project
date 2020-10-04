#include "CRDT.h"
#include <Symbol.h>

CRDT::CRDT(int siteid)
{
	_siteId = siteid;
	_counter = 0;
	_deleteIndex = -1;
}
CRDT::CRDT()
{
	_siteId = -1;
	_counter = 0;
	_deleteIndex = -1;
}

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
				_deleteIndex = i;
				break;
			}
		}
	}

}

void CRDT::fromFiletoSymbols(std::string filename){

	QColor c(0, 0, 0);
	QFont f("Segoe UI Light");
	std::vector<int> ptfrz;
	std::ifstream iFile(filename);
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
			}
				
		}
			
	}
	iFile.close();
}

void CRDT::deleteSymbols() {

	this->_symbols.erase(this->_symbols.begin());
}

int CRDT::getSiteID()
{
	return this->_siteId;
}

std::vector<Symbol> CRDT::getSymbols()
{
	return this->_symbols;
}


void CRDT::fromSymbolstoFile(std::string filename) {
	std::ofstream oFile(filename);
	for (Symbol s : this->_symbols) {
		if (oFile.is_open())
			oFile << s.getC().toLatin1();
	}
	oFile.close();
	
}

Message CRDT::localInsert(int index, QChar value, QFont f, QColor c) {    //index, color e font bisogna ricavarli dalla casella di testo
	std::vector<int> temp;
	Symbol s(this->_counter, this->_siteId, value, f, c);

	if (index == 0) {
		if (this->_symbols.size() != 0) {
			temp = this->_symbols[index].getFrz();
			temp.at(temp.size() - 1)--;
			s.Initialize(temp);
			this->_symbols.insert(this->_symbols.begin() + index, s);
			this->_counter++;
		}
		else {
			temp.push_back(0);
			s.Initialize(temp);
			this->_symbols.insert(this->_symbols.begin() + index, s);
			this->_counter++;
		}
	}

	else if (index >= this->_symbols.size()) { //caso di inserimento in coda o in qualunque caso in cui inserisco direttamente nella casella index 
		temp.push_back(index); //l'indice in cui inserisco diventa la parte frazionaria (intero)
		s.Initialize(temp); //inizializzo la parte frazionaria
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;
	}

	else if (this->_symbols[index - 1].getFrz().size() == this->_symbols[index].getFrz().size())
	{
		temp = this->_symbols[index - 1].getFrz();
		temp.push_back(5);
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;

	}
	else if (this->_symbols[index - 1].getFrz().size() < this->_symbols[index].getFrz().size()) {
		temp = this->_symbols[index].getFrz();
		temp.at(temp.size() - 1)--;
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;
	}
	else if (this->_symbols[index - 1].getFrz().size() > this->_symbols[index].getFrz().size()) {
		temp = this->_symbols[index - 1].getFrz();
		temp.at(temp.size() - 1)++;
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;

	}

	Message m(s, 1, this->getSiteID()); //se faccio un inserimento allora tipo =1 else tipo =0
	return m;

}

Message CRDT::localInsert(int index, char value) {    // da non usare

	QColor c(0, 0, 0);
	QFont f("Helvetica");
	std::vector<int> temp;
	Symbol s(this->_counter, this->_siteId, value, f, c);


	if (index >= this->_symbols.size()) { //caso di inserimento in coda o in qualunque caso in cui inserisco direttamente nella casella index 
		temp.push_back(index); //l'indice in cui inserisco diventa la parte frazionaria (intero)
		s.Initialize(temp); //inizializzo la parte frazionaria
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;
	}

	else if (this->_symbols[index - 1].getFrz().size() == this->_symbols[index].getFrz().size())
	{
		temp = this->_symbols[index - 1].getFrz();
		temp.push_back(5);
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;

	}
	else if (this->_symbols[index - 1].getFrz().size() < this->_symbols[index].getFrz().size()) {
		temp = this->_symbols[index].getFrz();
		temp.at(temp.size() - 1)--;
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;
	}
	else if (this->_symbols[index - 1].getFrz().size() > this->_symbols[index].getFrz().size()) {
		temp = this->_symbols[index - 1].getFrz();
		temp.at(temp.size() - 1)++;
		s.Initialize(temp);
		this->_symbols.insert(this->_symbols.begin() + index, s);
		this->_counter++;

	}

	Message m(s, 1, this->getSiteID()); //se faccio un inserimento allora tipo =1 else tipo =0
	return m;

}

Message CRDT::localErase(int index){
	Symbol s(this->_symbols[index]);
	this->_symbols.erase(this->_symbols.begin() + index);
	//se faccio un inserimento allora tipo =1 else tipo =0
	Message m(s, 0, this->getSiteID()); //se faccio un inserimento allora tipo =1 else tipo =0
	return m;
}

void CRDT::copySymbols(std::vector<Symbol>& listaSimboli)
{
	this->_symbols = listaSimboli;
	// aggiorna counter
	int maxcounter = 0;
	for (Symbol s : this->_symbols) {
		if (s.getSID() == _siteId && maxcounter < s.getCounter()) 
			maxcounter = s.getCounter();
	}
	_counter = maxcounter+1;
}

int CRDT::getDeleteIndex() {
	int valore = _deleteIndex;
	this->_deleteIndex = -9;
	return valore;
}


CRDT::~CRDT()
{
}