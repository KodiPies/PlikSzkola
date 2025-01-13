#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string imie;
    string nazwisko;
    int wiek;
    int numerButa;
    fstream plik;
    plik.open("baza.txt", ios::in | ios::out | ios::app);
    cout << "Siema podaj swoje dane, Imie,nazwisko,lvl,stope \n";
    cout << "Podaj swoje imie: " << endl;
    cin >> imie;
    cout << "Podaj swoje nazwisko: "<<endl;
    cin >> nazwisko;
    cout << "Podaj swój wiek: "<<endl;
    cin >> wiek;
    cout << "Podaj swój numer buta: "<<endl;
    cin >> numerButa;
    if (plik.good() == true)
    {
        plik << imie << " " << nazwisko << " " << wiek << " " << numerButa << endl;
        plik.close();
    }
    else
    {
        cout << "Oglnie to tego i tamtego i się nie udało pliku otworzyć :( )";
    }
    return 0;
}