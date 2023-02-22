#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class Paketic
{
protected:
	char* adresa;
	char* boja;
public:
	Paketic(char* a,char* b)
	{
		adresa = new char[strlen(a) + 1];
		strcpy(adresa, a);
		boja = new char[strlen(b) + 1];
		strcpy(boja, b);
	}
	virtual void prikaz(ostream& out)
	{
		out << " Adresa: " << adresa << " Boja: " << boja<<endl;
	}
	virtual int izracunajCenu() = 0;
	virtual int getTezina() = 0;
	char* getAdresa()
	{
		return adresa;
	}
	virtual ~Paketic() //{}
	 {
		if (adresa != nullptr)
			delete[] adresa;
		adresa = nullptr;
		if (boja != nullptr)
			delete[]boja;
		boja = nullptr;
	} 
};

