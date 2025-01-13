// Grupa:A
// W klasie bazowej jedna wlasność ma być dostępna w programie bezposrednio, a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.
// W klasie pochodnej odziedziczone własności mają być protected. Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.

#include <iostream>
using namespace std;

class bazowaTymek
{
protected:
    int liczba1;
    

public:
    int liczba2;

    bazowaTymek(int l1, int l2) : liczba1(l1), liczba2(l2)
    {
    }

    int getLicz1()

    {
        return liczba1;
    }

    void setLicz1(int l1)
    {
        liczba1 = l1;
    }
};

class pochodnaTymek : protected bazowaTymek
{
public:
    pochodnaTymek(int l1, int l2) : bazowaTymek(l1, l2) {}

    void display()
    {
        cout << "Liczba 1: " << getLicz1() << endl;

        cout << "Liczba 2: " << liczba2 << endl;
    }

    void ustaw1(int l1)
    {
        bazowaTymek::setLicz1(l1);
    }
    void ustaw2(int l2)
    {

        liczba2 = l2;
    }
};

int main()
{
    int jeden, dwa, nowa1, nowa2;
    cout << "Podaj pierwszą wartość: " << endl;
    cin >> jeden;
    cout << "Podaj drugą wartość" << endl;
    cin >> dwa;
    pochodnaTymek przyklad(jeden, dwa);

    przyklad.display();

    cout << "Podaj wartośc pierwszej liczby a zamienimy ją z podaną już pierwszą liczbą: " << endl;
    cin >> nowa1;
    cout << "Podaj wartość drugiej liczby a zamienimy ją z podaną już drugą liczbą: " << endl;
    cin >> nowa2;
    przyklad.ustaw1(nowa1);
    przyklad.ustaw2(nowa2);

    przyklad.display();

    return 0;
}
