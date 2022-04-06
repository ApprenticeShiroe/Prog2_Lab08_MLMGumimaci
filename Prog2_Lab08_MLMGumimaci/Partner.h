#pragma once
#include <stdio.h>
#include <string>


class Partner
{
	static long nextId;
protected:
	long id;
	char* privateKey;
public:
	Partner();
	Partner(const Partner&);
	~Partner();
	
	void generatePrivateKey();
	long getId() const;
	std::string getPrivateKey()const;

};

std::ostream& operator<<(std::ostream&, Partner);