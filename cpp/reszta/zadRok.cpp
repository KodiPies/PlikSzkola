#include <iostream>
using namespace std;
struct czas
{
    int Dni;
    int Tygodnie;
    int Miesiace;
    int Rok;
};
void obliczanieCzasu(int czasWDniach, czas& czas)
{
    int czasRok = 0;
    int czasMiesiac = 0;
    int czasTydzien = 0;
    int czasDni = 0;
    czasRok = czasWDniach / 365;
    czasWDniach = czasWDniach % 365;
    czasMiesiac = czasWDniach / 30;
    czasWDniach = czasWDniach % 30;
    czasTydzien = czasWDniach / 7;
    czasWDniach = czasWDniach % 7;
    czasDni = czasWDniach;
    cout << "Lata: " << czasRok << endl;
    cout << "Miesiace: " << czasMiesiac << endl;
    cout << "Tygodnie: " << czasTydzien << endl;
    cout << "Dni: " << czasDni << endl;
    czas.Dni = czasDni;
    czas.Tygodnie = czasTydzien;
    czas.Miesiace = czasMiesiac;
    czas.Rok = czasRok;
}
void dodajCzas(czas& nowyCzas, czas& staryCzas)
{
    int czasRok = 0;
    int czasMiesiac = 0;
    int czasTydzien = 0;
    int czasDni = 0;
    czasRok = staryCzas.Rok + nowyCzas.Rok;
    czasMiesiac = staryCzas.Miesiace + nowyCzas.Miesiace;
    czasTydzien = staryCzas.Tygodnie + nowyCzas.Tygodnie;
    czasDni = staryCzas.Dni + nowyCzas.Dni;
    if (czasDni > 6)
    {
        czasTydzien += czasDni / 7;
        czasDni = czasDni % 7;
    }
    if (czasTydzien > 6)
    {
        czasMiesiac += czasTydzien / 7;
        czasTydzien = czasTydzien % 7;
    }
    if (czasMiesiac > 29)
    {
        czasRok = czasMiesiac / 30;
        czasMiesiac = czasMiesiac % 30;
    }
    if (czasRok > 364) {
        czasRok += czasMiesiac % 365;

    }
    
    nowyCzas.Dni = czasDni;
    nowyCzas.Tygodnie = czasTydzien;
    nowyCzas.Miesiace = czasMiesiac;
    nowyCzas.Rok = czasRok;
}
void wypisz(czas timex) {
    cout << timex.Dni << endl;
    cout << timex.Tygodnie << endl;
    cout << timex.Miesiace << endl;
}
int main() {
    int sekundyOdUzytkownika;
    czas  nowyCzas;
    cout << "podaj ile dni dodac" << endl;
    cin >> sekundyOdUzytkownika;
    obliczanieCzasu(sekundyOdUzytkownika, nowyCzas);
    // dodajCzas(nowyCzas);
    // wypisz(nowyCzas);
    return 0;
}
