#include <iostream>
#include <cmath>
using namespace std;
struct dane
{
    double oceny;
    int waga;
};

void pobieranieOc(dane *mobi, int liczbaOcen)
{
    for (int i = 0; i < liczbaOcen; i++)
    {
        cout << "Podaj ocene: ";
        cin >> mobi[i].oceny;

        cout << "Podaj wage: ";
        cin >> mobi[i].waga;
    }
}

void srednia(dane* mobi, int liczbaOcen)
{
    double liczOceny, razem = 0, wagaLacznie;
    for (size_t i = 0; i < liczbaOcen; i++)
    {
        liczOceny = mobi[i].oceny * mobi[i].waga;
        razem = razem + liczOceny;
        liczOceny = 0;
    }

    for (int i = 0; i < liczbaOcen; i++)
    {
        wagaLacznie = wagaLacznie + mobi[i].waga;
    }

    cout << "srednia ocen: " << razem / wagaLacznie;
}