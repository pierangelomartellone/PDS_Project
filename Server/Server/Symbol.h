#pragma once
#include <vector>
#include <array>
#include <QFont>
#include <QColor>

class Symbol
{
	//Q_OBJECT
private:
	char c;
	QChar qc;
	std::array<int, 2> id;
	std::vector<int> pt_fraz;
	QFont font;
	QColor color;
public:
	Symbol();
	Symbol(int index, int sId, QChar caratt, QFont font, QColor color);
	~Symbol();
	void Initialize(std::vector<int> vett);
	std::vector<int> getFrz();
	int getSID();
	QChar getC();
	int getCounter();
	void setSID(int SID);
	QFont getFont();
	QColor getColor();
};