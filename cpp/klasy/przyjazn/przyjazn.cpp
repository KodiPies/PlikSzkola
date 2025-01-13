#include <iostream>
#define _USE_MATH_DEFINES 
#include <cmath>
using namespace std;

class Cone {

double radius;
double height;
public:
void setCone(double); 
double getCone();

friend class Cylinder;
};
void Cone::setCone(double radiuss) {
radius = radiuss;
}
double Cone::getCone() {
return radius;
}

class Cylinder {

public:
double objetosc(Cone);

double pi = 3.14;
};
double Cylinder::objetosc(Cone cone) {
   
return pi * cone.radius * cone.radius;
}













int main(){
return 0;
}