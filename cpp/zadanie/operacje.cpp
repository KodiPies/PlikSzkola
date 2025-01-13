#include <iostream>
using namespace std;
struct miara
{
    int cale;
    int stopy;
    int jardy;
    int mile;
};

void obliczanieCzasu(int caleDoDodania, miara &miara)
{
    int miaraCale = 0;
    int miaraStopy = 0;
    int miaraJardy = 0;
    int miaraMile = 0;

    miaraMile = caleDoDodania / 63360;
    caleDoDodania = caleDoDodania % 63360;

    miaraJardy = caleDoDodania / 36;
    caleDoDodania = caleDoDodania % 36;

    miaraStopy = caleDoDodania / 12;
    caleDoDodania = caleDoDodania % 12;

    miaraCale = caleDoDodania;

    

    miara.cale = miaraCale;
    miara.stopy = miaraStopy;
    miara.jardy = miaraJardy;
    miara.mile = miaraMile;
}



void wypisz(miara miarex)
{
    cout << "Mile: "<< miarex.mile << endl;
    cout << "Jardy: "<< miarex.jardy << endl;
    cout << "Stopy: "<< miarex.stopy << endl;
    cout << "Cale: "<< miarex.cale << endl;
}