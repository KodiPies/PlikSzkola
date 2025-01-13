#include <iostream>
#include <string>
#include <fstream>

using namespace std;

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

void wypelnijTablice(Osoba daneOs[], int rozmiarT) {
    for (int i = 0; i < rozmiarT; i++) {
        cout << "Podaj imie " << i + 1 << ": ";
        cin >> daneOs[i].imie;
        cout << "Podaj wiek " << i + 1 << ": ";
        cin >> daneOs[i].wiek;
       
    }
}

int main() {
    int rozmiarT;
    cout << "Podaj ilosc osob: ";
    cin >> rozmiarT;

    Osoba* daneOs = new Osoba[rozmiarT];

    wypelnijTablice(daneOs, rozmiarT);

    string szukaneImie;
    cout << "Podaj imie do wyszukania: ";
    cin >> szukaneImie;
    string szukanyWiek;
    cout <<"Podaj wiek do znalezienia: ";
    cin >> szukanyWiek;

    for (int i = 0; i < rozmiarT; i++)  {
        if ((daneOs[i].imie == szukaneImie) || (daneOs[i].wiek == szukanyWiek)) {
            cout << " Imie: " << daneOs[i].imie << ", Wiek: " << daneOs[i].wiek  << endl;
        }
        else {
            cout <<" Nie ma takiego użytkownika ";
        }
        
    }

   
   
    return 0;
}