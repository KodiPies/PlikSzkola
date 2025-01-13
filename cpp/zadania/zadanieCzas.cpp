#include <iostream>
using namespace std;
struct czas
{
    int sekundy;
    int minuty;
    int godziny;
};

czas obliczanieCzasu(int czasWSekundach, czas czas)
{
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;
    czasGodziny = czasWSekundach / 3600;
    czasWSekundach = czasWSekundach % 3600;
    czasMinuty = czasWSekundach / 60;
    czasWSekundach = czasWSekundach % 60;
    czasSekundy = czasWSekundach;
    cout << "Godziny: " << czasGodziny << endl;
    cout << "Minuty: " << czasMinuty << endl;
    cout << "Sekundy: " << czasSekundy << endl;
}
int main()
{
    int podanyCzas = 0;
    cout << "Podaj czas w sekundach a ja powiem ile jest godzin, minut i sekund" << endl;
    cin >> podanyCzas;
    obliczanieCzasu(podanyCzas); 
    return 0;
}