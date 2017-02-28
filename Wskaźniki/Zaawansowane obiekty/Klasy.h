#pragma once
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

class CFoo
{
	friend void Wypisz(CFoo*); //nie ma znaczenia jej lokalizacja w klasie
private:
	string _PrywatnyNapis;

public:
	CFoo() { _PrywatnyNapis = "Kocham C++!!!\n"; }
};

class CCircle
{
private: 
	struct {
		float _x, _y;
	} _pktSrodka;

	float _Promien;

public:
	CCircle(float Promien, float fX = 0.0, float fY = 0.0)
	{
		_Promien = Promien;
		_pktSrodka._x = fX;
		_pktSrodka._y = fY;
	}
	
	friend bool PrzecinajaSie(CCircle&, CCircle&);
};