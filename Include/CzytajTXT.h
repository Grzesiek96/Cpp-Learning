#pragma once
#include "czytajPlik.h"
#include "Zasoby.h"

class CzytajTXT : public CzytajPlik
{
public:
	virtual Zasoby wczytajPlik(string nazwa);
	CzytajTXT() { 
		pZasoby = new Zasoby();
		cout << "Konstruktor klasy CzytajTXT" << endl;
	}
	~CzytajTXT() { delete pZasoby;}
};

