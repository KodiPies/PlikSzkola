#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROZMIAR = 50;

// Funkcja wypełniająca tablicę losowymi liczbami od 1 do 100
void wypelnijTablice(int tab[]) {
    srand(time(NULL));
    for (int i = 0; i < ROZMIAR; i++) {
        tab[i] = rand() % 100 + 1;
    }
}

// Funkcja wypisująca tablicę
void wyswietlTablice(int tab[]) {
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tab[i] << (i < ROZMIAR - 1 ? ", " : "\n");
    }
}

// Funkcja wyszukująca element z wartownikiem
int wyszukajZWartownikiem(int tab[], int x) {
    tab[ROZMIAR] = x; // wartownik
    int i = 0;
    while (tab[i] != x) i++;
    return (i == ROZMIAR) ? -1 : i;
}

int main() {
    int tablica[ROZMIAR + 1]; // +1 dla wartownika
    wypelnijTablice(tablica);

    cout << "Tablica: ";
    wyswietlTablice(tablica);

    int szukana;
    cout << "Podaj wartosc do wyszukania (1-100): ";
    cin >> szukana;

    int indeks = wyszukajZWartownikiem(tablica, szukana);

    if (indeks == -1)
        cout << "Nie znaleziono wartosci " << szukana << " w tablicy.\n";
    else
        cout << "Wartosc " << szukana << " znaleziona na indeksie: " << indeks << "\n";

    return 0;
}
