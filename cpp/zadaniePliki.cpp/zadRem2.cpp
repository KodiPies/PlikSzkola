#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Struktura przechowująca punkt o współrzędnych x i y
struct Punkt {
    double x;
    double y;
};

// Funkcja wypełniająca tablicę struktur danymi od użytkownika
void wypelnijTablice(vector<Punkt>& tablica) {
    int rozmiar;
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;

    for (int i = 0; i < rozmiar; i++) {
        Punkt p;
        cout << "Podaj współrzędną x dla punktu " << i + 1 << ": ";
        cin >> p.x;
        cout << "Podaj współrzędną y dla punktu " << i + 1 << ": ";
        cin >> p.y;
        tablica.push_back(p);
    }
}

// Funkcja obliczająca odległość punktu od zera
double obliczOdlegloscOdZera(const Punkt& p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

// Funkcja znajdująca punkt o największej odległości od zera
vector<Punkt> znajdzPunktyONajwiekszejOdleglosci(const vector<Punkt>& tablica) {
    vector<Punkt> punktyONajwiekszejOdleglosci;
    double maksymalnaOdleglosc = 0.0;

    // Szukanie maksymalnej odległości
    for (const Punkt& p : tablica)