#include "PlikZAdresatami.h"

using namespace std;

void dopisz(string tekst)
{
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        if (czyPlikJestPusty())
            plikTekstowy << "To jest poczatek pliku" << endl;

         plikTekstowy << tekst << endl;
    }

    plikTekstowy.close();
}

