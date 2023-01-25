#include <iostream>
#include <fstream>
#include "PlikTekstowy.h"
#include "PlikZAdresatami.h"

using namespace std;



int main()
{
    PlikZAdresatami plikZAdresatami("adresaci.txt");

    plikZAdresatami.dopisz("tekst do dopisania");

    return 0;
}
