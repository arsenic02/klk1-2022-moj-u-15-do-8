#pragma once
#include "Paketic.h"
class Igracke:public Paketic
{
private:
	int brA;
	int tezA;
	int cenaA;
public:
	Igracke(int ba, int ta, int ca, char* a, char* b) :Paketic(a, b)
	{
		brA = ba;
		tezA = ta;
		cenaA = ca;
	}
	void prikaz(ostream& out)
	{
		out <<"Paket sa igrackama -> Broj automobila: "<< brA << " Tezina: " << tezA << " Cena: " << cenaA;
		Paketic::prikaz(out);
	}
	int izracunajCenu()
	{
		return brA * cenaA;
	}
	int getTezina()
	{
		return tezA;
	}
	~Igracke(){};
};

