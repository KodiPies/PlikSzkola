#include <iostream>
#include <string>
using namespace std;

class Przesylka
{
private:
    int typPrzesylki;
    string krajDostawy;
    string numerPrzesylki;
    static int iloscPrzesylek;

    // Ustawia typ przesyłki na podstawie pierwszej cyfry kodu
    void setTypPrzesylki() {
        typPrzesylki = numerPrzesylki[0] - '0';
    }

    // Ustawia kraj dostawy (2 litery po typie przesyłki)
    void setKrajDostawy() {
        krajDostawy = numerPrzesylki.substr(1, 2);
    }

    // Ustawia numer przesyłki (5 ostatnich cyfr)
    void setNumerPrzesylki() {
        numerPrzesylki = numerPrzesylki.substr(3, 5);  // Ostatnie 5 cyfr
    }

public:
    Przesylka() {
        iloscPrzesylek++;
    }

    Przesylka(string kod) {
        setKodPrzesylki(kod);  // Ustaw kod przesyłki w konstruktorze
        iloscPrzesylek++;
    }

    // Ustawia kod przesyłki i przetwarza wszystkie dane
    void setKodPrzesylki(string kod) {
        numerPrzesylki = kod;
        setTypPrzesylki();
        setKrajDostawy();
        setNumerPrzesylki();
    }

    // Zwraca typ przesyłki w formie tekstowej
    string getTypPaczkiSlownie() {
        switch (typPrzesylki) {
        case 0: return "list";
        case 1: return "paczka";
        case 2: return "przesyłka kurierska";
        case 3: return "paczka międzynarodowa";
        default: return "nieznany typ paczki";
        }
    }

    // Wyświetla informacje o przesyłce
    void print() {
        cout << "Typ przesyłki: " << getTypPaczkiSlownie() << endl;
        cout << "Kraj nadania: " << krajDostawy << endl;
        cout << "Numer przesyłki: " << numerPrzesylki << endl;
        cout << "Ilość przesyłek: " << iloscPrzesylek << endl;
    }
};

int Przesylka::iloscPrzesylek = 0;

int main() {
    string kodPaczki = "1PL20231234";
    Przesylka mojaPaczka(kodPaczki);  // Użyj konstruktora z parametrem
    mojaPaczka.print();

    return 0;
}