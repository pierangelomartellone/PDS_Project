#include "Symbol.h"

Symbol::Symbol()
{
}

Symbol::Symbol(int index, int sId, char caratt, QFont font, QColor color)
{
	this->c = caratt;
	this->id[0] = sId;
	this->id[1] = index;
	this->font = font;
	this->color = color;
}


Symbol::~Symbol()
{
}

void Symbol::Initialize(std::vector<int> vett)
{
	this->pt_fraz = vett;
}

std::vector<int> Symbol::getFrz()
{
	return this->pt_fraz;
}

int Symbol::getSID()
{
	return this->id[0];
}

char Symbol::getC()
{
	return this->c;
}

int Symbol::getCounter()
{
	return this->id[1];
}

void Symbol::setSID(int SID)
{
	this->id[0] = SID;
}

QFont Symbol::getFont() {
	return this->font;
}

QColor Symbol::getColor()
{
	return this->color;
}