#include <iostream>
#include <string>
using namespace std;

string transform(const string &input) {
    size_t spacePos = input.find(' ');
    if (spacePos == string::npos) {
        return "Błąd: napis nie jest dwuczłonowy";
    }

    string firstPart = input.substr(0, spacePos);
    string secondPart = input.substr(spacePos + 1);

    swap(firstPart, secondPart);

    auto procentPrzedA = [](string &str) {
        for (size_t i = 0; i < str.size(); ++i) {
            if (str[i] == 'a' || str[i] == 'A') {
                str.insert(i, "%");
                ++i; 
            }
        }
    };
    procentPrzedA(firstPart);
    procentPrzedA(secondPart);

    if (!firstPart.empty()) {
        firstPart.front() = toupper(firstPart.front());
        firstPart.back() = toupper(firstPart.back());
    }
    if (!secondPart.empty()) {
        secondPart.front() = toupper(secondPart.front());
        secondPart.back() = toupper(secondPart.back());
    }

    return firstPart + " " + secondPart;
}

int main() {
    string input;
    cout << "Podaj dwuczłonowy napis: ";
    getline(cin, input);

    string result = transform(input);
    cout << "Wynik: " << result << endl;

    return 0;
}