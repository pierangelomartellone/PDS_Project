#include "File.h"


File::File(std::string filename)

{
	this->filename = filename;
	this->author = author;
	peopleworking = 0;
	threadid = -1;
}

File::File()
{
	peopleworking = 0;
	threadid = -1;
}

void File::setAuthor(Utente u)
{
	author = u;
}

int File::getPeopleWorking() {
	return peopleworking;
}

void File::addPeopleWorking() {
	peopleworking++;
}

void File::removePeopleWorking() {
	peopleworking--;
}

void File::setThreadID(int id) {
	threadid = id;
}

int File::getThreadID() {
	return threadid;
}

std::string File::getPath()
{
	return "./Files" + filename;
}

std::string File::getFilename() const
{
	return this->filename;
}

std::string File::getFilename()
{
	return this->filename;
}

bool File::operator==(File u2) {
	if (filename != u2.filename) return false;

	return true;
}

File::~File()
{
}
