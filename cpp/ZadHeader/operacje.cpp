#include <iostream>
using namespace std;

struct czas
{
    int dni;
    int tygodnie;
    int miesiace;
    int lata;
};

void obliczanieCzasu(int dniDoDodania, czas &czas)
{
    int czasDni = 0;
    int czasTygodnie = 0;
    int czasMiesiace = 0;
    int czasLata = 0;

    czasLata = dniDoDodania / 360;
    dniDoDodania = dniDoDodania % 360;

    czasMiesiace = dniDoDodania / 30;
    dniDoDodania = dniDoDodania % 30;

    czasTygodnie = dniDoDodania / 7;
    dniDoDodania = dniDoDodania % 7;

    czasDni = dniDoDodania;

    cout << "Lata: " << czasLata << endl;
    cout << "Miesięc/e/y: " << czasMiesiace << endl;
    cout << "Tygodnie: " << czasTygodnie << endl;
    cout << "Dni: " << czasDni << endl;

    czas.dni = czasDni;
    czas.tygodnie = czasTygodnie;
    czas.miesiace = czasMiesiace;
    czas.lata = czasLata;
}

void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
    int czasDni = 0;
    int czasTygodnie = 0;
    int czasMiesiace = 0;
    int czasLata = 0;

    czasLata = staryCzas.lata + nowyCzas.lata;
    czasMiesiace = staryCzas.miesiace + nowyCzas.miesiace;
    czasTygodnie = staryCzas.tygodnie + nowyCzas.tygodnie;
    czasDni = staryCzas.dni + nowyCzas.dni;

    if (czasDni > 6)
    {
        czasTygodnie += czasDni / 6;
        czasDni = czasDni % 6;
    }
    if (czasTygodnie > 6)
    {
        czasMiesiace += czasTygodnie / 6;
        czasTygodnie = czasTygodnie % 6;
    }
    if (czasMiesiace > 29)
    {
        czasLata += czasMiesiace / 30;
        czasMiesiace = czasMiesiace % 30;
    }

    nowyCzas.dni = czasDni;
    nowyCzas.tygodnie = czasTygodnie;
    nowyCzas.miesiace = czasMiesiace;
    nowyCzas.lata = czasLata;
}

void wypisz(czas timex)
{
    cout << timex.lata << endl;
    cout << timex.miesiace << endl;
    cout << timex.tygodnie << endl;
    cout << timex.dni << endl;
}