#include <iostream>

class Pudelko {
private:
    int wartosc;  // Prywatne pole

public:
    Pudelko(int v) : wartosc(v) {}  // Konstruktor inicjalizujący wartość

    // Deklaracja funkcji jako przyjaciela
    friend void pokazWartosc(const Pudelko& oko);
};

// Funkcja przyjaciel klasy Pudelko
void pokazWartosc(const Pudelko& oko) {
    // Funkcja ma dostęp do prywatnego pola wartosc
    std::cout << "Wartość w pudełku: " << oko.wartosc << std::endl;
}

int main() {

    Pudelko oko(101);  // Tworzenie obiektu Pudelko z wartością 42
    pokazWartosc(oko);  // Wywołanie funkcji przyjaciela
    return 0;
}