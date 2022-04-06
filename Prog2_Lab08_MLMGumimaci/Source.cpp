#include <stdio.h>
#include <iostream>
#include <ctime>
#include "Partner.h"
#include "Company.h"
#include "Person.h"

//disclaimer: Még nem tökéletes, van benne pár error amit nem értek. Még át kell néznem és possibly
// átírni az egész Company cpp-t és h-t

using namespace std;
int main() {
	time(NULL);
	Company c1;
	Company c2;
	Person p1;
	Person p2("Alma", "Nev", "342643142");
	Person p3(p2);
	cout << p3 << endl;

	return 0;
}