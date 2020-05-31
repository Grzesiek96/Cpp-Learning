#pragma once
#include "czytajPlik.h"
#include "piszPlik.h"
#include <vector>
#include <string>

using namespace std;

class Klient
{
private:
	std::vector<Zasoby*> wektorRekordow;
	std::vector<piszPlik *> wektorRekordowPisanych;

	string nazwaPliku;
public:
	void wczytajRekordy(Zasoby * zasob);
	void zapiszRekordy(piszPlik * plik);
	void piszdoPlik();

	void czyZapiszHtml(piszPlik *plik);

	void czyZapiszPdf(string dataUstal, piszPlik *plik);
	bool czyPozniejszaData(string dataWczyt, string DataUstalona);//format daty DD/MM/YY
	//Klient() { cout << "konstruktor klasy Klient" << endl; }
};
//klient jest to klasa czytajaca z plików
//dzieki interfejsowi Plik mamy mo¿liwoœæ czytania z roznych rodzajow blikow, bez koniecznosci
//zmieniania implementacji klasy klient
