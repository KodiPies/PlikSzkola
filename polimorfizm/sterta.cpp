#include <iostream>
using namespace std;

class Block
{
public:
    virtual float volume()
    {
        return 0;
    };
};

class Cuboid : public Block
{
public:
    Cuboid() {};
    Cuboid(int szer_p, int h_p, int r_p)
    {
        a = h_p;
        b = r_p;
        h = szer_p;
    };
    int a, b, h;
    float volume()
    {
        return a * b * h;
    }
};

class Cylinder : public Block
{
public:
    Cylinder() {};
    Cylinder(int h_p, int r_p)
    {
        h = h_p;
        r = r_p;
    };
    int h, r;
    float volume()
    {
        return r * r * 3.14 * h;
    }
};

class Cone : public Block
{
public:
    Cone() {};
    Cone(int h_p, int r_p)
    {
        h = h_p;
        r = r_p;
    };
    int h, r;
    float volume()
    {
        return r * r * 3.14 * (0.33 * h);
    }
};

int main()
{
    Block *block = new Cone(2, 2);
    cout << "Objetosc stozka " << block->volume() << endl;
    block = new Cylinder(2, 2);
    cout << "Objetosc walca " << block->volume() << endl;
    block = new Cuboid(2, 2, 2);
    cout << "Objetosc prostopadloscianu " << block->volume() << endl;
    return 0;
}