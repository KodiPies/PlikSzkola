#include <iostream>
#include "operacje.h"
int main()
{
    int dniOdUzytkownika;
    miara staryCzas{6, 6, 29, 2023}, nowyCzas;
    cout << "Podaj ile cali dodać:";
    cin >> dniOdUzytkownika;
    obliczanieCzasu(dniOdUzytkownika, nowyCzas);
    
    wypisz(nowyCzas);
    return 0;
}