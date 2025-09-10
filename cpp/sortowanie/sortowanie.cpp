#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// funkcja sortująca tablicę przez wybieranie
void selectionSort(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // zakładamy, że i-ty element jest najmniejszy

        // szukamy najmniejszego elementu w pozostałej części tablicy
        for (int j = i + 1; j < n; j++) {
            if (tab[j] < tab[minIndex]) {
                minIndex = j;
            }
        }

        // zamiana miejscami i-tego elementu z najmniejszym
        if (minIndex != i) {
            int temp = tab[i];
            tab[i] = tab[minIndex];
            tab[minIndex] = temp;
        }
    }
}

// wypełnienie tablicy losowymi liczbami
void wypelnij(int tab[], int n) {
    srand(time(NULL)); // losowanie tylko raz
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 11; // liczby 0–10
    }
}

// wypisanie tablicy
void wypisz(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tab[5];
    int n = 5;

    wypelnij(tab, n);

    cout << "Przed sortowaniem: ";
    wypisz(tab, n);

    selectionSort(tab, n);

    cout << "Po sortowaniu: ";
    wypisz(tab, n);

    return 0;
}
