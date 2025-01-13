#include <iostream>
#include <string>

using namespace std;

// Struktura przechowująca imię i wiek
struct Osoba {
    string imie;
    int wiek;
};

// Funkcja wypełniająca tablicę struktur danymi od użytkownika
void wypelnijTablice(Osoba tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj imię osoby " << i + 1 << ": ";
        cin >> tablica[i].imie;
        cout << "Podaj wiek osoby " << i + 1 << ": ";
        cin >> tablica[i].wiek;
    }
}

// Funkcja przeszukująca tablicę struktur i wypisująca rekordy spełniające kryteria
void przeszukajTablice(Osoba tablica[], int rozmiar, string kryteriumImie, int kryteriumWiek) {
    cout << "Wyniki wyszukiwania:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i].imie == kryteriumImie && tablica[i].wiek == kryteriumWiek) {
            cout << "Imię: " << tablica[i].imie << ", Wiek: " << tablica[i].wiek << endl;
        }
    }
}

int main() {
    int rozmiar;
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;

    // Tworzenie tablicy dynamicznie
    Osoba *tablica = new Osoba[rozmiar];

    // Wypełnianie tablicy danymi od użytkownika
    wypelnijTablice(tablica, rozmiar);

    // Wyszukiwanie i wyświetlanie rekordów spełniających kryteria
    string kryteriumImie;
    int kryteriumWiek;

    cout << "Podaj imię do wyszukania: ";
    cin >> kryteriumImie;
    cout << "Podaj wiek do wyszukania: ";
    cin >> kryteriumWiek;

    przeszukajTablice(tablica, rozmiar, kryteriumImie, kryteriumWiek);

    // Zwolnienie zaalokowanej pamięci
    delete[] tablica;

    return 0;
}