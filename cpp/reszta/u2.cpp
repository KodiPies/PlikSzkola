#include <iostream>
using namespace std;
int main()
{
    int l1, l2, wynik;
    cout << "Podaj pierwszą liczbe" << endl;
    cin >> l1;
    cout << "Podaj drugą liczbe" << endl;
    cin >> l2;
    wynik = l1 & l2;
    cout << l1 << "&" << l2 << "=" << wynik << endl;
    wynik = l1 | l2;
    cout << l1 << "|" << l2 << "=" << wynik << endl;
    wynik = l1 ^ l2;
    cout << l1 << "^" << l2 << "=" << wynik << endl;
    wynik = l1 << l2;
    cout << l1 << "<<" << l2 << "=" << wynik << endl;
    wynik = l1 >> l2;
    cout << l1 << ">>" << l2 << "=" << wynik << endl;
    wynik = ~l1;
    cout << l1 << "~"
         << "=" << wynik << endl;
    wynik = ~l2;
    cout << l1 << "~"
         << "=" << wynik << endl;
}