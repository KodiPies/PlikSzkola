#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_OSOB = 100;

struct Osoba {
    string imie;
    
    string wiek;
};

void zapiszDoPliku(const Osoba baza[], int liczba_osob) {
    ofstream plik("baza.txt");
    if(plik.is_open()) {
        for(int i = 0; i < liczba_osob; ++i) {
            plik << baza[i].imie <<  " " << baza[i].wiek << endl;
        }
        plik.close();
        cout << "Baza danych została zapisana do pliku 'baza.txt'." << endl;
    } else {
        cout << "Błąd podczas zapisu do pliku." << endl;
    }
}

void przeszukajIBaza(const Osoba baza[], int liczba_osob, const string& podane, string szukaneImie, string szukanyWiek) {
    Osoba* daneOs = new Osoba[liczba_osob];
    
    for(int i = 0; i < liczba_osob; ++i) {
        if(podane == szukaneImie) {
            cout << "Imie: " << baza[i].imie << endl;
        } 
         else if(podane == szukanyWiek) {
            cout << "Wiek: " << baza[i].wiek << endl;
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
    

    if(liczba_osob > MAX_OSOB) {
        cout << "Za duza liczba osob. Maksymalna liczba osob to " << MAX_OSOB << "." << endl;
        return 1;
    }

    Osoba baza[MAX_OSOB];
    for(int i = 0; i < liczba_osob; ++i) { 
Osoba osoba;
        cout << "Osoba " << i+1 << ":" << endl;
        cout << "Imie: ";
        cin >> osoba.imie;
        
        cout << "Wiek: ";
        cin >> osoba.wiek;
        baza[i] = osoba;
    }

    zapiszDoPliku(baza, liczba_osob);

    string podane;
    cout << "Podaj po czym mam wyszukac imie lub wiek: ";
    cin >> podane;
    
    string szukaneImie;
    cout << "Podaj imie do wyszukania: ";
    cin >> szukaneImie;
    string szukanyWiek;
    cout <<"Podaj wiek do znalezienia: ";
    cin >> szukanyWiek;
    
    
    przeszukajIBaza(baza, liczba_osob, podane, szukaneImie, szukanyWiek);

    

    return 0;
}