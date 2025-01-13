#include <iostream>
using namespace std;


unsigned long long silnia(int n) {
    if (n ==0)
    return 1;
    else return silnia(n - 1) * n;
}
int main()
{
    unsigned long long liczba, wynik =1;
    cin >> liczba;
    cout << silnia(liczba);
    return 0;
}