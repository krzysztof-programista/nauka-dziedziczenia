#include "PlikTekstowy.h"

using namespace std;

string pobierzNazwePliku()
{
    return NAZWA_PLIKU;
}

bool czyPlikJestPusty()
{
    bool pusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() != 0)
            pusty = false;
    }

    plikTekstowy.close();
    return pusty;
}
