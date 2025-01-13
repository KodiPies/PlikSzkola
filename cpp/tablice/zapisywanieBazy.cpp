
#include <fstream>
#include <iostream>
using namespace std;
void sprawdz(string nazwiskoDoSprawdzenia)
{
    string nazwisko, imie;
    int index = 1;
    bool czyJest;
    fstream plik;
    plik.open("baza.txt", ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            if (index % 4 == 1)
            {
                plik >> imie;
            }
            if (index % 4 == 2)
            {
                plik >> nazwisko;
                if (nazwisko == nazwiskoDoSprawdzenia)
                {
                    czyJest = true;
                    cout << imie << " " << nazwisko << " ";
                    for (short i = 0; i <= 1; i++)
                    {
                        plik >> nazwisko;
                        cout << nazwisko << " ";
                    }
                    cout << endl;
                }
            }
            index++;
        }
        if (!czyJest)
        {
            cout << "Nikogo nie ma \n";
        }
        plik.close();
    }
    else
    {
        cout << "Nie udalo sie otworzyc pliku";
    }
}
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    int nrButa;
};
int main()
{
    string cos;
    fstream plik;
    plik.open("baza.txt", ios::in);
    int i=0;
    if (plik.good() == true)
    {
        i = 0;
        while (!plik.eof())
        {
            plik>>cos;
            i++;
        }
    }
    plik.close();
    int k=i/4;
    // cout<<"to jest i "<<i<<endl<<k<<endl;  test jednostkowy
    osoba *baza = new osoba [k]; //deklaracja na stercie (heap)
    plik.open("baza.txt", ios::in);
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
    cout << "starsi niz 12\n";
    for (short i = 0; i < k; i++) 
    {
        
        if (baza[i].wiek > 12)
        {
            cout << baza[i].imie << " ";
            cout << baza[i].nazwisko << " ";
            cout << baza[i].wiek << " ";
            cout << baza[i].nrButa << " ";
            cout << endl;
        }
    
    }
    plik.close();
    plik.open("baza2.txt", ios::out);
    i = 0;
    if (plik.good() == true)
    {
        while (i < k)
        {
            plik << baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << " " << baza[i].nrButa << endl;
            i++;
        }
    }
    else {
        cout <<"Siemka nie działa ci to frajerze!";
    }

    return 0;
}
