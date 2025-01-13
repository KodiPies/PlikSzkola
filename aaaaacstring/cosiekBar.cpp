#include <iostream>
#include <string>
using namespace std;

int main() {
    string imieNazwisko;

    cout << "Podaj imię i nazwisko oddzielone spacją: ";
    getline(cin, imieNazwisko);

    size_t spacePos = imieNazwisko.find(' ');
    if (spacePos == string::npos) {
        // Jeśli nie znaleziono spacji, wyjdź z programem lub wyświetl błąd
        cout << "Błędny format. Podaj imię i nazwisko oddzielone spacją." << endl;
        return 1;
    }

    // Podział napisu na dwa człony
    string firstPart = imieNazwisko.substr(0, spacePos);
    string secondPart = imieNazwisko.substr(spacePos + 1);

    // Zamiana miejscami pierwszego członu z drugim
    string result = secondPart + " " + firstPart;

    // Dodanie dużych liter na początku i na końcu napisu
    result = "A" + result + "A";

    // Wstawienie znaku '%' przed każdą literą 'a'
    for (size_t i = 0; i < result.size(); ++i) {
        if (result[i] == 'a' || result[i] == 'A') {
            result.insert(i, "%");
            ++i; // Przesunięcie indeksu, aby nie sprawdzać ponownie tej samej litery
        }
    }

    cout << "Przetworzony napis: " << result << endl;

    return 0;
}