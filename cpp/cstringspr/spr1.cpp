#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int dlugosc = 100; 

    char imieNazwisko[dlugosc];
    char drugieImie[dlugosc];
    char nowaNazwa[dlugosc * 2]; 

    
    cout << "Podaj imie i nazwisko (oddzielone spacją): ";
    cin.getline(imieNazwisko, dlugosc);


    cout << "Podaj drugie imie: ";
    cin.getline(drugieImie, dlugosc);


    char *spacja = strchr(imieNazwisko, ' ');

    if (spacja != nullptr) {
       
 
        strcpy(nowaNazwa, imieNazwisko); 
        strcat(nowaNazwa, " "); 
        strcat(nowaNazwa, drugieImie); 

        // strcat(nowaNazwa, spacja + 1); 

       
        cout << "Nowa tresc: " << nowaNazwa << endl;
    } else {
        cout << "Niepoprawny format" << endl;
        return 1; 
    }

    return 0;
}