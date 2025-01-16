#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
T funkcja(T liczba1, T liczba2)
{
  cout << "int " << liczba1 << " ^ " << liczba2 << " Wynik: " << pow(liczba1, liczba2) << endl;
  
}

template <>
float funkcja(
    float liczba1, int liczba2)
{
  cout << "float " << liczba1 << " + " << liczba2 << " Wynik: " << liczba1 + liczba2 << endl;
  
}
template <>
double funkcja(
    double liczba1, int liczba2)
{
  cout << "double " << liczba1 << " * " << liczba2 << " Wynik: " << liczba1 * liczba2 << endl;
  
}
int main()
{
   funkcja(3, 2) ;
    funkcja<double, int>(3, 2) ;
    funkcja<float,int>(3, 2) ;
  return 0;
}