#include <iostream>
#include <fstream>
using namespace std;
#include "Saonica.h"
void main()
{
	Saonica* s = new Saonica(6);
		Paketic* p1 = new Igracke(3, 8, 200, (char*)"Omladinska ", (char*)"plava");
		s->dodaj(p1);
		Paketic* p2 = new Igracke(3, 11, 250, (char*)"Njegoseva ", (char*)"plava");
		s->dodaj(p2);
		Paketic* p3 = new Igracke(3, 12, 300, (char*)"Dositejeva ", (char*)"plava");
		s->dodaj(p3);
		Paketic* p4 = new Hrana(5, 5, 50, (char*)"Ratarska ", (char*)"zuta");
		s->dodaj(p4);
		Paketic* p5 = new Hrana(5, 20, 50, (char*)"Niska ", (char*)"zuta");
		s->dodaj(p5);
		Paketic* p6 = new Hrana(5, 14, 50, (char*)"Joviceva ", (char*)"zuta");
		s->dodaj(p6);
	
	//s->prikaz(cout);// ne trazi se prikaz na konzoli
	ofstream izlaz("pokloni.txt");//radi upis u fajl
	s->prikaz(izlaz);
	cout << "Srednja vrednost tezine paketica je: " << s->srednjaCena()<<endl;
	//cout << "Najtezi paketic je: " << s->najtezi() << endl;
	Paketic* p = s->najtezi();//radi,obrati paznju na ovo
	cout << "Najtezi paketic je: " << endl;
	p->prikaz(cout);
	for (int i = 0; i < 3; i++)
	{
		cout << "Unesi " << i + 1 << ". adresu za izbacivanje: ";
		char* address = new char[100];
		cin.getline(address, 100);
		//cin >> address;
		cout << endl;
		s->izbaci(address);//zeza destruktor??
	}
	cout << "Prikaz paketica nakon izbacivanja adresa: " << endl;
	s->prikaz(cout);

}