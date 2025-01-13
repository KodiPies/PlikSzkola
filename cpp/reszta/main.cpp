// #include <iostream>
// #include <cstdio>
// using namespace std;
// int sequence(int n)
//    {
//       if (n == 1)
//       {
//          return 1;
//       }
//       else
//       {
//          return 3 * sequence(n - 1) - sequence(n - 1) * sequence(n - 1);
//       }
//    }
// int main()

// {
//    cout<<sequence(4);
//    return 0;
// }
#include <iostream>
using namespace std;
unsigned long long silnia(int n)
{
    if (n == 0)
        return 1;
    else
        return silnia(n - 1) * n;
}
int main()
{
    // silnia iteracyjnie
    unsigned long long liczba, wynik = 1;
    cin >> liczba;
    // for(int i=1; i<=liczba; i++){
    // wynik=wynik*i;
    // }
    // silnia rekurencyjnie
    cout << sizeof(short int) << endl;
    cout << silnia(liczba);
    return 0;
}