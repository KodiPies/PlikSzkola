#include <iostream>

class Zwierze {
public:
    virtual void dajGlos() {
        std::cout << "Zwierzę wydaje dźwięk" << std::endl;
    }
    virtual ~Zwierze() = default; // Wirtualny destruktor dla poprawnego usuwania
};

class Pies : public Zwierze {
public:
    void dajGlos() override {
        std::cout << "Hau Hau!" << std::endl;
    }
};

class Kot : public Zwierze {
public:
    void dajGlos() override {
        std::cout << "Miau Miau!" << std::endl;
    }
};

int main() {
    // Polimorfizm na stosie (przez referencję)
    Pies piesNaStosie; // Obiekt na stosie
    Zwierze& refDoPsa = piesNaStosie; // Referencja do obiektu
    refDoPsa.dajGlos(); // Wynik: "Hau Hau!"

    // Polimorfizm na stercie (przez wskaźnik)
    Zwierze* kotNaStercie = new Kot(); // Alokacja obiektu na stercie
    kotNaStercie->dajGlos(); // Wynik: "Miau Miau!"

    // Zwolnienie pamięci
    delete kotNaStercie;

    return 0;
}