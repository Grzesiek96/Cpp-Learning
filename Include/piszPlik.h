#pragma once
#include <iostream>
#include <string>
//#include "Zasoby.h"
using namespace std;

class piszPlik
{
	
public:
	string nazwaPliku;
	//Zasoby* pZasoby;
	virtual void piszDoPliku()=0;//metoda czysto wirtualna
	
};

