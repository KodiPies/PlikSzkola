#include <fstream>
#include <iostream>
using namespace std;

struct osoba
{
    int ID;
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
};

    

int main()
{
    
    string imie;
    string nazwisko;
    string wiek;
    string numerButa;
    string podane;
    cout << "Podaj: a-dodanie elementu, b-usuniecie elementu, c-modyfikacja elementu" << endl;
    cin >> podane;
    if (podane == "a")
    {
        fstream plik;
        plik.open("bazaPelna1.txt", ios::in | ios::out | ios::app);
        cout << "Dodawanie osoby. Podaj imie, nazwisko, wiek, buta. \n";
        cin >> imie;
        cin >> nazwisko;
        cin >> wiek;
        cin >> numerButa;
        if (plik.good() == true)
        {
            plik << imie << " " << nazwisko << " " << wiek << " " << numerButa << endl;
            plik.close();
        }
    }
    cout<<"dziala"<<endl;
    string cos;
    fstream plik;
    plik.open("bazaPelna1.txt", ios::in);
    int i = 0;
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik >> cos;
            i++;
        }
    }
    plik.close();
    int k = i / 4;
    osoba *baza = new osoba[k];
    plik.open("bazapPelna1.txt", ios::in);
    if (plik.good() == true)
    {

        int i = 0;
        while (!plik.eof())
        {
            plik >> baza[i].imie;
            plik >> baza[i].nazwisko;
            plik >> baza[i].wiek;
            plik >> baza[i].nrButa;
            i++;
        }
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
    }

    for (short i = 0; i < k; i++)
    {
        cout << baza[i].imie << " ";
        cout << baza[i].nazwisko << " ";
        cout << baza[i].wiek << " ";
        cout << baza[i].nrButa << " ";
        cout << endl;
    }

    return 0;
}