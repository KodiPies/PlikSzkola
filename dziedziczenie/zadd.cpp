#include <iostream>

class Baza {
private:
    int liczba1;
    int liczba2;

public:
    // Konstruktor klasy bazowej
    Baza(int l1, int l2) : liczba1(l1), liczba2(l2) {}

    // Metoda do wyświetlenia wartości w klasie bazowej (do testów)
    void wyswietlBaza() {
        std::cout << "Liczba 1 (Baza): " << liczba1 << std::endl;
        std::cout << "Liczba 2 (Baza): " << liczba2 << std::endl;
    }
};

class Pochodna {
private:
    int liczba1;
    int liczba2;

public:
    // Konstruktor klasy pochodnej
    Pochodna(int l1, int l2) : liczba1(l1), liczba2(l2) {}

    // Metoda do wyświetlenia wartości atrybutów klasy pochodnej
    void wyswietl() {
        std::cout << "Liczba 1 (Pochodna): " << liczba1 << std::endl;
        std::cout << "Liczba 2 (Pochodna): " << liczba2 << std::endl;
    }

    // Metody do edycji wartości
    void ustawLiczba1(int l1) { liczba1 = l1; }
    void ustawLiczba2(int l2) { liczba2 = l2; }
};

int main() {
    Baza obiektBaza(5, 10);
    Pochodna obiektPochodna(15, 20);

    // Wyświetlanie wartości w klasie bazowej
    obiektBaza.wyswietlBaza();

    // Wyświetlanie początkowych wartości w klasie pochodnej
    obiektPochodna.wyswietl();

    // Zmiana wartości w klasie pochodnej
    obiektPochodna.ustawLiczba1(25);
    obiektPochodna.ustawLiczba2(30);

    // Wyświetlanie zaktualizowanych wartości w klasie pochodnej
    obiektPochodna.wyswietl();

    return 0;
}