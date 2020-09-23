#include "uri.h"


//Costruttore Default
uri::uri() :encoded(false), data("") {
	if (_DEBUG) std::cout << std::endl << "--- Costruttore di Default ---" << std::endl;
}


//Costruttore
uri::uri(std::string text, bool isencoded) : encoded(isencoded) {
	int l;
	if (!encoded) l = text.length() - 4;
	else l = text.length();
	for (int i = 0; i < l; ++i) {
			int var = text[i];
			var ^= op;
			char* a = new char;
			*a = var;
			data += *a;
	}
}

const std::string uri::getURI() {
	std::string b;
	if (encoded) {
		for (int i = 0; i < data.length(); ++i) {
			int var = data[i];
			var ^= op;
			char* a = new char;
			*a = var;
			b += *a;
		}
		return b;
	}
	else return data;
}

const std::string uri::resolveURI() {
	std::string b;
	if (!encoded) {
			for (int i = 0; i < data.length(); ++i) {
				int var = data[i];
				var ^= op;
				char* a = new char;
				*a = var;
				b+= *a;
			}
			b += ".txt";
			return b;
	}
	else {
		b = data.append(".txt");
		return b;
	}
}

bool uri::isEncoded() {
	return encoded;
}

//Distruttore
uri::~uri() {
}