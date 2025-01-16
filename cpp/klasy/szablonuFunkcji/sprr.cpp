//Napisz program, w którym zdefiniujesz szablon przy użyciu dwóch zmiennych uogólnionych który pobiera jeden argument.
//Napisz szablony specjalizacyjne dla zmiennych float,int (ma powiekszyć argument o jeden) oraz double,float  (ma powiekszyć argument o dwa). 
//Uruchom napisane szablony specjalizujące w sposób jawny.

#include <iostream>
#include <cmath>
using namespace std;
template<typename T1, typename T2>
T1 funkcja(T1 liczba1, T2 liczba2)
{
  //cout <<"Szablon"<< endl;
 //return "Szablon";
  
  
}

template <>
float funkcja(
    float liczba1, int liczba2)
{
  cout <<"Float"<<  " Wynik: ";
  return liczba1 + 1;
  
}
template <>
double funkcja(
    double liczba1, int liczba2)
{
  cout <<endl<< "Double " <<  " Wynik: ";
  return liczba2 + 2;
  
}
int main()
{
    //funkcja(1,2) ;
     cout <<endl<< funkcja<float, int>(1, 2) ;
    cout << funkcja<double, int>(3, 2) ;
  return 0;
}