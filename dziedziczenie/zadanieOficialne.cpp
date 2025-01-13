#include <iostream>
using namespace std;

class bazowaTymek
{
protected:
    int liczba1;
    int liczba2;

public:

    bazowaTymek(int l1, int l2) : liczba1(l1), liczba2(l2)
    {
    }

    
    int getLicz1()

    {
        return liczba1;
    }
    int getLicz2()

    {
        return liczba2;
    }
    void setLicz1(int l1)
    {
        liczba1 = l1;
    }
    void setLicz2(int l2)
    {
        liczba2 = l2;
    }
};

class pochodnaTymek : private bazowaTymek
{
public:
   
    pochodnaTymek(int l1, int l2) : bazowaTymek(l1, l2) {}

    
    void display()
    {
        cout << "Liczba 1: " << getLicz1() << endl;
        cout << "Liczba 2: " << getLicz2() << endl;
    }

    
    void ustaw1(int l1) {
        bazowaTymek::setLicz1(l1);
    }
    void ustaw2(int l2) {
        bazowaTymek::setLicz2(l2);
    }
};

int main()
{
    int jeden, dwa, nowa1, nowa2;
    cout <<"Podaj pierwszą wartość: " << endl;
    cin >> jeden;
    cout <<"Podaj drugą wartość" << endl;
    cin >> dwa;
    pochodnaTymek przyklad(jeden, dwa);

  
    przyklad.display();

     
     
        cout << "Podaj wartośc pierwszej liczby: " << endl;
        cin >> nowa1;
        cout << "Podaj wartość drugiej liczby: " << endl;
        cin >> nowa2;
        przyklad.ustaw1(nowa1);
        przyklad.ustaw2(nowa2);

    
        przyklad.display();
     

    

    return 0;
}
