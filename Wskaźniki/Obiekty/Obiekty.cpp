#include "stdafx.h"
#include <iostream>
#include "Klasy.h"
#include <ctime>

using namespace std;

int main()
{
	//TABLICA DYNAMICZNA
	float *pfTablica;
	pfTablica = new float[1024];
	if (pfTablica == NULL)cout << "Brak pamiêci!\n";
	for (int i = 0; i < 1024; i++)
	{
		pfTablica[i] = i * 2.0;
	}

	delete[] pfTablica;

	//KLASA Z DYNAMIKA
	srand(static_cast<unsigned int>(time(NULL)));

	CIntArray aTablica(rand());

	for (int i = 0; i < aTablica.Rozmiar(); i++)
	{
		aTablica.Ustaw(i, rand());
	}
    return 0;
}

