#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Osoba
{
    int ID;
    string imie;
    string nazwisko;
    int wiek;
    int numerbuta;
};

void Dodajid(Osoba osoba)
{
    ofstream plik("bazaPelna1.txt", ios::app);
    if (plik.is_open())
    {
        plik << osoba.ID << " " << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << " " << osoba.numerbuta << endl;
        cout << "Dodano informacje do pliku." << endl;
        plik.close();
    }
    else
    {
        cout << "Blad otwarcia pliku." << endl;
    }
}

void Usunid(int ID)
{
    ifstream plik1("bazaPelna1.txt");
    ofstream plik2("temp.txt");
    if (plik1.is_open() && plik2.is_open())
    {
        Osoba osoba;
        while (plik1 >> osoba.ID >> osoba.imie >> osoba.nazwisko >> osoba.wiek >> osoba.numerbuta)
        {
            if (osoba.ID != ID)
            {
                plik2 << osoba.ID << " " << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << " " << osoba.numerbuta << endl;
            }
        }
        plik1.close();
        plik2.close();
        remove("bazaPelna1.txt");
        rename("temp.txt", "bazaPelna1.txt");
        cout << "Usunieto informacje z pliku." << endl;
    }
    else
    {
        cout << "Blad otwarcia pliku." << endl;
    }
}

// void Edytujid(int ID)
// {
//     ifstream plik1("bazaPelna1.txt");
//     ofstream plik2("temp.txt");
//     if (plik1.is_open() && plik2.is_open())
//     {
//         Osoba osoba;
//         while (plik1 >> osoba.ID >> osoba.imie >> osoba.nazwisko >> osoba.wiek >> osoba.numerbuta)
//         {
//             if (osoba.ID == ID)
//             {
//                 cout << "Podaj nowe dane dla osoby po ID " << ID << ":" << endl;
//                 cout << "Nowe imie: ";
//                 cin >> osoba.imie;
//                 cout << "Nowe nazwisko: ";
//                 cin >> osoba.nazwisko;
//                 cout << "Nowy wiek: ";
//                 cin >> osoba.wiek;
//                 cout << "Nowy numer buta: ";
//                 cin >> osoba.numerbuta;
//             }
//             plik2 << osoba.ID << " " << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << " " << osoba.numerbuta << endl;
//         }
//         plik1.close();
//         plik2.close();
//         remove("bazaPelna1.txt");
//         rename("temp.txt", "bazaPelna1.txt");
//         cout << "Zaktualizowano informacje w pliku." << endl;
//     }
//     else
//     {
//         cout << "Blad otwarcia pliku." << endl;
//     }
// }

int main()
{
    int opcja;

    cout << "Co chcesz zrobic?" << endl;
    cout << "1. Dodaj do pliku" << endl;
    cout << "2. Usun z pliku" << endl;
    cout << "3. Edytuj po ID" << endl;
    cout << "Wybierz opcje: ";
    cin >> opcja;

    switch (opcja)
    {
    case 1:
    {
        Osoba nowaOsoba;
        cout << "Podaj ID: ";
        cin >> nowaOsoba.ID;
        cout << "Podaj imie: ";
        cin >> nowaOsoba.imie;
        cout << "Podaj nazwisko: ";
        cin >> nowaOsoba.nazwisko;
        cout << "Podaj wiek: ";
        cin >> nowaOsoba.wiek;
        cout << "Podaj numer buta: ";
        cin >> nowaOsoba.numerbuta;
        Dodajid(nowaOsoba);
        break;
    }
    case 2:
    {
        int usuwanie;
        cout << "Podaj ID osoby do usuniecia: ";
        cin >> usuwanie;
        Usunid(usuwanie);
        break;
    }
    // case 3:
    // {
    //     int edycja;
    //     cout << "Podaj ID osoby do edycji: ";
    //     cin >> edycja;
    //     Edytujid(edycja);
    //     break;
    // }
    default:
        cout << "Nieprawidlowa opcja." << endl;
    }

    return 0;
}