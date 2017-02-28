#include "stdafx.h"
#include "Klasy.h"

using namespace std;

int main()
{
	//--------------------------------------------------------------------
	//_________ Referencja pokazuje wartosc Zmiennej _____________________
	short int Zmienna=5;
	short int &Reffer = Zmienna;
	cout << Reffer << endl;
	Zmienna = 10;
	cout << Reffer << endl;

	CFoo Foo;
	Foo.Get() = 50.0;

	cout << Foo.Get() << endl;

	//--------------------------------------------------------------------
	//_________ WSK do funkcji ___________________________________________
	void(*wskFunkcji)();
	wskFunkcji = &Funkcja;
	(*wskFunkcji)();
	
	//--------------------------------------------------------------------
	//_________ WSK do PobierzLiczbe() ___________________________________________

	int (*wskPobierzLiczbe) (); //typ (*nazwa) (void/ typ zwracany) 1:1 jak funkcja

	wskPobierzLiczbe = &PobierzLiczbe;

	getch();
    return 0;
}

