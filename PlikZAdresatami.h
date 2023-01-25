#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <fstream>
#include "PlikTekstowy.h"

using namespace std;


class PlikZAdresatami : public PlikTekstowy
{

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami) {};

    void dopisz(string tekst);

};


#endif
