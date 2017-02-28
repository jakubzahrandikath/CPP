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
		if (!(NowyRozmiar) > _uRozmiar)return false;
		
		int *pNowaTablica = new int[NowyRozmiar];
		memcpy(pNowaTablica, _wskTablica, _uRozmiar * sizeof(int));
		delete[] _wskTablica;

		_wskTablica = pNowaTablica;
		_uRozmiar = NowyRozmiar;
		return true;
	}
};