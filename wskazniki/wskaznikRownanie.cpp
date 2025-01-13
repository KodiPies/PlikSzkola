#include <iostream>
#include <cmath>

using namespace std;


class Punkt
{
private:
    float xa;
    float xb;
    float ya;
    float yb;

public:
    float int1;
    float int2;
    float int3;
    float int4;
    float int5;
    float wynik;
    float a, b, c;
    int xP;
    int yP;

    void dane()
    {
        cout << "Podaj wartość do xa" << endl;
        cin >> int1;
         cout << "Podaj wartość do xb" << endl;
        cin >> int2;
        cout << "Podaj wartość do ya" << endl;
        cin >> int3;
        cout << "Podaj wartość do yb" << endl;
        cin >> int4;
        cout << "Podaj wartość do C" << endl;
        cin >> int5;
    }
    float setX()
    {
        xa = int1;
        xb = int2;
    }

    float getX()
    {
        return xa;
    }
    float getXb()
    {
        return xb;
    }

    void setY()
    {
        ya = int3;
        yb = int4;
    }

    int getY()
    {
        return ya;
    }
    int getYb()
    {
        return yb;
    }
    void odbijX()
    {
        xa = xa * -1;
    }
    void odbijY()
    {
        ya = ya * -1;
    }
    void przesun(int xP, int yP)
    {
        xa += xP;
        ya += yP;
    }
    float odlegloscOdProstej()
    {
        a = xa;
        b = yb;
        c = int3;
        return abs(a * xa + b * yb + c) / sqrt(a * b + b * b);
        
    }
    void symetriaPunktu(float d, float e)
    {
    }

    void wyswietlDane()
    {

        // cout << "Przesuniecie: " << przesun() << endl;
        cout << "Odległość od prostej: " << odlegloscOdProstej() << endl;
       
    }   
    
};
int main()
{

    Punkt pkt1;
    pkt1.dane();
    pkt1.wyswietlDane();
    return 0;
}
