#include "stdafx.h"
#include "Klasy.h"

int Wyszukaj(const string & Szukana, const string & DoPrzeszukania)
{
	for (int i = 0; i < DoPrzeszukania.length() - Szukana.length(); i++)
	{
		if (DoPrzeszukania.substr(i, Szukana.length()) == Szukana)
			return i;
	}
	return -1;
}

void Funkcja()
{
	cout << "Zostalam wywolana!\n";
}

int PobierzLiczbe()
{
	int nLiczba;
	cout << "\nPodaj liczbe\n";
	cin >> nLiczba;
	return nLiczba;
}

double & CFoo::Get()
{
	return _zmiennaPrywatna; 
}
