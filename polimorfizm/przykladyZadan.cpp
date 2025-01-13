// Zadanie 1: Hierarchia zwierząt

// #include <iostream>
// using namespace std;

// class Zwierze {
// public:
//     virtual void wydajDzwiek() = 0; // Metoda czysto wirtualna
// };

// class Pies : public Zwierze {
// public:
//     void wydajDzwiek() override {
//         cout << "Pies: Hau! Hau!" << endl;
//     }
// };

// class Kot : public Zwierze {
// public:
//     void wydajDzwiek() override {
//         cout << "Kot: Miau! Miau!" << endl;
//     }
// };

// class Krowa : public Zwierze {
// public:
//     void wydajDzwiek() override {
//         cout << "Krowa: Muuuu!" << endl;
//     }
// };

// int main() {
//     Zwierze* zwierzeta[] = {new Pies(), new Kot(), new Krowa()};
    
//     for (int i = 0; i < 3; i++) {
//         zwierzeta[i]->wydajDzwiek();
//         delete zwierzeta[i];
//     }
//     return 0;
// }



// Zadanie 2: Figury geometryczne

// #include <iostream>
// #include <cmath>
// using namespace std;

// class Figura {
// public:
//     virtual float pole() = 0; // Metoda czysto wirtualna
// };

// class Kwadrat : public Figura {
// public:
//     float bok;
//     Kwadrat(float b) : bok(b) {}
//     float pole() override {
//         return bok * bok;
//     }
// };

// class Prostokat : public Figura {
// public:
//     float dlugosc, szerokosc;
//     Prostokat(float d, float s) : dlugosc(d), szerokosc(s) {}
//     float pole() override {
//         return dlugosc * szerokosc;
//     }
// };

// class Trojkat : public Figura {
// public:
//     float podstawa, wysokosc;
//     Trojkat(float p, float w) : podstawa(p), wysokosc(w) {}
//     float pole() override {
//         return (podstawa * wysokosc) / 2;
//     }
// };

// class Kolo : public Figura {
// public:
//     float promien;
//     Kolo(float r) : promien(r) {}
//     float pole() override {
//         return M_PI * promien * promien;
//     }
// };

// int main() {
//     Figura* figury[] = {
//         new Kwadrat(4),
//         new Prostokat(5, 3),
//         new Trojkat(6, 2),
//         new Kolo(3)
//     };
    
//     for (int i = 0; i < 4; i++) {
//         cout << "Pole figury: " << figury[i]->pole() << endl;
//         delete figury[i];
//     }
//     return 0;
// }


// Zadanie 3: Pojazdy



// #include <iostream>
// using namespace std;

// class Pojazd {
// public:
//     virtual void wyswietlInfo() = 0; // Metoda czysto wirtualna
// };

// class Samochod : public Pojazd {
// public:
//     void wyswietlInfo() override {
//         cout << "Samochod: Marka - Ford, Model - Focus" << endl;
//     }
// };

// class Rower : public Pojazd {
// public:
//     void wyswietlInfo() override {
//         cout << "Rower: Typ - Gorski, Producent - Giant" << endl;
//     }
// };

// class Motocykl : public Pojazd {
// public:
//     void wyswietlInfo() override {
//         cout << "Motocykl: Marka - Yamaha, Model - MT-07" << endl;
//     }
// };

// int main() {
//     Pojazd* pojazdy[] = {new Samochod(), new Rower(), new Motocykl()};
    
//     for (int i = 0; i < 3; i++) {
//         pojazdy[i]->wyswietlInfo();
//         delete pojazdy[i];
//     }
//     return 0;
// }




// Zadanie 4: Pracownicy firmy



// #include <iostream>
// using namespace std;

// class Pracownik {
// public:
//     virtual void wyswietlDane() = 0; // Metoda czysto wirtualna
// };

// class Kierownik : public Pracownik {
// public:
//     void wyswietlDane() override {
//         cout << "Kierownik: Jan Kowalski, Dzial: Sprzedaz" << endl;
//     }
// };

// class Programista : public Pracownik {
// public:
//     void wyswietlDane() override {
//         cout << "Programista: Anna Nowak, Jezyk: C++" << endl;
//     }
// };

// class Stazysta : public Pracownik {
// public:
//     void wyswietlDane() override {
//         cout << "Stazysta: Piotr Zielinski, Czas pracy: 3 miesiace" << endl;
//     }
// };

// int main() {
//     Pracownik* pracownicy[] = {new Kierownik(), new Programista(), new Stazysta()};
    
//     for (int i = 0; i < 3; i++) {
//         pracownicy[i]->wyswietlDane();
//         delete pracownicy[i];
//     }
//     return 0;
// }
