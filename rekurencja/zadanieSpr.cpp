#include <iostream>
using namespace std;


int f(int n)
{
    if (n == 0)  return 3;
    else   return f(n-1)+2;

}
long int potega(int p, int w)
{
    if (w == 0) return 1;
    else return p * potega(p, w - 1);

}
int ciag(int n)
{
    if (n == 1 || n == 2) return 1;
    else return ciag(n - 1) + ciag(n - 2);
}
long int silnia(int s)
{
    if (s == 0) return 1;
    else return  s * silnia(s - 1);
}
// int liczba_wywolan = 0;
int a(int n) {
    // liczba_wywolan++; // Zwiększenie licznika za każdym razem, gdy funkcja jest wywoływana
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 2;
    }
    else {
        return a(n - 1) + 2 * a(n - 2);
    }
}


int main()
{
    cout << f(3) << endl;
    cout << potega(3, 4) << endl;
    cout << ciag(6) << endl;
    cout << silnia(6);

        int n;
        cout << "Podaj numer wyrazu ciągu (n): " << endl;
        cin >> n ;

        // Obliczenie n-tego wyrazu ciągu
        int wynik = a(n);

        // Wyświetlenie wyniku
        cout << "a(" << n << ") = " << wynik << endl;
        // cout << "Liczba wywołań funkcji rekurencyjnej: " << liczba_wywolan << endl;

        return 0;
}