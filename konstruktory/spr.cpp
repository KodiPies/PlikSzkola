// Grupa A
//  Stwórz klasę „książka” zawierającą:
//  – pola prywatne: tytuł, autor, rok wydania
//  – settery i gettery do prywatnych pól
//  – metoda wypisująca informację o książce
//  – lista użyta do inicjalizacji
//  – konstruktor parametryczny i kopiujący
//  – pole statyczne zliczające liczbę książek
//  – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego
//  – W programie użyty konstruktor parametryczny i kopiujący
//  -W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt  w którym imie i nazwisko autora są wielkimi literami.

#include <iostream>
#include <string>
using namespace std;

class Ksiazka
{
private:
    string tytul;
    string autor;
    int rokWydania;

    string duze(string str) //to byc to robienia duzych rzeczy
    {
        for (char &slowo : str)
        {
            slowo = toupper(slowo);
        }
        return str;
    }

public:
    static int liczbaKsiazek;

    Ksiazka() : Ksiazka("", "", 0) {} // to bez parametru

    Ksiazka(string tytulP, string autorP, int rokWydaniaP) // a to z parametrem
        : tytul(tytulP), autor(autorP), rokWydania(rokWydaniaP)
    {
        liczbaKsiazek++;
    }

    Ksiazka(const Ksiazka &reszta)
        : tytul(reszta.tytul), autor(reszta.autor), rokWydania(reszta.rokWydania)
    {
        liczbaKsiazek++;
    }

    void setTytul(string tytulP) // to jeden z seterow
    {
        tytul = tytulP;
    }

    void setAutor(string autorP)
    {
        autor = autorP;
    }

    void setRokWydania(int rokWydaniaP)
    {
        rokWydania = rokWydaniaP;
    }

    string getTytul() // to jeden z geterow
    {
        return tytul;
    }

    string getAutor()
    {
        return autor;
    }

    int getRokWydania()
    {
        return rokWydania;
    }

    void display() // to wyswietla
    {
             cout << "|Tytuł:| " << tytul << " |Autor:| " << autor << " |Rok wydania:| " << rokWydania << endl;
             
    }

    Ksiazka duzeLitery() // tu musi przekazac co ma byc duze
    {
        return Ksiazka(tytul, duze(autor), rokWydania);
    }
};

int Ksiazka::liczbaKsiazek = 0;

int main()
{

    Ksiazka ksiazka1("Zagłda Szkoły", "Katyrzyna K", 2024); // pierwsza ksiazka
    ksiazka1.display();

    Ksiazka ksiazka2 = ksiazka1; // druga ksiazka
    ksiazka2.display();

    Ksiazka ksiazka3 = ksiazka1.duzeLitery(); // trzecia ksiazka
    ksiazka3.display();

    cout << "Liczba książek: " << Ksiazka::liczbaKsiazek << endl; // ilosc ksiazek

    return 0;
}
