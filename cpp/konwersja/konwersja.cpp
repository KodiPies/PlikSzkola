#include <iostream>
using namespace std;
int main()
{
    char l1;
    char l2;
    int liczba1, liczba2;
    cout << "Podaj pierwszą liczbe ";
    cin >> l1;
    cout << "Podaj drugą liczbe ";
    cin >> l2;

    liczba1 = (int)l1;
    liczba1 -= 48;
    liczba2 = (int)l2;
    liczba2 -= 48;
    cout << liczba1 << "+" << liczba2 << "=" << liczba1 + liczba2 << endl;
    cout << liczba1 << "*" << liczba2 << "=" << liczba1 * liczba2 << endl;
    cout << liczba1 << ":" << liczba2 << "=" << liczba1 / liczba2 << endl;
    cout << liczba1 << "-" << liczba2 << "=" << liczba1 - liczba2 << endl;

    return 0;
}