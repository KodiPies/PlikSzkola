#include <iostream>
#include "operacje.h"


int main()
{
    int dniOdUzytkownika;
    czas staryCzas{6, 6, 29, 2023}, nowyCzas;
    cout << "Podaj ile dni dodać:";
    cin >> dniOdUzytkownika;
    obliczanieCzasu(dniOdUzytkownika, nowyCzas);
    dodajCzas(nowyCzas, staryCzas);
    wypisz(nowyCzas);
    return 0;
}