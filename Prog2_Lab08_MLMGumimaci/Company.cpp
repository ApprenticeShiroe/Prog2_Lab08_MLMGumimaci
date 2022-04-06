#include "Company.h"

using namespace std;

Company::Company() :businessName("Null"), VATIN("0"){}

Company::Company(string pBusinessName, string pVATIN) : businessName(pBusinessName), VATIN(pVATIN){}

Company::Company(const Company& theOther) : Partner(theOther), businessName(theOther.businessName), VATIN(theOther.VATIN) {}

Company::~Company() {
	//van string oszt�lyunk �s neki van destruktora �gy most nem kell destruktor
}

void Company::setBusinessName(string p) {
	businessName = p;
}

void Company::setVATIN(string p) {
	VATIN = p;
}


string Company::getBusinessName()const {
	return businessName;
}

string Company::getVATIN()const {
	return VATIN;
}