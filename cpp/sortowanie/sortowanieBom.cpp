#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funkcja do sortowania bąbelkowego
void bubbleSort(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {           // przechodzimy przez całą tablicę
        for (int j = 0; j < n - 1 - i; j++) {   // porównujemy kolejne pary elementów
            if (tab[j] > tab[j + 1]) {          // jeśli są w złej kolejności
                int temp = tab[j];              // zamieniamy miejscami
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// Funkcja do wypełniania tablicy losowymi liczbami
void wypelnij(int tab[], int n) {
    srand(time(NULL)); // inicjalizacja generatora losowego tylko raz
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 11; // losowanie liczb 0–10
    }
}

// Funkcja do wypisywania tablicy
void wypisz(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tablica[5];
    int n = 5;

    wypelnij(tablica, n);

    cout << "Przed sortowaniem: ";
    wypisz(tablica, n);

    bubbleSort(tablica, n);

    cout << "Po sortowaniu: ";
    wypisz(tablica, n);

    return 0;
}
