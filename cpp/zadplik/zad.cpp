////jakies basic
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string imie, nazwisko, wiek, decyzja;
    
    ofstream plik("informacje.txt", ios_base::app); 
    
    do {
        cout << "Podaj imię: ";
        cin >> imie;
        
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        
        cout << "Podaj wiek: ";
        cin >> wiek;
        
        plik << imie << " " << nazwisko << " " << wiek << endl; 
        
        cout << "Czy chcesz dalej wpisywać? (t/n): ";
        cin >> decyzja;
    } while (decyzja == "t");
    
    plik.close();
    
    return 0;
}
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
int liczba1, liczba2;
ifstream odczyt("wyjscie.txt");
odczyt >> liczba1>>liczba2;
odczyt.close();
cout <<liczba1 <<" "<<liczba2;
return 0;
}
//⇡ odczyt   ⇣zapis
#include <fstream>
using namespace std;

int main()
{

ofstream zapis("informacje.txt");
zapis << 3 << " dupaWolowa " << -20;
zapis.close();
return 0;
}