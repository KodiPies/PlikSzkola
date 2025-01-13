#include <iostream>
#include <string>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;

    Osoba()
    {
        id = 0;
        imie = "";
        liczbaInstancji++;
    }

    Osoba(int podane_id, string podane_imie)
    {
        id = podane_id;
        imie = podane_imie;
        liczbaInstancji++;
    }


    void przywitaj(string inne_imie)
    {
        if (imie == "")
        {
            cout << "Brak danych" << endl;
        }
        else
        {
            cout << "Czesc " << inne_imie << ", mam na imie " << imie << endl;
        }
    }

    void wprowadzDane()
    {
        cout << "Podaj ID: ";
        cin >> id;
        cout << "Podaj imie: ";
        cin >> imie;
    }

    string getImie()
    {
        return imie;
    }
};

int Osoba::liczbaInstancji = 0;

int main()
{
    Osoba osoba1, osoba2;

    cout << "Podaj mi id i imie dla pierwszej osoby" << endl;
    osoba1.wprowadzDane();

    cout << "Podaj mi id i imie dla drugiej osoby" << endl;
    osoba2.wprowadzDane();

    osoba1.przywitaj(osoba2.getImie());
    osoba2.przywitaj(osoba1.getImie());

    cout << "Liczba instancji: " << Osoba::liczbaInstancji << endl;

    return 0;
}