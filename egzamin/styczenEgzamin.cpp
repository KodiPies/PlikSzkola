#include <iostream>
using namespace std;
class Klasa {

private:
int liczbaElementowTab;
int tablica[];

    public:
    
    void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTab)   
{
    for (int i = 0; i < liczbaElementowTab; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 1000 + 1;
    }
}


void wypisz(int tablicaDoWypisania[], int liczbaElementowTab)
{
    for (int i = 0; i < liczbaElementowTab; i++)
    {
        for( i=0; i < liczbaElementowTab; i++) {
        cout << i << ". " << tablicaDoWypisania[i] << endl << " ";
        }
    }

}
};




int main()
{
    Klasa zamowienie1;
     int tablicaTestowa[5];
    zamowienie1.wypelnij(tablicaTestowa, 4);
    zamowienie1.wypisz(tablicaTestowa,4);
    // cout << endl;
    // sort(tablicaTestowa, 5);
    // wypisz(tablicaTestowa, 5);
    // return 0;
}