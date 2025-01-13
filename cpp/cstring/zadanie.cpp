#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string imie;
    cout <<"Podaj drugie imie: " << endl;
    cin >> imie;
    string imieNazwisko;
    cout <<"Podaj imie i nazwisko: " << endl;
    cin >> imieNazwisko ;
    string napis2 = imieNazwisko;
    string napis4="Burian";
    imieNazwisko.find(napis4);
    
    string napis3 = imieNazwisko;
    napis3.substr(5,10);
    cout << napis3 << endl;
    string napis1 = imieNazwisko;
    napis1.replace(5, 10, imie);
    cout << napis1;
    
    
}