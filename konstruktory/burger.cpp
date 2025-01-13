#include <iostream>
using namespace std;

class Burger
{
private:
    float cenaMiesa;
    float cenaSera;
    float cenaBulki;
    float cenaWarzyw;
    float cenaSosu;
    static int ileBurgerow;

public:
    int ileMiesa;
    int ileSera;
    int ileWarzyw;
    int ileSosu;
    bool czyDuzyBurger;

    // Konstruktor domyślny
    Burger()
    {
        cenaMiesa = 5;
        cenaSera = 2;
        cenaBulki = 3;
        cenaWarzyw = 1;
        cenaSosu = 1.5;
        ileMiesa = 1;
        ileSera = 1;
        ileWarzyw = 1;
        ileSosu = 1;
        czyDuzyBurger = false;
        ileBurgerow++;
    }

    // Konstruktor parametryzowany
    Burger(float pCenaMiesa, float pCenaSera, float pCenaBulki, float pCenaWarzyw, float pCenaSosu, int pIleMiesa, int pIleSera, int pIleWarzyw, int pIleSosu, bool pCzyDuzyBurger)
    {
        cenaMiesa = pCenaMiesa;
        cenaSera = pCenaSera;
        cenaBulki = pCenaBulki;
        cenaWarzyw = pCenaWarzyw;
        cenaSosu = pCenaSosu;
        ileMiesa = pIleMiesa;
        ileSera = pIleSera;
        ileWarzyw = pIleWarzyw;
        ileSosu = pIleSosu;
        czyDuzyBurger = pCzyDuzyBurger;
        ileBurgerow++;
    }

    // Metoda obliczająca cenę burgera
    float cenaBurgera()
    {
        float cena = cenaBulki + (cenaMiesa * ileMiesa) + (cenaSera * ileSera) + (cenaWarzyw * ileWarzyw) + (cenaSosu * ileSosu);
        if (czyDuzyBurger)
        {
            cena += cenaBulki; // podwójna bułka w dużym burgerze
        }
        return cena;
    }

    // Metoda obliczająca kaloryczność burgera
    int ileKalorii()
    {
        int kalorie = 0;
        kalorie += 300 * ileMiesa;
        kalorie += 100 * ileSera;
        kalorie += 20 * ileWarzyw;
        kalorie += 50 * ileSosu;
        if (czyDuzyBurger)
        {
            kalorie += 300; // dodatkowa bułka w dużym burgerze
        }
        return kalorie;
    }

    // Metoda sprawdzająca czy burger jest wegetariański
    bool czyVege()
    {
        return ileMiesa == 0;
    }

    // Metoda drukująca szczegóły burgera
    void print()
    {
        cout << "Cena burgera: " << cenaBurgera() << endl;
        cout << "Kalorie: " << ileKalorii() << endl;
        cout << "Czy burger jest wegetariański: " << (czyVege() ? "Tak" : "Nie") << endl;
        cout << "Liczba burgerów: " << ileBurgerow << endl;
    }
};

// Inicjalizacja statycznej zmiennej
int Burger::ileBurgerow = 0;

int main()
{
    // Tworzenie burgerów
    Burger burger1;
    burger1.print();

    Burger burger2(7, 3, 4, 2, 1.8, 2, 1, 2, 1, true);
    burger2.print();

    return 0;
}