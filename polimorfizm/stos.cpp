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
   int a, b, h;
   float volume()
   {
      return a * b * h;
   }
};

class Cylinder : public Block
{
public:
   int h, r;
   float volume()
   {
      return r * r * 3.14 * h;
   }
};

class Cone : public Block
{
public:
   int h, r;
   float volume()
   {
      return r * r * 3.14 * (0.33 * h);
   }
};

int main()
{
   Cone cone;
   cone.h = 2;
   cone.r = 2;
   Cylinder cylinder;
   cylinder.h = 2;
   cylinder.r = 2;
   Cuboid cuboid;
   cuboid.a = 2;
   cuboid.b = 2;
   cuboid.h = 2;
   Block *block;
   block = &cone;
   cout << "Objetosc stozka " << block->volume() << endl;
   block = &cylinder;
   cout << "Objetosc walca " << block->volume() << endl;
   block = &cuboid;
   cout << "Objetosc prostopadloscianu " << block->volume() << endl;
   return 0;
}