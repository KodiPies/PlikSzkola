#include <iostream>
#include <vector>
#include "operacje.h"
using namespace std;



int main()
{

    int statycznaTablica[10];
    cout << "Podaj 10 liczb do  statycznej: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout <<"["<<1 + i<< "]" <<" Element: ";
        cin >> statycznaTablica[i];
    }
    cout << "Min statyczna: " << znajdzMinStatyczna(statycznaTablica, 10) << endl;
    cout << "Max statyczna: " << znajdzMaxStatyczna(statycznaTablica, 10) << endl;

    cout << "Podaj 10 liczb do  dynamicznej: " << endl;
    int *dynamicznaTablica = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout <<"["<<1 + i<< "]" <<" Element: ";
        cin >> dynamicznaTablica[i];
    }
    cout << "Min dynamiczna: " << znajdzMinDynamiczna(dynamicznaTablica, 10) << endl;
    cout << "Max dynamiczna: " << znajdzMaxDynamiczna(dynamicznaTablica, 10) << endl;
    delete[] dynamicznaTablica;

    cout << "Podaj 10 liczb do wektora: " << endl;
    vector<int> wektor(10);
    for (int i = 0; i < 10; i++)
    {
        cout <<"["<<1 + i<<"]" <<" Element: ";
        cin >> wektor[i];
    }
    cout << "Min wektor: " << znajdzMinWektor(wektor) << endl;
    cout << "Max wektor: " << znajdzMaxWektor(wektor) << endl;

    return 0;
}