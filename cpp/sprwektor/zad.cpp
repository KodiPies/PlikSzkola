#include <iostream>
#include <cstring>
using namespace std;
void indexy(string napis, char znak)
{
    int wystapienia = 0;
    int index = 0;
    for (char znakNapisu : napis)
    {
        if (znak == znakNapisu)
        {
            cout << "Znak jest na indexie: " << index << endl;
            wystapienia++;
        }
        index++;
    }
    cout << "Liczba wystapien: " << wystapienia << endl;
}
int indexPierwszegoWystapienia(char napis[100], char znak)
{
    cout << strchr(napis, znak);
    return strlen(napis) - strlen(strchr(napis, znak));
}
int main()
{
    char napis[100];
    char znak;
    cout << "Podaj napis ";
    cin >> napis;
    cout << "Podaj znak do sprawdzeia ";
    cin >> znak;
    indexy(napis, znak);
    cout << indexPierwszegoWystapienia(napis, znak);
    return 0;
}