// #include <iostream>
// using namespace std;
// void wypelnij(char tablica[], int rozmiar)
// {

//     for (int i = 0; i < rozmiar; i++)
//     {
//         cout << "podej " <<  1 + i << " element tablicy\n";
//         cin >> tablica[i];
//     }
// }

// void wypisz(char tablica[], int rozmiar)
// {

//     for (int i = 0; i < rozmiar; i++)
//     {
//         cout << "to jest " << 1 + i << " element tablicy\n";
//         cout << tablica[i] << endl;
//     }
// }
// void sprawdz(char tablica[] ) {
//     char literka;
    
//     cout <<"Podaj literke a ja sprawdze czy jest w słowie" << endl;
//     cin >> literka;
   
//     if (literka == tablica[0]) {
//         cout << "Literka znajduje się w słowie";
        
//     }
//     if (literka == tablica[1]) {
//         cout << "Literka znajduje się w słowie";
//     }
//     if (literka == tablica[2]) {
//         cout << "Literka znajduje się w słowie";
//     }
//     if (literka == tablica[3]) {
//         cout << "Literka znajduje się w słowie";
//     }
//     if (literka == tablica[4]) {
//         cout << "Literka znajduje się w słowie";
//     }
    
// }



// int main()
// {
    
//     char literka;
    
//     char tab[1];
    
//     wypelnij(tab, 5);
//     wypisz(tab, 5);
//     sprawdz(tab);

//     return 0;
// }
using namespace std;
#include <string>
#include <fstream>
#include <iostream>

int main()
{
    string napisOdUsera;
    int liczbaWystapien = 0;
    char literaOdUsera;
    cout << "dowej napis\n";
    cin >> napisOdUsera;
    cout << "dowej litere";
    cin >> literaOdUsera;
    for (char iterator : napisOdUsera)
    {
        if (iterator == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    cout << liczbaWystapien;
    for (short i = 0; i < napisOdUsera.length(); i++)
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    for (size_t i = 0; napisOdUsera[i] != '\0'; i++)
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    int i = 0;
    while (napisOdUsera[i] != '\0')
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
        i++;
    }
}