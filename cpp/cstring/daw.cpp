#include <iostream>
#include <limits>
using namespace std;
int main()
{
  // Deklaracja zmiennej (C-napisu) wersja1 połączona z jej inicjalizacją:
  char wersja1[15]{"C++98"};
  // Prezentacja wartości zmiennej wersja1 na ekranie:
  cout << wersja1 << endl;
  cout << "Podaj inną wersję, np. C++17: ";
  // Wprowadzenie wartości zmiennej wersja1 z klawiatury:
  cin >> wersja1;
  // Prezentacja wartości zmiennej wersja1 na ekranie:
  cout << wersja1 << endl;
  cout << endl;
  // Deklaracja C-napisu wersja2:
  char wersja2[15];
  cout << "Podaj wersję C#, np. 8.0: ";
  // Wprowadzenie wartości zmiennej wersja2 z klawiatury:
  cin.ignore(50, '\n'); // cin.ignore(liczba znaków do zignorowania,na jakim znaku kończyć ignorowanie)
  cin >> wersja2;
  // Wyświetlenie wartości zmiennej wersja2 na ekranie:
  cout << wersja2 << endl;
  // Deklaracja C-napisu wersja3:
  char wersja3[15];
  cout << "Podaj alternatywną nazwę Visual C++ 2015 (Visual C++ 14.0): ";
  // Opróżnienie strumienia wejściowego:
  // cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // pomija maxymalną dopuszczalną długość cstringa.
  cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // pomija maxymalną dopuszczalną długość cstringa.
  // Wprowadzenie wartości zmiennej wersja3 z klawiatury:
  cin.getline(wersja3, 15); // pozwala pobrać napis ze spacjom.
  // Wyświetlenie wartości zmiennej wersja3 na ekranie:
  cout << wersja3 << endl;
  return 0;
}