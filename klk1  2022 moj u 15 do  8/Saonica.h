#pragma once
#include "Igracke.h"
#include "Hrana.h"
class Saonica
{
	int N;
	int tren;
	Paketic** paketi;
public:
	Saonica(int n)
	{
		N = n;
		tren = 0;
		paketi = new Paketic * [N];
	}
	void dodaj(Paketic* p)
	{
		if (tren < N)
			paketi[tren++] = p;

	}
	void izbaci(char* address)
	{
		int i = 0;
		while (i < tren && paketi[i]->getAdresa()!=address)
			i++;
		delete paketi[i];//nzm zasto ne rade destruktori
		for (int j = i; j < tren - 1; j++)
			paketi[j] = paketi[j + 1];
		tren--;
	}
	void prikaz(ostream& out)
	{
		for (int i = 0; i < tren; i++)
		{
			paketi[i]->prikaz(out);
			out << endl;
		}
	}
	int srednjaCena()
	{
		int sr=0;//srednja cena
		for (int i = 0; i < tren; i++)
		{
			sr += paketi[i]->izracunajCenu();
		}
		sr /= tren;
		return sr;
	}
	Paketic* najtezi()
	{
		int ind = 0;
		for (int i = 1; i < tren; i++)
			if (paketi[ind]->getTezina() < paketi[i]->getTezina())
				ind = i;
		return paketi[ind];
	}
	~Saonica()
	{
		if (paketi != nullptr)
		{
			for (int i = 0; i < tren; i++)
				delete paketi[i];
			delete[] paketi;
			paketi = nullptr;
		}
	}
};

