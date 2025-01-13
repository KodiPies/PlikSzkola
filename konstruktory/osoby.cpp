    #include <iostream>
using namespace std;

class Osoba
{
    int id;
    string imie;

public:
    static int liczbaInstancji;
    Osoba()
    {
        
        liczbaInstancji++;
    }
    Osoba(int idP, string imieP) : Osoba::Osoba()
    {
        id = idP;
        imie = imieP;
        // liczbaInstancji++;
    }
    Osoba(const Osoba &czlowiek) : Osoba::Osoba()
    {
        id = czlowiek.id;
        imie = czlowiek.imie;
       // liczbaInstancji++;
    }
    void przywitanie(string imieP)
    {
        if (imie.length() > 0)
            cout << "Cześć " << imieP << " mam na imię " << imie << endl;
        else
            cout << "Brak danych" << endl;
    }
};
int Osoba::liczbaInstancji = 0;
int main()
{
    Osoba osoba1;
    string imie;
    int id;
    cout << "Zrobimy osobe\n";
    cout << "Podaj imie dla tej osoby ";
    cin >> imie;
    cout << "Podaj id dla tej osoby ";
    cin >> id;
    Osoba osoba2(id, imie);
    cout << "Osoba 3 będzie taka jak 2 BOTAK\n";
    Osoba osoba3(osoba2);
    cout << "Każda osoba się przywita \n Podaj swoje imię ";
    cin >> imie;
    cout << "Osoba 1 ";
    osoba1.przywitanie(imie);
    cout << "Osoba 2 ";
    osoba2.przywitanie(imie);
    cout << "Osoba 3 ";
    osoba3.przywitanie(imie);
    cout << Osoba::liczbaInstancji << " tyle jest instancji";
    return 0;
}