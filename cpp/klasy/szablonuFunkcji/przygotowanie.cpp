// #include <iostream>
// #include <cmath>
// using namespace std;
// // Definicja szablonu klasy (klasy uogólnionej) Oceny:
// template <class T> // szablon ma jeden parametr szablonowy T
// class Oceny {
// public:
// // Definicja konstruktora domyślnego:
// Oceny() {
// cout << "Wywołanie konstruktora klasy ogólnej ..." << endl;
// }
// // Definicje szablonów zmiennych członkowskich:
// T wyklad;
// T cwiczenia;
// T laboratorium;
// T seminarium;
// // Definicja szablonu funkcji członkowskiej:
// T srednia () {
// cout<<endl<<"Wywołanie konkretyzacji";
// return (wyklad + cwiczenia + laboratorium + seminarium) / 4;

// /* UWAGA
// * Jeżeli zmienne członkowskie: wyklad, cwiczenia, laboratorium i seminarium należą do typu całkowitego,
// * mamy do czynienia z dzieleniem całkowitym.
// */
// }
// };
// // Definicja specjalizacji szablonu klasy Oceny dla typu double:
// template <> class
// Oceny <double> {
// public:
// // Definicja konstruktora domyślnego:
// Oceny() {
// cout << "Wywołanie konstruktora klasy specjalizowanej ..." << endl;
// }
// // Deklaracje zmiennych członkowskich:
// double wyklad;
// double cwiczenia;
// double laboratorium;
// double seminarium;
// // Definicja funkcji członkowskiej:
// double srednia () {
//     cout<<endl<<"Wywołanie  klasy specjalizowanej";
// return (round(wyklad) +
// round(cwiczenia) +
// round(laboratorium) +
// round(seminarium)) / 4;

// }
// /* UWAGA
// * Kod (implementacja) metody srednia() w klasie specjalizowanej różni się od kodu szablonu metody o tej samej
// * nazwie zdefiniowanej w klasie uogólnionej.
// */
// };
// int main() {
// // Utworzenie obiektu oceny1:
// Oceny<int> oceny1 = Oceny<int>(); // jawne wywołanie konstruktora domyślnego
// /* UWAGA
// * Obiekt oceny1 został utworzony na podstawie klasy ogólnej Oceny po jej konkretyzacji dla typu danych int.
// * Wcześniej kompilator sprawdził, że nie jest dostępna specjalizacja szablonu Oceny dla typu int.
// */
// oceny1.wyklad = 3;
// oceny1.cwiczenia = 4;
// oceny1.laboratorium = 3;
// oceny1.seminarium = 4;
// cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;
// // Utworzenie obiektu oceny2:
// Oceny<double> oceny2; // niejawne wywołanie konstruktora domyślnego
// /* UWAGA
// * Obiekt oceny2 zostaje utworzony na podstawie specjalizacji szablonu klasy Oceny dla typu danych double.
// */
// oceny2.wyklad = 3.0;
// oceny2.cwiczenia = 4.0;
// oceny2.laboratorium = 3.0;
// oceny2.seminarium = 4.0;
// cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;
// return 0;
// }




#include <iostream>
#include <cmath>
using namespace std;
// Definicja szablonu klasy (klasy uogólnionej) Oceny:
template <class T> // szablon ma jeden parametr szablonowy T
class Oceny {
public:
// Definicja konstruktora domyślnego:
Oceny() {
cout << "Wywołanie konstruktora klasy ogólnej ..." << endl;
}
// Definicje szablonów zmiennych członkowskich:
T wyklad;
T cwiczenia;
T laboratorium;
T seminarium;
// Definicja szablonu funkcji członkowskiej:
T srednia () {
cout<<endl<<"Wywołanie konkretyzacji";
return (wyklad + cwiczenia + laboratorium + seminarium) / 4;

/* UWAGA
* Jeżeli zmienne członkowskie: wyklad, cwiczenia, laboratorium i seminarium należą do typu całkowitego,
* mamy do czynienia z dzieleniem całkowitym.
*/
}
};
// Definicja specjalizacji szablonu klasy Oceny dla typu double:
template <> class
Oceny <double> {
public:
// Definicja konstruktora domyślnego:
Oceny() {
cout << "Wywołanie konstruktora klasy specjalizowanej ..." << endl;
}
// Deklaracje zmiennych członkowskich:
double wyklad;
double cwiczenia;
double laboratorium;
double seminarium;
// Definicja funkcji członkowskiej:
double srednia () {
    cout<<endl<<"Wywołanie  klasy specjalizowanej";
return (round(wyklad) +
round(cwiczenia) +
round(laboratorium) +
round(seminarium)) / 4;

}
/* UWAGA
* Kod (implementacja) metody srednia() w klasie specjalizowanej różni się od kodu szablonu metody o tej samej
* nazwie zdefiniowanej w klasie uogólnionej.
*/
};
int main() {
// Utworzenie obiektu oceny1:
Oceny<int> oceny1 = Oceny<int>(); // jawne wywołanie konstruktora domyślnego
/* UWAGA
* Obiekt oceny1 został utworzony na podstawie klasy ogólnej Oceny po jej konkretyzacji dla typu danych int.
* Wcześniej kompilator sprawdził, że nie jest dostępna specjalizacja szablonu Oceny dla typu int.
*/
oceny1.wyklad = 3;
oceny1.cwiczenia = 4;
oceny1.laboratorium = 3;
oceny1.seminarium = 4;
cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;
// Utworzenie obiektu oceny2:
Oceny<double> oceny2; // niejawne wywołanie konstruktora domyślnego
/* UWAGA
* Obiekt oceny2 zostaje utworzony na podstawie specjalizacji szablonu klasy Oceny dla typu danych double.
*/
oceny2.wyklad = 3.0;
oceny2.cwiczenia = 4.0;
oceny2.laboratorium = 3.0;
oceny2.seminarium = 4.0;
cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;
return 0;
}

/* Grupa A Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych. Napisz szablony specjalizacyjne dla zmiennych float,int oraz double,float. Uruchom napisane szablony specjalizujące w sposób jawny. Sproboj tak je napisać by dało się je uruchomić niejawnie.

Grupa B Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych który pobiera jeden argument. Napisz szablony specjalizacyjne dla zmiennych float,int (ma powiekszyć argument o jeden) oraz double,float  (ma powiekszyć argument o dwa). Uruchom napisane szablony specjalizujące w sposób jawny. */

// #include <iostream>
// #include <cmath>
// using namespace std;
// template <typename T, typename T2>
// T liczenie(T liczba1, T2 liczba2)
// {
//     return 10;
// }
// template <>
// float liczenie(float liczba1, int liczba2)
// {
//     return 1;
// }
// template <>
// double liczenie(double liczba1, float liczba2)
// {
//     return 3;
// }

// int main()
// {
//     float liczba1;
//     int liczba2;
//     cout << "liczba " << liczenie<float, int>(2, 5) << endl;
//     cout << "liczba " << liczenie<double, float>(2, 5) << endl;
//     cout << "liczba " << liczenie<double, double>(9.2, 3) << endl;
//     cout << "Podaj liczbe 1: ";
//     cin >> liczba1;
//     cout << "Podaj liczbe 2: ";
//     cin >> liczba2;
//     cout << "liczba " << liczenie(liczba1, liczba2) << endl;
//     cout << "liczba " << liczenie(2.0, 3.0f) << endl;

//     return 0;
// }