#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
        int nrBut;
    };

    osoba persona;

    cout << "Podaj nazwisko \n";
    cin >> persona.nazwisko;
    cout << "Podaj imie \n";
    cin >> persona.imie;
    cout << "Podaj wiek \n";
    cin >> persona.wiek;
    cout << "Podaj numer buta \n";
    cin >> persona.nrBut;


    cout<<persona.wiek;




    osoba baza[100];
    for (int i;i=0;i++){
        baza[i].imie;
        baza[i].nazwisko;
        
    }


    return 0;
}