#include <iostream>
#include <cmath>
#include "operacje.h"
using namespace std;


int main()
{
    int ileO;
    cout << "Podaj liczbe ocen: ";
    cin >> ileO;
    dane *mobi;
    mobi = new dane[ileO];

    pobieranieOc(mobi, ileO);
    srednia(mobi, ileO);

    return 0;
}