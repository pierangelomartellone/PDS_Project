#include "Message.h"

Message::~Message()
{
}

Message::Message(Symbol simbolo, int tipo, int generatore)
{
	this->s = simbolo;
	//se faccio un inserimento allora tipo =1 else tipo =0
	this->type = tipo;
	this->gen = generatore;
}

Symbol Message::getSymbol()const
{
	return this->s;
}

int Message::getType()const
{
	return this->type;
}

int Message::getGen() const
{
	return this->gen;
}