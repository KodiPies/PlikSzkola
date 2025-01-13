#include <iostream>
using namespace std;
// Definicja abstrakcyjnej klasy bazowej Osoba:
class Osoba {
public:
// Deklaracje zmiennych członkowskich:
string imie;
string nazwisko;
/* UWAGA
* Klasa abstrakcyjna może zawierać deklaracje zwykłych — instancyjnych zmiennych i metod członkowskich.
*/
// Deklaracja metody abstrakcyjnej — funkcji czysto wirtualnej:
virtual void wyswietlDane() = 0;
};
// Definicja klasy pochodnej Pracownik:
class Pracownik : public Osoba {
public:
Pracownik() {};
Pracownik(string im, string na, string st)
    {
        imie = im;
        nazwisko = na;
        stanowisko = st;
    };
    
string stanowisko;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << stanowisko << endl;
}
/* UWAGA
* Metoda abstrakcyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana
* w jej klasie pochodnej.
*/
};
// Definicja klasy pochodnej Uczen:
class Uczen : public Osoba {
public:
Uczen() {};
Uczen(string im, string na, string kl)
    {
        imie = im;
        nazwisko = na;
        klasa = kl;
    };
string klasa;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << klasa << endl;
}
};
int main() {
    Osoba *pracownik= new Pracownik("Jan", "Kowalski", "nauczyciel");
    cout << "Dane Pracownika " << endl;
     pracownik->wyswietlDane();
    pracownik= new Uczen("Jann", "Kowalskiii", "nauczyciel");
    cout << "Dane Ucznia "<< endl;
     pracownik->wyswietlDane();
    return 0;

return 0;
}