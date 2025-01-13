/* #include <iostream>

using namespace std;

class Osoba
{
public:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Lekarz : public Osoba
{
public:
    string specjalizacja;
    Lekarz() {};
    Lekarz(string imieP, string nazwiskoP, string specjalizacjaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
    }

    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", " << specjalizacja;
    }
};

class Ordynator : public Lekarz
{
public:
    string oddial;
    Ordynator() {};
    Ordynator(string imieP, string nazwiskoP, string specjalizacjaP, string oddzialP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
        oddial = oddzialP;
    }
    void wyswietlDane()
    {
        Lekarz::wyswietlDane();
        cout << ", " << oddial;
    }
};
int main()
{
    Osoba *pracownik = new Lekarz("ktos", "tam", "chirurg");
    cout << "dane lekarza ";
    pracownik->wyswietlDane();
    pracownik = new Ordynator("ktos", "tam", "chirurg", "chirurgia");
    cout << "\ndane ordynatora ";
    pracownik->wyswietlDane();
    return 0;
    ;
} */
#include <iostream>

using namespace std;

class Osoba
{
public:
    virtual void wyswietlDane() = 0;
};

class Lekarz : public Osoba
{
public:
    string imie, nazwisko;
    string specjalizacja;
    Lekarz() {};
    Lekarz(string imieP, string nazwiskoP, string specjalizacjaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
    }

    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", " << specjalizacja;
    }
};

class Ordynator : public Osoba
{
public:
    string imie, nazwisko;
    string specjalizacja;
    string oddial;
    Ordynator() {};
    Ordynator(string imieP, string nazwiskoP, string specjalizacjaP, string oddzialP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
        oddial = oddzialP;
    }
    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << ", " << specjalizacja << ", " << oddial;
    }
};
int main()
{
    Osoba *pracownik = new Lekarz("ktos", "tam", "chirurg");
    cout << "dane lekarza ";
    pracownik->wyswietlDane();
    pracownik = new Ordynator("ktos", "tam", "chirurg", "chirurgia");
    cout << "\ndane ordynatora ";
    pracownik->wyswietlDane();
    return 0;
}   