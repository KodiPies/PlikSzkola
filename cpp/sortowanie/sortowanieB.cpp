#include <iostream>
using namespace std;
void bubbleSort(int tablica[], int rozmiar)
{
    int temp;
    for (int i = 0; i < rozmiar - 1; i++)
    {

        for (int j = 0; j < rozmiar - 1 - i; j++)
        {
            if (tablica[j] > tablica[j + 1])
            {
                temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}
void insertionSort(int tablica[], int rozmiar)
{

    for (int i = 1; i < rozmiar; i++)
    {
        int temp = tablica[i];

        int j = i - 1;

        while (tablica[j] > temp && j >= 0)
        {

            tablica[j + 1] = tablica[j];
            j--;
        }

        tablica[j + 1] = temp;
    }
}
void selectionSort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int minimalny;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        minimalny = tablicaPrzeszukiwana[i];
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] < minimalny)
            {
                temp = minimalny;
                minimalny = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[i] = minimalny;
                tablicaPrzeszukiwana[j] = temp;
            }
        }
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
    selectionSort(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    wypelnij(tablicaTestowa, 5);
    insertionSort(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    cout << endl;
    wypelnij(tablicaTestowa, 5);
    bubbleSort(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 5);
    return 0;
}