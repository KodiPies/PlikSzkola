#include <iostream>
using namespace std;

struct DataUrodzenia
{
    int dzien;
    int miesiac;
    int rok;
};
// Definicja klasy uczen:
class Uczen
{

public:
    string imie;
    string nazwisko;
    int klasa;
    string grupa;
    int numerWDzienniku;
    DataUrodzenia dataUrodzenia;
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << klasa << endl;
        cout << "Grupa: " << grupa << endl;
        cout << "Numer w dzienniku " << numerWDzienniku << endl;
        cout << "Data urodzenia  " << dataUrodzenia.dzien << "/" << dataUrodzenia.miesiac << "/" << dataUrodzenia.rok << endl;
    }
};
int main()
{
    // Deklaracja zmiennej wskaźnikowej (wskaźnika) w_uczen na dowolny obiekt należący do typu uczen:
    Uczen *w_uczen;
    // Utworzenie obiektu typu uczen (instancji klasy uczen) wskazywanego przez wskaźnik w_uczen:
    w_uczen = new Uczen();
    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    w_uczen->imie = "Adrian";
    w_uczen->nazwisko = "Psterniak";
    w_uczen->dataUrodzenia.dzien = 10;
    w_uczen->dataUrodzenia.miesiac = 10;
    w_uczen->dataUrodzenia.rok = 2010;
    w_uczen->klasa = 1;
    w_uczen->grupa = "GG";
    w_uczen->numerWDzienniku = 5;
    // Prezentacja danych zapisanych w zmiennych członkowskich obiektu na ekranie monitora:
    w_uczen->wyswietlDane();
    
    delete w_uczen;
    return 0;
}