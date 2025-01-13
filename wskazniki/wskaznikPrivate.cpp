#include <iostream>
using namespace std;


// Definicja klasy uczen:
class Uczen
{
private:
 string imie;
string nazwisko;

public:
   
    
    
    
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        
    }
    void setNazwisko(string nazwisko2) {
        nazwisko = nazwisko2;
    }
    void setImie(string imie2) {
        imie = imie2;
    }
    string getImie() {
        return imie;
    }
    string getNazwisko() {
        return nazwisko;
    }
    
};
int main()
{
    // Deklaracja zmiennej wskaźnikowej (wskaźnika) w_uczen na dowolny obiekt należący do typu uczen:
    Uczen *w_uczen;
    // Utworzenie obiektu typu uczen (instancji klasy uczen) wskazywanego przez wskaźnik w_uczen:
    w_uczen = new Uczen();
    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    w_uczen->setImie("Jan");
    w_uczen->setNazwisko("Antekowski");
    
    // Prezentacja danych zapisanych w zmiennych członkowskich obiektu na ekranie monitora:
    w_uczen->wyswietlDane();
    cout << w_uczen->getImie() << endl;
    cout << w_uczen->getNazwisko() << endl;
    
    // Usunięcie (zniszczenie) obiektu wskazywanego przez wskaźnik w_uczen:
    delete w_uczen;
    return 0;
}