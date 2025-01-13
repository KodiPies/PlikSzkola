#include <iostream>
using namespace std;
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}
int najwiekszyElement(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int max = tablicaPrzeszukiwana[0];
    int indexMax = 0;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        if (tablicaPrzeszukiwana[i] > max)
        {
            max = tablicaPrzeszukiwana[i];
            indexMax = i;
        }
    }
    for (int i = indexMax; i < liczbaElementowTablicy; i++)
    {
        tablicaPrzeszukiwana[i] = tablicaPrzeszukiwana[i + 1];
    }
    return max;
}
int main()
{
    int tablicaTestowa[5], tablicaPosortowana[5];
    wypelnij(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    for (int i = 5; i > -1; i--)
    {
        int min = najwiekszyElement(tablicaTestowa, i);
        tablicaPosortowana[5 - i] = min;
    }
    wypisz(tablicaPosortowana, 5);
    return 0;
}