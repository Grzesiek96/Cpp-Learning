//#Autor: Grzegorz Pietrzykowski
// KopiowanieTekstuTxtCsv.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include "czytajPlik.h"
#include "CzytajTXT.h"
#include "CzytajCSV.h"
#include "piszPdf.h"
#include "piszHtml.h"

#include "Klient.h"

//#include "piszPlik.h"
int main()
{
    CzytajTXT plik1;
    CzytajCSV plik2;
    PiszPdf* plikPDF = new PiszPdf;
    PiszHtml* plikHTML = new PiszHtml;

    plik1.wczytajPlik("plik.txt");//co oznacza warning - unikaj obiektów z niestandardowym konstruowaniem i niszczeniem
    plik2.wczytajPlik("plik.csv");

    Klient czytnik1; 

    czytnik1.wczytajRekordy(plik1.pZasoby);
    czytnik1.wczytajRekordy(plik2.pZasoby);

    czytnik1.czyZapiszHtml(plikPDF);
    czytnik1.czyZapiszPdf("31/05/20", plikHTML);//jaki będzie skutek przekazania wskaznika do tego samego pliku
    //dlaczego nie mogę alokować pamieci wewnatrz klasy Klient.cpp??

    //RECZNE DODAWANIE REKORDOW ZAPISU
    //czytnik1.zapiszRekordy(plikPDF);
    //czytnik1.zapiszRekordy(plikHTML);

    czytnik1.piszdoPlik();
}

