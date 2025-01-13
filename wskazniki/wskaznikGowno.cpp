#include <iostream>
#include <cmath>
using namespace std;

class Punkt
{
private:
    float x, y;

public:
    Punkt(float px = 0, float py = 0)
    {
        x = px;
        y = py;
    }

    void odbijX()
    {
        y = -y;
    }

    void odbijY()
    {
        x = -x;
    }

    void przesun(int px, int py)
    {
        x += px;
        y += py;
    }

    float odlegloscOdProstej(float a, float b, float c)
    {
        return abs(a * x + b * y + c) / sqrt(a * a + b * b);
    }

    void symetriaPunkt(float xP, float yP)
    {
        x = 2 * xP - x;
        y = 2 * yP - y;
    }

    void wypisz()
    {
        cout << "Punkt(" << x << ", " << y << ")" << endl;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};

float odlegloscDwochPunktow(Punkt &p1, Punkt &p2)
{
    float xP = p1.getX() - p2.getX();
    float yP = p1.getY() - p2.getY();
    return sqrt(xP * xP + yP * yP);
}

int main()
{
    float odp1, odp2, odp3, odp4, odp5, odp6;
    cout << "Podaj pierwszą wartość " << endl;
    cin >> odp1;
    cout << "Podaj drugą wartość " << endl;
    cin >> odp2;
    Punkt zad1(odp1, odp2);
    zad1.wypisz();
    zad1.odbijX();
    zad1.wypisz();
    zad1.odbijY();
    zad1.wypisz();
    zad1.przesun(3, 4);
    zad1.wypisz();
    zad1.symetriaPunkt(0, 0);

    zad1.wypisz();
    cout << "Podaj pierwszą wartość do  pkt " << endl;
    cin >> odp3;
    cout << "Podaj drugą wartość do  pkt " << endl;
    cin >> odp4;

    Punkt pkt2(odp3, odp4);
    float odleglosc = pkt2.odlegloscOdProstej(4, 1, -6);
    cout << " Odległość od prostej: " << odleglosc << endl;
    ;

    cout << "Podaj pierwszą wartość do pkt  " << endl;
    cin >> odp5;
    cout << "Podaj drugą wartość do pkt " << endl;
    cin >> odp6;
    Punkt pkt3(odp5, odp4);
    float dist = odlegloscDwochPunktow(pkt2, pkt3);
    cout << " Odległość między punktami: " << dist << endl;

    return 0;
}