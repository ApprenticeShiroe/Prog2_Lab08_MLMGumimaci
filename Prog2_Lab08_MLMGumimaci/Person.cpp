#include "Person.h"

using namespace std;

Person::Person():Partner(),firstName("John"),lastName("Doe"),taxNumber("0") {}

Person::Person(string pFirstName, string pLastName, string pTaxNumber):Partner(),firstName(pFirstName),lastName(pLastName),taxNumber(pTaxNumber) {}

Person::Person(const Person& theOther) : Partner(theOther),firstName(theOther.firstName),lastName(theOther.lastName),taxNumber(theOther.taxNumber) {}

Person::~Person() {
	//van string osztályunk és neki van destruktora így most nem kell destruktor
}

void Person::setFirstName(string p) {
	firstName = p;
}

void Person::setLastName(string p) {
	lastName = p;
}

void Person::setTaxNumber(string p) {
	taxNumber = p;
}

string Person::getFirstName()const {
	return firstName;
}

string Person::getLastName()const {
	return lastName;
}

string Person::getTaxNumber()const {
	return taxNumber;
}