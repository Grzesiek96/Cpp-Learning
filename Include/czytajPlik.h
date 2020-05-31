#pragma once
#include <string>
#include <iostream>
#include "Zasoby.h"
using namespace std;

class CzytajPlik
{

public:
	string nazwaPliku;	
	Zasoby* pZasoby;
	virtual Zasoby wczytajPlik(string nazwa)=0;//metoda czysto wirtualna
	
};
//wykorzystano Dependency Inversion Principle wraz z Idiomem PIMPL

// dzieki rozwiazaniu Dependency Inversion Principle nie ma znaczenia z jakiego rodzaju pliku
//korzystamy i tak wykona siê nasz program
