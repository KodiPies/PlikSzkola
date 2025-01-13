#include <iostream>
#include <cstring>
using namespace std;

class Zwierze{

    public:
    virtual void getImie() = 0;
};
class Czlowiek{

    public:
    virtual void getImie() =0;
};

class Planeta: public Zwierze, public Czlowiek {
    public:
    string imie;
    virtual void getImie(){

    cout <<"Podaj imie " << endl;
    cin >> imie;
    cout <<"Imie:  " << imie << endl;
    }

};

int main()
{
    Planeta planeta;
    planeta.getImie();

    
    
    
}