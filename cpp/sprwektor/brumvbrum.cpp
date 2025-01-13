#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Samochod {
    string nazwa;
    string model;
    int rokProdukcji;
};

int main() {
    vector<Samochod> samochody;

    // Pytamy użytkownika ile samochodów chce dodać
    cout << "Ile samochodów chcesz dodać? ";
    int liczbaSamochodow;
    cin >> liczbaSamochodow;
    cin.ignore(); // Ignorujemy znak nowej linii

    // Dodajemy samochody do wektora
    for (int i = 0; i < liczbaSamochodow; i++) {
        Samochod nowySamochod;
        cout << "Podaj nazwę samochodu " << (i+1) << ": ";
        cin >> nowySamochod.nazwa;
        cout << "Podaj model samochodu " << (i+1) << ": ";
        cin >> nowySamochod.model;
        cout << "Podaj rok produkcji samochodu " << (i+1) << ": ";
        cin >> nowySamochod.rokProdukcji;
        cin.ignore(); // Ignorujemy znak nowej linii
        samochody.push_back(nowySamochod);
    }

    // Wyszukiwanie
    cout << "Wyszukiwanie po nazwie (1), modelu (2) czy roku produkcji (3)? ";
    int opcja;
    cin >> opcja;
    cin.ignore(); // Ignorujemy znak nowej linii

    bool znaleziono = false;
    string szukaneSlowo;
    if (opcja == 1 || opcja == 2) {
        cout << "Podaj nazwę lub model samochodu do wyszukania: ";
        cin >> szukaneSlowo;
    } else if (opcja == 3) {
        cout << "Podaj rok produkcji samochodu do wyszukania: ";
        cin >> szukaneSlowo;
    }

    // Przeszukujemy wektor i wypisujemy znalezione samochody
    for (const auto& samochod : samochody) {
        if (opcja == 1 && samochod.nazwa == szukaneSlowo) {
            cout << "Znaleziono samochód: " << samochod.nazwa << " " << samochod.model << " " << samochod.rokProdukcji << endl;
            znaleziono = true;
        } else if (opcja == 2 && samochod.model == szukaneSlowo) {
            cout << "Znaleziono samochód: " << samochod.nazwa << " " << samochod.model << " " << samochod.rokProdukcji << endl;
            znaleziono = true;
        } else if (opcja == 3 && samochod.rokProdukcji == stoi(szukaneSlowo)) {
            cout << "Znaleziono samochód: " << samochod.nazwa << " " << samochod.model << " " << samochod.rokProdukcji << endl;
            znaleziono = true;
        }
    }

    if (!znaleziono) {
        cout << "Nie znaleziono samochodu o podanej nazwie, modelu lub roku produkcji." << endl;
    }

    return 0;
}