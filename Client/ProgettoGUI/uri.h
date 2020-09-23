#include <iostream>
#include <string>

#pragma once
class uri
{
	std::string data;
	bool encoded;
	const int op = 0x0101;
public:
	uri();									//Costruttore Default
	uri(std::string text, bool isencoded);	//Costruttore
	~uri();									//Distruttore

	const std::string getURI();
	const std::string resolveURI();
	bool isEncoded();
};
