#pragma once
#include<memory>

//KLASA TWORZACA TABLICE DYN 1D
class CIntArray 
{
	static const unsigned int DOMYSLNY_ROZMIAR = 5;

private:
	int *_wskTablica;
	unsigned int _uRozmiar;
public:
	//-------------------------------------------------------------
	//__________ KONSTRUKTORY + DESTRUKTOR ________________________
	CIntArray()
	{
		_uRozmiar = DOMYSLNY_ROZMIAR;
		_wskTablica = new int[_uRozmiar];
	}
	CIntArray(unsigned int rozmiar)
	{
		_uRozmiar = rozmiar;
		_wskTablica = new int[_uRozmiar];
	}
	~CIntArray()
	{
		delete[] _wskTablica;
	}
	//-------------------------------------------------------------

	//________________ METODY _____________________________________
	int Pobierz(int Indeks)
	{
		if (Indeks < _uRozmiar) return _wskTablica[Indeks];
		else
		{
			return 0;
		}
	}
	bool Ustaw(int Indeks, int Wartosc)
	{
		if (Indeks >= _uRozmiar)return false;
		else
			_wskTablica[Indeks] = Wartosc;
	}
	unsigned Rozmiar() { return _uRozmiar; }

	bool ZmienRozmiar(unsigned NowyRozmiar)
	{
		//_____ Czy nowy rozmiar > od starego
		if (!(NowyRozmiar) > _uRozmiar)return false;
		
		//_____ Ponowna alokacja pamiêci
		int *pNowaTablica = new int[NowyRozmiar];

		//________ Kopiowanie pamiêci (do, z, rozmiar *sizeof(typ danych))
		memcpy(pNowaTablica, _wskTablica, _uRozmiar * sizeof(int));

		//____ Wyczyszczenie pamiêci starej tablicy (i tak zbêdne dane sa w niej)
		delete[] _wskTablica;

		_wskTablica = pNowaTablica;
		_uRozmiar = NowyRozmiar;
		return true;
	}
};

class CIntArray2D
{
	static const int DOMYSLNY_ROZMIAR = 10;

private:
	int _IloscWierszy;
	int _IloscKolumn;
	int **wskTablica2D;

public:
	//-------------------------------------------------------------
	//__________ KONSTRUKTORY + DESTRUKTOR ________________________
	CIntArray2D(int Wiersze, int Kolumny)
	{
		_IloscKolumn = Kolumny;
		_IloscWierszy = Wiersze;
		wskTablica2D = new int*[_IloscKolumn];

		for (int i = 0; i < _IloscKolumn; i++)
		{
			wskTablica2D[i] = new int[_IloscWierszy];
		}
	}
	~CIntArray2D() {
		for (int i = 0; i < _IloscKolumn; i++)
			delete[] wskTablica2D[i];

		delete[] wskTablica2D;
	}

	//-------------------------------------------------------------
	//__________ METODY ___________________________________________

	void WypelnienieTablicy() {
		for (int i = 0; i < _IloscKolumn; i++)
		{
			for (int j = 0; j < _IloscWierszy; j++)
				wskTablica2D[i][j] = i*j;
		}
	}
};