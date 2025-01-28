
// A: Stworz szablon klasy komórka który zawiera pola cena maksymalna i minimalne i metodę średnia cena.
// Zastosuj  2 parametry uogólnione. Wykonaj specjalizację dla float double, konkretyzację dla int float.
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.

#include <iostream>
#include <cmath>
using namespace std;

template <class T1, class T2>
class Komorka
{
public:
    Komorka()
    {
    }

    T1 minimalna;
    T2 maksymalna;

    double srednia()
    {

        return (minimalna + maksymalna) / 2;
    }
};

template <>
class
    Komorka<float, double>
{
public:
    Komorka()
    {
    }

    float minimalna;
    double maksymalna;

    double srednia()
    {

        return (round(minimalna) +
                round(maksymalna)) /
               2;
    }
};
int main()
{

    Komorka<float, double> oceny1 = Komorka<float, double>();
    

        oceny1.minimalna = 3;
    oceny1.maksymalna = 4;

    cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;

    Komorka<float, double> komorka2;

    komorka2.minimalna = 3.0;
    komorka2.maksymalna = 2.0;

    cout << "Średnia ocen semestralnych: " << komorka2.srednia() << endl;
    return 0;
}

