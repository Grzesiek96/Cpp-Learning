#pragma once
using namespace std;
#include <string>
struct Zasoby
{
	Zasoby() {
		godzina_zdarzenia = "00:00"; data_zdarzenia = "00/00/30"; priorytet_zdarzenia = 1; 
		opis_zdarzenia = "brak";
		cout << "Konstruktor klasy zasoby" << endl;
	}
	string godzina_zdarzenia;
	string data_zdarzenia;
	uint8_t priorytet_zdarzenia;
	string opis_zdarzenia;
};

