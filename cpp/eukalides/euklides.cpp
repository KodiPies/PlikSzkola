#include <iostream>
using namespace std;
int nwd(int liczba1, int liczba2)
{
    while (liczba1 != liczba2)
    {
        if (liczba1 > liczba2)
        {
            liczba1 = liczba1 - liczba2;
        }
        if (liczba2 > liczba1)
        {
            liczba2 = liczba2 - liczba1;
        }
    }
    return liczba1;
}
int main()
{

    int liczba1 = 125;                           
    int liczba2 = 50;
    cout << nwd(liczba1, liczba2);
    return 0;
}