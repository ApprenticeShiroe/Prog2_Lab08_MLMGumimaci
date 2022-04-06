#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Partner
{
	static long nextId;
protected:
	long id;
	char* privateKey;
public:
	Partner();
	Partner(const Partner&);
	
	void generatePrivateKey();
	long getId() const;
	std::string getPrivateKey()const;

};

ostream& operator<<(std::ostream&, Partner);