#pragma once
#include <string>
#include "Partner.h"


class Company :public Partner {
	std::string businessName;
	std::string VATIN;
public:
	Company();
	Company(const Company&);
	Company(std::string, std::string);
	~Company();

	void setBusinessName(std::string);
	void setVATIN(std::string);

	std::string getBusinessName()const;
	std::string getVATIN()const;