#include <iostream>
using namespace std;

class Pracownik {
public:
string imie;
string nazwisko;

void display();
};

class Nauczyciel: public Pracownik {
public:
string przedmiot;

void display();
};

class Wychowawca: public Nauczyciel {
public:
string jakiejKlasyWychowawca;

void display();
};

void Pracownik::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko
<< endl;
}
void Nauczyciel::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko<<", przedmiot: "<<przedmiot
<< endl;
}
void Wychowawca::display() {
cout << "imie i nazwisko pracownika: "<<imie<<" "<<nazwisko<<", przedmiot: "<<przedmiot<< ", wychowawca klasy: "<<jakiejKlasyWychowawca
<< endl;
}

int main() {

Pracownik pracownik1;
pracownik1.imie = "Jan";
pracownik1.nazwisko = "Kowalski";

pracownik1.display();

Nauczyciel pracownik2;
pracownik2.imie = "Adam";
pracownik2.nazwisko = "Nowak";
pracownik2.przedmiot = "matematyka";

pracownik2.display();

Wychowawca pracownik3;
pracownik3.imie = "Jan";
pracownik3.nazwisko = "Kochanowski";
pracownik3.przedmiot = "polski";
pracownik3.jakiejKlasyWychowawca = "43";

pracownik3.display(); 
return 0;
}