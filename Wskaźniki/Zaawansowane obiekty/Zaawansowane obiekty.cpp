#include "stdafx.h"
#include "Klasy.h"

int main()
{
	CFoo Foo;
	Wypisz(&Foo); //w klasie jest wsk na CFoo, wi�c przekazuje REF na obiekt Foo

	CFoo *Obiekt = new CFoo;
	
	Obiekt->ZmienNapis2("Herold");
	Obiekt->Wypisz();
	delete Obiekt;

	_getch();
    return 0;
}

