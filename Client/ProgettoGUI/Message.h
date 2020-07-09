#pragma once
#include "Symbol.h"

class Message
{
private:
	Symbol s;
	int type;
	int gen;
public:
	Message();
	~Message();
	Message(Symbol simbolo, int tipo, int generatore);
	Symbol getSymbol()const;
	int getType()const;
	int getGen()const;
};
