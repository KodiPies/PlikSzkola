#include <iostream>
#include <limits>
#include <string>
using namespace std;
int main() {
// Deklaracja zmiennej łańcuchowej lancuch:
string lancuch;
cout << "Podaj nazwę jednoczłonową języka programowania: ";
// Wprowadzenie wartości zmiennej lancuch z klawiatury:
cin >> lancuch;
// Wyświetlenie na ekranie bieżącej wartości zmiennej lancuch:
cout << lancuch << endl;
cout << "Podaj inną, dwuczłonową nazwę języka progr. (np. Visual C++): ";
cin >> lancuch;
cout << lancuch << endl;
/* UWAGA
Wprowadzanie danych wejściowych z klawiatury przy użyciu strumienia cin wraz z operatorem
wyodrębniania >> wiąże się z tym, że biała spacja (np. spacja, tabulator) kończy wprowadzanie danych.
/
// Opróżnienie strumienia wejściowego:
cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
/ UWAGA
Działanie metody ignore() polega na odrzuceniu (ang. discard) wszystkich znaków w strumieniu wejściowym
aż do napotkania znaku odgrywającego rolę ogranicznika, a następnie wyodrębnieniu pozostałej części łańcucha.
Pierwszy argument metody ignore() stanowi liczba znaków do wyodrębnienia, a drugi — znak ograniczający.
Tutaj pierwszy argument oznacza maksymalną (teoretyczną) liczbę znaków, którą może obsługiwać
bufor strumienia. Praktycznie reprezentuje on nieograniczoną liczbę znaków. Drugi argument odpowiada
naciśnięciu klawisza Enter.
/
cout << "Podaj ponownie tę samą dwuczłonową nazwę języka programowania: ";
// Odczyt łańcucha znaków ze strumienia wejściowego:
getline(cin, lancuch);
/ UWAGA
Wywołanie funkcji getline() powoduje wczytanie linii tekstu ze strumienia wejściowego (tutaj: cin) i dołączenie go
do zmiennej łańcuchowej typu string (tutaj: zmiennej lancuch).
Funkcja getline() czyta cały wiersz, w tym wszystkie początkowe i końcowe białe znaki, aż do naciśnięcia
klawisza Enter (Return).
*/
cout << lancuch << endl;
return 0;
}