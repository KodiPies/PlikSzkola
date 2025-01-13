#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Funkcja do generowania liczb losowych
vector<int> generujLiczbyLosowe(int liczba_liczb) {
    vector<int> liczby;
    srand(time(nullptr));
    for (int i = 0; i < liczba_liczb; ++i) {
        liczby.push_back(rand() % 100); // Zakres od 0 do 99, można dostosować według potrzeb
    }
    return liczby;
}

// Funkcja do zapisywania liczb do pliku
void zapiszDoPliku(const vector<int>& liczby, const string& nazwa_pliku) {
    ofstream plik(nazwa_pliku);
    if (plik.is_open()) {
        for (int liczba : liczby) {
            plik << liczba << endl;
        }
        cout << "Liczby zostały zapisane do pliku '" << nazwa_pliku << "'." << endl;
    } else {
        cout << "Błąd podczas zapisu do pliku." << endl;
    }
}

// Funkcja do sortowania liczb
void sortujLiczby(vector<int>& liczby, char sortowanie) {
    if (sortowanie == 'm') {
        sort(liczby.begin(), liczby.end(), greater<int>()); // Sortowanie malejące
    } else if (sortowanie == 'r') {
        sort(liczby.begin(), liczby.end()); // Sortowanie rosnące
    } else {
        cout << "Niepoprawny wybór sortowania." << endl;
    }
}

int main() {
    int liczba_liczb;
    cout << "Ile liczb losowych chcesz wygenerować? ";
    cin >> liczba_liczb;

    vector<int> liczby = generujLiczbyLosowe(liczba_liczb);

    char sortowanie;
    cout << "Chcesz posortować liczby malejąco (m) czy rosnąco (r)? ";
    cin >> sortowanie;

    sortujLiczby(liczby, sortowanie);

    zapiszDoPliku(liczby, "liczby.txt");

    return 0;
}