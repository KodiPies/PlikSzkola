#include <iostream>
#include <fstream>
using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};
int jakaWielkoscTablicy()
{
    int dlugosc = -1;
    string temp = "";
    fstream plik;
    plik.open("baza.txt", ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> temp >> temp >> temp;
            dlugosc++;
        }
    }
    if (dlugosc == 0)
    {
        cout << "Nie znalazlem niczego" << endl;
    }
    plik.close();
    return dlugosc;
};
void wczytajDoTablicy(osoba osoba, int dlugosc)
{
    fstream plik;
    plik.open("baza.txt", ios::in);
    for (int i = 0; i < dlugosc; i++)
    {
        plik >> osoba[i].imie;
        plik >> osoba[i].nazwisko;
        plik >> osoba[i].wiek;
    }
    plik.close();
};
void wypisz(osobaosoba, int dlugosc)
{
    for (int i = 0; i < dlugosc; i++)
    {
        cout << osoba[i].imie << " " << osoba[i].nazwisko << " " << osoba[i].wiek << endl;
    }
};

void dodaj()
{
    string imie, nazwisko;
    int wiek;
    cin >> imie >> nazwisko >> wiek;
    fstream plik;
    // app dodaje na koniec, out usuwa wszystko i daje od nowa
    plik.open("baza.txt", ios::app);
    if (plik.good() == true)
    {
        plik << imie << " ";
        plik << nazwisko << " ";
        plik << wiek << endl;
    }
    plik.close();
};
//   srand(time(NULL));
//     for (int i = 0; i < 429496729; i++)
//     {
//         double x = (double)rand() / RAND_MAX / 2;
//         double y = (double)rand() / RAND_MAX / 2;
//         double potega = pow(x, 2) + pow(y, 2);
//         if (sqrt(potega) <= 0.5)
//         {
//             liczbyWOkregu++;
//         }
//     }