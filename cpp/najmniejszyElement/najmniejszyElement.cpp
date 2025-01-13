#include <iostream>
using namespace std;
// void max (int liczbaElementowTablicy, int tablicaPrzeszukiwana[]) {
//     int maxWartosc;
//     int temp;
    
    
//     for (int i = 0; i > liczbaElementowTablicy; i++)
//     {
//         maxWartosc = tablicaPrzeszukiwana[i];
//         for (int j = i; j > liczbaElementowTablicy; j++)
//         {
//             if (tablicaPrzeszukiwana[j] > maxWartosc)
//             {
//                 temp = maxWartosc;
//                 maxWartosc = tablicaPrzeszukiwana[j];
//                 tablicaPrzeszukiwana[i] = maxWartosc;
//                 tablicaPrzeszukiwana[j] = temp;
//             }
//         }
//     }
// }
void sortowanieRosnaco(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int minimalny;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        minimalny = tablicaPrzeszukiwana[i];
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] > minimalny)
            {
                temp = minimalny;
                minimalny = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[i] = minimalny;
                tablicaPrzeszukiwana[j] = temp;
            }
        }
    }
}
// void sort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
// {
//     int temp;
//     int j;
//     for (int i = 0; i < liczbaElementowTablicy; i++)
//     {
//         temp = tablicaPrzeszukiwana[i];
//         j = i - 1;
//          while (j >= 0 && tablicaPrzeszukiwana[j] > temp)
//         {
//             tablicaPrzeszukiwana[j + 1] = tablicaPrzeszukiwana[j];
//             j--;
//         }
//         tablicaPrzeszukiwana[j + 1] = temp;
//     }
// }
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
    // sort(tablicaTestowa, 5);
    sortowanieRosnaco(tablicaTestowa, 5);
    wypisz(tablicaTestowa, 1);
    return 0;
}