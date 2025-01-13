#include <iostream>
using namespace std;
void sort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int j;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        temp = tablicaPrzeszukiwana[i];
        j = i - 1;
         while (j >= 0 && tablicaPrzeszukiwana[j] > temp)
        {
            tablicaPrzeszukiwana[j + 1] = tablicaPrzeszukiwana[j];
            j--;
        }
        tablicaPrzeszukiwana[j + 1] = temp;
    }
}
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
int main()
{
    int tablicaTestowa[5];
    wypelnij(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    sort(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    return 0;
}