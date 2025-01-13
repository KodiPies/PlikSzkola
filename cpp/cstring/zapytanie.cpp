#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dane[20];
    char dI[20];

    cout << "Podaj imię i nazwisko: ";
    cin.getline(dane, 20);

    cout << "Podaj drugie imię: ";
    cin.getline(dI, 20);

    char daneCz[20];
    strcpy(daneCz, strchr(dane, ' '));

    char drugieI[20];
    strcpy(drugieI, strcat(dI, daneCz));

    char pelneDane[40];
    for (int i = 0; dane[i] != ' '; i++)
    {
        pelneDane[i] = dane[i];
    }
    strcat(pelneDane, " ");
    strcat(pelneDane, drugieI);

    cout << pelneDane;

    return 0;
}

// POBIERAMY OD UZYTKOWNIKA imie i nazwisko do jednego cstringa. Do drugiego pobieramy drugie imie.
//  Przy pomocy funkcji z biblioteki cstring oraz tablic znaków utwórz string który bedzie mial format pierwszeimie drugie imie nazwisko.
//  We: 2cnapisy. Wy: 1cnapis.