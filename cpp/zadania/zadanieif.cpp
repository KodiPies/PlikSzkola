#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj liczbę" << endl;
    cin >> liczba;
    cout << "Podana liczba = " << liczba << endl;
    string mhm;

    if (liczba > 0)
        mhm = "0 ";
    else if (liczba < 0)
        mhm = "1";
    else if (liczba == 0)
        mhm = "0";
    cout << "Wartość funkcji wynosi: " << mhm << endl;
    return 0;
}