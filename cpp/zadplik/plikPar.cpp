#include <iostream>
#include "operacja.h"
using namespace std;

int main()
{
    int rozmiarTablicyLiczb = ileLiczb();
    wpiszDoPliku("liczby.txt", rozmiarTablicyLiczb);
    int *liczby = new int[rozmiarTablicyLiczb];
    odczytZPliku("liczby.txt", rozmiarTablicyLiczb, liczby);
    wypisz(liczby, rozmiarTablicyLiczb);
    cout << ileLiczParzystych(liczby, rozmiarTablicyLiczb);
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int ileLiczb()
{
    int ileLiczb;
    cout << "napisz ile liczb chcesz podac ";
    cin >> ileLiczb;
    return ileLiczb;
}
void wpiszDoPliku(string nazwaPliku, int ileLiczb)
{
    fstream plik;
    int liczba;
    plik.open(nazwaPliku, ios::out);
    if (plik.good())
    {
        for (int i = 0; i < ileLiczb; i++)
        {
            cout << "Podaj liczbe do pliku";
            cin >> liczba;
            plik << liczba << endl;
        }
    }
    plik.close();
}
void odczytZPliku(string nazwaPliku, int ileLiczb, int liczby)
{
    fstream plik;
    plik.open(nazwaPliku, ios::in);
    int i = 0;
    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> liczby[i];
            i++;
        }
    }
    plik.close();
}
int ileLiczParzystych(intliczby, int ileLiczb)
{
    int wystapienia = 0;
    for (int i = 0; i < ileLiczb; i++)
    {
        if (liczby[i] % 2 == 0)
        {
            wystapienia++;
        }
    }
    return wystapienia;
}
void wypisz(int *liczby, int ileLiczb)
{
    for (int i = 0; i < ileLiczb; i++)
    {
        cout << liczby[i] << endl;
    }
}
#include "operacja.cpp"
using namespace std;
int ileLiczb();
void wpiszDoPliku(string nazwaPliku, int ileLiczb);
void odczytZPliku(string nazwaPliku, int ileLiczb, int liczby);
int ileLiczParzystych(intliczby, int ileLiczb);
void wypisz(int *liczby, int ileLiczb);