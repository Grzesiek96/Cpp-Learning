#pragma once
#include "czytajPlik.h"
#include "Zasoby.h"
class CzytajCSV:public CzytajPlik
{
public:
	virtual Zasoby wczytajPlik(string nazwa);
	CzytajCSV() { 
		pZasoby = new Zasoby();
		cout << "Konstruktor klasy CzytajCSV" << endl;
	}
	~CzytajCSV() { delete pZasoby; }
};

