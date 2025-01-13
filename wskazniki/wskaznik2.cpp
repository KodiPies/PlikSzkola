#include <iostream>
using namespace std;


// Definicja klasy uczen:
class Auto
{
private:
 int cena;


public:
string marka;
string model;
int rokProdukcji;
int numerRejestracyjny;
   
    
    
    
    void wyswietlDane()
    {
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "rok produkcji : " << rokProdukcji << endl;
        cout << "numer rejestracyjny: " << numerRejestracyjny << endl;
        cout << "cena: " << cena << endl;
        
    }
    void setCena(int cena2) {
        cena = cena2;
    }
    
    int getCena() {
        return cena;
    }

    
    
    
};
int main()
{
    int cena, cena2;
    string marka, marka2;
    string model, model2;
    int rok, rok2;
    int numer, numer2;
    // Deklaracja zmiennej wskaźnikowej (wskaźnika) w_uczen na dowolny obiekt należący do typu uczen:
    Auto *w_auto;
    // Utworzenie obiektu typu uczen (instancji klasy uczen) wskazywanego przez wskaźnik w_uczen:
    w_auto = new Auto();
    // Nadanie wartości zmiennym członkowskim utworzonego obiektu:
    cout <<"Podaj cena auta" << endl;
    cin >> cena;
    w_auto->setCena(cena);
    cout <<"Podaj marke auta" << endl;
    cin >> marka;
    w_auto->marka = "marka";
    cout << "Podaj model auta" << endl;
    cin >> model;
    w_auto->model = model;
    cout << "Podaj rok produkcji auta" << endl;
    cin >> rok;
    w_auto->rokProdukcji = rok;
     cout << "Podaj numer rejestracji auta" << endl;
    cin >> numer;
    w_auto->numerRejestracyjny = numer;
    
    
    // Prezentacja danych zapisanych w zmiennych członkowskich obiektu na ekranie monitora:
    w_auto->wyswietlDane();
    // cout << w_auto->getCena() << endl;
    
    
    // Usunięcie (zniszczenie) obiektu wskazywanego przez wskaźnik w_uczen:
    // delete w_auto;
    Auto *w_auto2;
    w_auto2 = new Auto();
    cout <<"Podaj cena auta" << endl;
    cin >> cena2;
    w_auto2->setCena(cena2);
    cout <<"Podaj marke auta" << endl;
    cin >> marka2;
     w_auto2->marka = marka2;
     cout << "Podaj model auta" << endl;
    cin >> model2;
    w_auto2->model = model2;
    cout << "Podaj rok produkcji auta" << endl;
    cin >> rok2;
    w_auto2->rokProdukcji = rok2;
    cout << "Podaj numer rejestracji auta" << endl;
    cin >> numer2;
    w_auto2->numerRejestracyjny = numer2;
    w_auto2->wyswietlDane();
    
    if (w_auto2->getCena() > w_auto->getCena()) {
        cout << "Auto drugie jest droższe" << endl;
    }
    else {
        cout << "Auto pierwsze jest droższe" << endl;
    }

    return 0;
}