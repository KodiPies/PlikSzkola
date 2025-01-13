#include <iostream>

using namespace std;


void wypelnijTabliceLosowymi(int tablica[], int rozmiar) {
 



    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 100; 
    }
}


void wyswietlTablice(int tablica[], int rozmiar) {
    cout << "Zawartosc tablicy:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int rozmiar;


    cout << "Podaj wielkosc tablicy: ";
    cin >> rozmiar;


    int* tablica = new int[rozmiar];


    wypelnijTabliceLosowymi(tablica, rozmiar);


    wyswietlTablice(tablica, rozmiar);




    return 0;
}