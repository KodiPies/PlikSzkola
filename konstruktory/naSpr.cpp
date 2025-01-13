#include <iostream>
#include <string>

using namespace std;



class Punkt2D {
private:
    int x;   // Współrzędna X punktu
    int y;   // Współrzędna Y punktu

public:
    // Konstruktor główny, który inicjalizuje współrzędne x i y
    Punkt2D(int x, int y) : x(x), y(y) {
        // Nic więcej nie robimy, bo wartości są już ustawione przez listę inicjalizacyjną
    }

    // Konstruktor domyślny, który ustawia współrzędne na (0, 0)
    Punkt2D() : Punkt2D(0, 0) { 
        // Delegowanie do głównego konstruktora
    }

    // Konstruktor kopiujący - tworzy kopię obiektu Punkt2D
    Punkt2D(const Punkt2D &inny) : x(inny.x), y(inny.y) {
        // Kopiuje wartości x i y z innego obiektu Punkt2D
    }

    // Metoda do wyświetlania współrzędnych punktu
    void display() const {
        cout << "Punkt (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int jeden,dwa;
    cout <<"Podaj pierwsza liczbe punktu: " << endl;
    cin >> jeden;
    cout <<"Podaj druga liczbe punktu " << endl;
    cin >> dwa;
    Punkt2D p1(jeden, dwa);    // Tworzymy punkt (5, 10) używając głównego konstruktora
    Punkt2D p2;           // Tworzymy punkt (0, 0) przy użyciu konstruktora domyślnego
    Punkt2D p3 = p1;      // Tworzymy kopię punktu p1 przy użyciu konstruktora kopiującego

    // Wyświetlanie informacji o punktach
    p1.display();   // Wyświetli: Punkt (5, 10)
    p2.display();   // Wyświetli: Punkt (0, 0)
    p3.display();   // Wyświetli: Punkt (5, 10)

    return 0;
}
// Kod definiuje klasę Punkt2D do reprezentacji punktu na płaszczyźnie 2D z trzema konstruktorami: głównym, domyślnym i kopiującym. Program pobiera współrzędne od użytkownika, tworzy trzy punkty (p1, p2, p3), a następnie wyświetla ich współrzędne.

// ################################

// #include <iostream>
// #include <string>

// using namespace std;



// class Prostokat {
// private:
//     int szerokosc;
//     int wysokosc;

// public:
//     // Konstruktor główny, który inicjalizuje szerokość i wysokość
//     Prostokat(int szer, int wys) : szerokosc(szer), wysokosc(wys) {}

//     // Konstruktor domyślny, który tworzy prostokąt o wymiarach 1x1
//     Prostokat() : Prostokat(1, 1) {}  // Delegowanie do głównego konstruktora

//     // Konstruktor kopiujący, który kopiuje wymiary innego prostokąta
//     Prostokat(const Prostokat &inny) : szerokosc(inny.szerokosc), wysokosc(inny.wysokosc) {}

//     // Metoda obliczająca pole prostokąta
//     int pole()  {
//         return szerokosc * wysokosc;
//     }

//     // Metoda do wyświetlania informacji o prostokącie
//     void pokaz()  {
//         cout << "Prostokat: " << szerokosc << " x " << wysokosc 
//                   << ", Pole: " << pole() << endl;
//     }
// };

// int main() {
//     Prostokat prost1(5, 10);     // Tworzymy prostokąt o wymiarach 5 x 10
//     Prostokat prost2;            // Tworzymy prostokąt domyślny 1 x 1
//     Prostokat prost3 = prost1;   // Tworzymy kopię prostokąta prost1

//     // Wyświetlamy informacje o prostokątach
//     prost1.pokaz();   // Wyświetli: Prostokat: 5 x 10, Pole: 50
//     prost2.pokaz();   // Wyświetli: Prostokat: 1 x 1, Pole: 1
//     prost3.pokaz();   // Wyświetli: Prostokat: 5 x 10, Pole: 50

//     return 0;
// }
// Ten kod definiuje klasę Prostokat do reprezentacji prostokąta z wymiarami (szerokość i wysokość) oraz oblicza jego pole. Program tworzy trzy prostokąty:

// prost1 z wymiarami 5x10,
// prost2 jako prostokąt domyślny 1x1,
// prost3 jako kopię prost1.
// Dla każdego prostokąta wyświetlane są jego wymiary i pole.

// #########################

// #include <iostream>
// #include <string>

// using namespace std;



// class Samochod {
// private:
//     string marka;
//     string model;
//     int rocznik;

// public:
//     // Konstruktor główny, który inicjalizuje wszystkie pola
//     Samochod(string mk, string mdl, int rok) 
//         : marka(mk), model(mdl), rocznik(rok) {}

//     // Konstruktor domyślny, który tworzy "samochód domyślny"
//     Samochod() : Samochod("Nieznana", "Nieznany", 2000) {}  // Delegowanie do głównego konstruktora

//     // Konstruktor kopiujący, który kopiuje dane innego samochodu
//     Samochod(const Samochod &inny) 
//         : marka(inny.marka), model(inny.model), rocznik(inny.rocznik) {}

//     // Metoda wyświetlająca informacje o samochodzie
//     void pokaz() const {
//         cout << "Samochod: " << marka << " " << model 
//                   << ", Rocznik: " << rocznik << endl;
//     }
// };

// int main() {
//     Samochod auto1("Toyota", "Corolla", 2020); // Tworzymy samochód Toyota Corolla z rocznika 2020
//     Samochod auto2;                            // Tworzymy domyślny samochód
//     Samochod auto3 = auto1;                    // Tworzymy kopię samochodu auto1

//     // Wyświetlamy informacje o samochodach
//     auto1.pokaz();   // Wyświetli: Samochod: Toyota Corolla, Rocznik: 2020
//     auto2.pokaz();   // Wyświetli: Samochod: Nieznana Nieznany, Rocznik: 2000
//     auto3.pokaz();   // Wyświetli: Samochod: Toyota Corolla, Rocznik: 2020

//     return 0;
// }

// Kod definiuje klasę Samochod z informacjami o samochodzie (marka, model, rocznik). Program tworzy trzy obiekty:

// auto1: samochód Toyota Corolla z rocznika 2020,
// auto2: domyślny samochód z marką "Nieznana", modelem "Nieznany", rocznik 2000,
// auto3: kopię auto1.
// Dla każdego samochodu wyświetlane są jego dane.

// ##################

// #include <iostream>
// #include <string>

// using namespace std;



// class Samochod {
// private:
//     string marka;
//     string model;
//     int rocznik;

// public:
//     // Konstruktor główny
//     Samochod(string mk, string mdl, int rok) 
//         : marka(mk), model(mdl), rocznik(rok) {
//         cout << "Tworzenie samochodu: " << marka << " " << model << ", Rocznik: " << rocznik << endl;
//     }

//     // Konstruktor domyślny
//     Samochod() : Samochod("Nieznana", "Nieznany", 2000) {}

//     // Konstruktor kopiujący
//     Samochod(const Samochod &inny) 
//         : marka(inny.marka), model(inny.model), rocznik(inny.rocznik) {
//         cout << "Tworzenie kopii samochodu: " << marka << " " << model << ", Rocznik: " << rocznik << endl;
//     }

//     // Destruktor
//     ~Samochod() {
//         cout << "Usuwanie samochodu: " << marka << " " << model << ", Rocznik: " << rocznik << endl;
//     }

//     // Metoda wyświetlająca informacje o samochodzie
//     void pokaz()  {
//         cout << "Samochod: " << marka << " " << model 
//                   << ", Rocznik: " << rocznik << endl;
//     }
// };

// int main() {
//     cout << "Rozpoczęcie programu." << endl;

//     Samochod auto1("Toyota", "Corolla", 2020); // Tworzymy samochód
//     Samochod auto2;                            // Tworzymy domyślny samochód
//     Samochod auto3 = auto1;                    // Tworzymy kopię samochodu auto1

//     // Wyświetlamy informacje o samochodach
//     auto1.pokaz();
//     auto2.pokaz();
//     auto3.pokaz();

//     cout << "Koniec programu." << endl;

//     return 0;
// }
// Ten kod definiuje klasę Samochod z konstruktorami do tworzenia samochodu oraz destruktorem do obsługi usuwania obiektów. Program działa w następujący sposób:

// Tworzy trzy obiekty samochodów:

// auto1: z marką "Toyota", modelem "Corolla", rocznik 2020.
// auto2: samochód domyślny z marką "Nieznana", modelem "Nieznany", rocznik 2000.
// auto3: kopię auto1.
// Każdy konstruktor i destruktor wyświetla komunikat, informując o tworzeniu lub usuwaniu samochodu.

// Na końcu program wyświetla dane każdego samochodu oraz komunikaty z konstruktorów i destruktora.

// ##########################

// #include <iostream>

// using namespace std;

// class Prostokat {
// private:
//     int szerokosc;  // szerokość prostokąta
//     int wysokosc;   // wysokość prostokąta

// public:
//     // Konstruktor główny - ustawia szerokość i wysokość
//     Prostokat(int szerokosc, int wysokosc) : szerokosc(szerokosc), wysokosc(wysokosc) {}

//     // Konstruktor domyślny - domyślnie ustawiamy szerokość i wysokość na 1
//     Prostokat() : Prostokat(1, 1) {}  // delegacja do głównego konstruktora

//     // Konstruktor kopiujący - kopiujemy wymiary innego prostokąta
//     Prostokat(const Prostokat &inny) : szerokosc(inny.szerokosc), wysokosc(inny.wysokosc) {}

//     // Zwraca pole prostokąta
//     int pole() const {
//         return szerokosc * wysokosc;
//     }

//     // Wyświetla info o prostokącie
//     void display() const {
//         cout << "Prostokat o szerokosci " << szerokosc 
//              << " i wysokosci " << wysokosc 
//              << " ma pole: " << pole() << endl;
//     }
// };

// int main() {
//     int szer, wys;
//     cout << "Podaj szerokosc prostokata: ";
//     cin >> szer;
//     cout << "Podaj wysokosc prostokata: ";
//     cin >> wys;

//     Prostokat prostokat1(szer, wys);  // Tworzymy prostokąt z wymiarów użytkownika
//     Prostokat prostokat2;             // Domyślny prostokąt (1,1)
//     Prostokat prostokat3 = prostokat1; // Kopia prostokata1

//     // Wyświetlamy dane wszystkich prostokątów
//     prostokat1.display();
//     prostokat2.display();
//     prostokat3.display();

//     return 0;
// }

// Ten kod definiuje klasę Prostokat, która reprezentuje prostokąt o określonej szerokości i wysokości oraz pozwala obliczyć jego pole. Program działa w następujący sposób:

// Tworzy trzy obiekty prostokątów:

// prostokat1: z szerokością i wysokością podaną przez użytkownika.
// prostokat2: domyślny prostokąt o wymiarach 1x1.
// prostokat3: kopię prostokat1.
// Dla każdego prostokąta wyświetla jego szerokość, wysokość oraz pole.

// Konstruktor główny i domyślny inicjalizują wymiary prostokąta, a konstruktor kopiujący tworzy kopię z istniejącego obiektu.