#include <iostream>
using namespace std;
#include <cstring>
#include <string>




int main() {
    
    string jeden, dwa;  

    cout<<"Podaj pierwszy string" << endl;
    cin >> jeden;
    cout << "Podaj drugi string" << endl;
    cin >> dwa;
    float j = stof(jeden);
    float d = stof(dwa);

     
    cout << jeden << " + " << dwa << "=" << jeden + dwa << endl;
    cout << j << " + " << d << "=" << j + d;



   
}