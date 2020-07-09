#pragma once
#include <string>
#include "Utente.h"

class File
{
private:
	std::string filename;
	std::string date;
	Utente author;
	int peopleworking;
	int threadid;

public:
	File(std::string filename);
	File();

	void setAuthor(Utente u);
	int getPeopleWorking();
	void addPeopleWorking();
	void removePeopleWorking();
	void setThreadID(int id);
	int getThreadID();
	std::string getPath();
	std::string getFilename() const;
	std::string getFilename();
	bool operator==(File u2);
	~File();
};

inline uint qHash(const File f)
{
	int hash = 0;
	int offset = 'a' - 1;
	std::string s = f.getFilename();
	for (auto it = s.begin(); it != s.end(); ++it) {
		hash = hash << 1 | (*it - offset);
	}
	return hash;
}

inline bool operator==(const File &e1, const File &e2)
{
	return e1.getFilename() == e2.getFilename();
}