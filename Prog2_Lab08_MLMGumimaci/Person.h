#pragma once
#include "Partner.h"

class Person :public Partner {
	std::string firstName;
	std::string lastName;
	std::string taxNumber;
public:
	Person();
	Person(const Person&);
	Person(std::string, std::string, std::string);
	~Person();

	void setFirstName(std::string);
	void setLastName(std::string);
	void setTaxNumber(std::string);

	std::string getFirstName()const;
	std::string getLastName()const;
	std::string getTaxNumber()const;
};

