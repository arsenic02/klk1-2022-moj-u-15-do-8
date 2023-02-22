#pragma once
#include "Paketic.h"
class Hrana:public Paketic
{
	int brCok;
	int ukTezina;
	int cenaPoJedTez;
public:
	Hrana(int brc, int ukt, int cpjt, char* a, char* b) :Paketic(a, b)
	{
		brCok = brc;
		ukTezina = ukt;
		cenaPoJedTez = cpjt;
	}
	void prikaz(ostream& out)
	{
		out << " Paketic sa hranom -> Broj cokolada: " << brCok << " Tezina: " << ukTezina << " Cena: " << cenaPoJedTez;//treba i adresa i boja
		Paketic::prikaz(out);
	}
	int getBrCok() { return brCok; }

	int getUkTezCok() { return ukTezina; }

	int getCenaPoJedTez() { return cenaPoJedTez; }

	int izracunajCenu()
	{
		return brCok * ukTezina * cenaPoJedTez;
	}
	int getTezina()
	{
		return ukTezina;
	}
	~Hrana(){};
};

