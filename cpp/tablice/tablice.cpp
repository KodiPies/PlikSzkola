#include <iostream>
using namespace std;
void wypelnij(int tablica[], int rozmiar)
{

    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}

void wypisz(int tablica[], int rozmiar)
{

    for (int i = 0; i < rozmiar; i++)
    {
        cout << "to jest " << 1 + i << " element tablicy\n";
        cout << tablica[i] << endl;
    }
}

int main()
{
    int tab[5];
    wypelnij(tab, 5);
    wypisz(tab, 5);

    return 0;
}