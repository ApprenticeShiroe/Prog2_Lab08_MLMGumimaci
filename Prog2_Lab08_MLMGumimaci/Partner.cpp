#include "Partner.h"
#include <ostream>

using namespace std;

long Partner::nextId = 0;

Partner::Partner() :id(nextId++) {
	generatePrivateKey();
}

Partner::Partner(const Partner& theOther):id(nextId++) {
	generatePrivateKey();
}

Partner::~Partner()
{
	delete privateKey;
}

long Partner::getId()const {
	return id;
}

string Partner::getPrivateKey()const {
	return privateKey;
}

void Partner::generatePrivateKey() {
	const char charSet[] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	const int charNum = sizeof(charSet) - 1;
	privateKey = new char[charNum];
	for (int i = 0; i < 2000; i++) {
		privateKey[i] = charSet[rand() % charNum];
	}
	privateKey[2000] = '\0';
}

ostream& operator<<(std::ostream& os, Partner p) {
	os << p.getId() << endl << p.getPrivateKey() << endl;
	return os;
}