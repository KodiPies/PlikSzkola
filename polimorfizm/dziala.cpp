#include <iostream>
#include <cmath>
using namespace std;
// Klasa bazowa "Bryła"
class Bryla
{
public:
    virtual double objetosc() = 0;
};

// Klasa "Prostopadłościan"
class Prostopadloscian : public Bryla
{
private:
    double dlugosc, szerokosc, wysokosc;

public:
    Prostopadloscian(double dl, double sz, double wys) : dlugosc(dl), szerokosc(sz), wysokosc(wys) {}
    double objetosc()
    {
        return dlugosc * szerokosc * wysokosc;
    }
};

// Klasa "Walec"
class Walec : public Bryla
{
private:
    double promien, wysokosc;

public:
double pi = 3.14;
    Walec(double pr, double wys) : promien(pr), wysokosc(wys) {}
    double objetosc()
    {
        return pi * promien * promien * wysokosc;
    }
};

// Klasa "Stożek"
class Stozek : public Bryla
{
private:
    double promien, wysokosc;

public:
double pi = 3.14;
    Stozek(double pr, double wys) : promien(pr), wysokosc(wys) {}
    double objetosc()
    {
        return (1.0 / 3.0) * pi * promien * promien * wysokosc;
    }
};

int main()
{

    Bryla *bryly[] = {
        new Prostopadloscian(3.0, 4.0, 5.0),
        new Walec(2.0, 5.0),
        new Stozek(2.0, 5.0)};

     for (Bryla *bryla : bryly)
     {
        cout << "Objętość1: " << bryla->objetosc() << endl;
    }

    

    return 0;
}