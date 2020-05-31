#include "Klient.h"

void Klient::wczytajRekordy(Zasoby * zasob)
{
	cout << "wczytywanie zasobu" << endl;
	wektorRekordow.push_back(zasob);	
}

void Klient::zapiszRekordy(piszPlik* plik)
{
	
	cout << "wczytywanie zasobu" << endl;
	wektorRekordowPisanych.push_back(plik);
}

void Klient::piszdoPlik()
{
	cout << "Pisz do plik" << endl;
	for (int i = 0; i < wektorRekordowPisanych.size(); i++) {
		wektorRekordowPisanych[i]->piszDoPliku();
	}
	
}



void Klient::czyZapiszHtml(piszPlik *plik)
{	
	cout << "zapisywanie zdarzen o najwyzszym priorytecenie do html" << endl;
	for (int i = 0; i < wektorRekordow.size(); i++) {
		if (wektorRekordow[i]->priorytet_zdarzenia == 1) {
			cout << "zapisuje rekord do html KLIENT" << endl;
			
			wektorRekordowPisanych.push_back(plik);
			//plik++;

		}
		else cout << "nie zapisuje zdarzenia do html" << endl;
	}
}

void Klient::czyZapiszPdf(string dataUstal, piszPlik *plik)
{
	cout << "zapisuje do PDF" << endl;
	for (int i = 0; i < wektorRekordow.size(); i++) {
		if (czyPozniejszaData(wektorRekordow[i]->data_zdarzenia, dataUstal)) {
			cout << "zapisuje rekord do Pdf KLIENT" << endl;
			//PiszPdf* plikPDF = new PiszPdf;//czy jest lepsze rozwiazanie niz to??
			wektorRekordowPisanych.push_back(plik);
		}
		else cout << "nie zapisuje rokordu do Pdf" << endl;
	}
}

bool Klient::czyPozniejszaData(string dataWczyt, string dataUstal)
{
	long int data1[3];//data[0] - dzien, 1-miesiac, 2 rok  
	long int data2[3];

	string tabStr1[3];//czas wczytany DD/MM/YY
	string tabStr2[3];//czas ustalony DD/MM/YY
	int j = 0;
	for (int i = 0; i < 3; i++){
		tabStr1[i] += dataWczyt[j];
		tabStr1[i] += dataWczyt[j + 1];
		tabStr2[i] += dataUstal[j];
		tabStr2[i] += dataUstal[j + 1];
		j += 3;
	}
	for (int i = 0; i < 3; i++) {
		data1[i] = stoi(tabStr1[i]);
		data2[i] = stoi(tabStr2[i]);
	}
	for (int i = 3; i > 0; i--) {
		if(data1[i]> data2[i])//sprawdzanie zaczynamy od roku
			return true;
	}	
	return false;
}

