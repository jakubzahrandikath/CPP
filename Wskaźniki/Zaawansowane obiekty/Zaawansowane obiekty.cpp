#include "stdafx.h"
#include "Klasy.h"

int main()
{
	CFoo Foo;
	Wypisz(&Foo); //w klasie jest wsk na CFoo, wiêc przekazuje REF na obiekt Foo

	_getch();
    return 0;
}

