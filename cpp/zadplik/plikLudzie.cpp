#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

struct Osoba {
    string imie; 
    int wiek;
};

void zapiszDoPliku(const vector<Osoba>& baza) {
    ofstream plik("baza.txt");
    if(plik.is_open()) {
        for(const auto& osoba : baza) {
            plik << osoba.imie  << " " << osoba.wiek << endl;
        }
        plik.close();
        cout << "Baza danych zostala zapisana do pliku 'baza.txt'." << endl;
    } else {
        cout << "Blad podczas zapisu do pliku." << endl;
    }
}

void przeszukajIBaza(const vector<Osoba>& baza, const string& kryterium) {
    cout << "Wyszukiwanie po kryterium: " << kryterium << endl;
    for(const auto& osoba : baza) {
        if(kryterium == "imie") {
            cout << "Imie: " << osoba.imie << endl;
        
        } else if(kryterium == "wiek") {
            cout << "Wiek: " << osoba.wiek << endl;
        } else {
            cout << "Niepoprawne kryterium wyszukiwania." << endl;
            break;
        }
    }
}

int main() {
    int liczba_osob;
    cout << "Podaj liczbe osob: ";
    cin >> liczba_osob;

    vector<Osoba> baza;
    for(int i = 0; i < liczba_osob; ++i) {
        Osoba osoba;
        cout << "Osoba " << i+1 << ":" << endl;
        cout << "Imie: ";
        cin >> osoba.imie;
        
        cout << "Wiek: ";
        cin >> osoba.wiek;
        baza.push_back(osoba);
    }

    zapiszDoPliku(baza);

    string kryterium;
    cout << "Podaj kryterium wyszukiwania (imie/wiek): ";
    cin >> kryterium;

    przeszukajIBaza(baza, kryterium);

    return 0;
}