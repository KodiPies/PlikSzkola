#include <iostream>
#include <cstring>
using namespace std;

class Cos
{

public:
 
 string imie;
 string nazwisko;

Cos();

Cos(string imieP, string nazwiskoP){
    imie = imieP;
    nazwisko = nazwiskoP;
    cout << "Skopiowano" << endl;
}
void display();



    
    void wyswietl() {
        
        cout << imie << endl;
        cout << nazwisko << endl;
    }

    

Cos::Cos() :
imie  {"Imię domyślne"},
nazwisko {"Nazwisko domyślne"} {};
    




};






int main()
{
    string cos2, cos3;
    cout << "Podaj imie: " << endl;
    cin >> cos2;
    cout <<"Podaj nazwisko: " << endl;
    cin >> cos3;
    cout << "----------------------------------------" << endl;
    Cos nic1 { cos2, cos3};
     Cos nic2 ( "Adriano", "Pasterkano");
     cout << "-----------------------------------------" << endl;
    nic1.wyswietl();
    cout << "-------------------------------------" << endl;
    nic2.wyswietl();
    
    
    
    
}