#include <stdio.h>
#include <iostream>
#include <ctime>
#include "Partner.h"
#include "Company.h"
#include "Person.h"

//disclaimer: M�g nem t�k�letes, van benne p�r error amit nem �rtek. M�g �t kell n�znem �s possibly
// �t�rni az eg�sz Company cpp-t �s h-t

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