#include <iostream>
#include <string>

using namespace std;

// Funkcja wyodrębnia pierwszy człon z napisu
string PierwszyCzlon(string napis) {
    int pozycja = napis.find(' ');
    return napis.substr(0, pozycja);
}

// Funkcja wyodrębnia trzeci człon z napisu
string trzeciczlon(string napis) {
    int spacja1 = napis.find(' ');
    int spacja2 = napis.find(' ', spacja1 + 1);
    return napis.substr(spacja2 + 1);
}

// Funkcja zamienia pierwszy człon pierwszego napisu z trzecim członem drugiego napisu
void zamien(string &napis1, string &napis2) {
    string pierwszyCzlon = PierwszyCzlon(napis1);
    string trzeciCzlon = trzeciczlon(napis2);

    int pozycjaPierwszego = napis1.find(' ');
    int pozycjaDrugiego = napis2.find(' ', napis2.find(' ') + 1);

    napis1.replace(0, pozycjaPierwszego, trzeciCzlon);
    napis2.replace(pozycjaDrugiego + 1, napis2.length() - pozycjaDrugiego - 1, pierwszyCzlon);
}


string zamienLitery(string napis) {
    for (char &znak : napis) {
        if (islower(znak)) { 
            znak = toupper(znak); 
        } else if (isupper(znak)) { 
            znak = tolower(znak); 
        }
    }
    return napis;
}



int main() {
    string napis1, napis2;

    cout << "Podaj pierwszy trzyczłonowy napis: ";
    getline(cin, napis1);
    cout << "Podaj drugi trzyczłonowy napis: ";
    getline(cin, napis2);

    napis1 = zamienLitery(napis1);
    napis2 = zamienLitery(napis2);
    zamien(napis1, napis2);

    cout << "Po zamianie:" << endl;
    cout << "Pierwszy napis: " << napis1 << endl;
    cout << "Drugi napis: " << napis2 << endl;

    return 0;
}