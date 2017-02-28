#include "stdafx.h"
#include "Klasy.h"

void Wypisz(CFoo *wskFoo)
{
	cout << wskFoo->_PrywatnyNapis;
}

bool PrzecinajaSie(CCircle & Okrag1, CCircle & Okrag2)
{
	float RoznicaX = Okrag2._pktSrodka._x - Okrag1._pktSrodka._x;
	float RoznicaY = Okrag2._pktSrodka._y - Okrag1._pktSrodka._y;
	float Odleglosc = sqrt(RoznicaX*RoznicaX + RoznicaY*RoznicaY);

	return (Odleglosc<Okrag1._Promien + Okrag2._Promien && Odleglosc>abs(Okrag1._Promien - Okrag2._Promien));
}
