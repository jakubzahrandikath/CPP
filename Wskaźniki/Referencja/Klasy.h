#pragma once
#include<string>
#include<iostream>;
#include<conio.h>

using namespace std;

int Wyszukaj(const string & Szukana, const string & DoPrzeszukania);

class CFoo
{
private:
	double _zmiennaPrywatna;
public:
	//_______________ REF & DAJE MOZLIWOSC MODYFIKOWANIA PRIVATE __________
	double & Get();
};

void Funkcja();

int PobierzLiczbe();