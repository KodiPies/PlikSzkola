#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main()
{
    string s1, s2, s3;
    int ind, indd;
    cout << "Podaj pierwszy trzyczłonowy napis " << endl;
    getline(cin, s1);
    cout << s1 << endl;
    cout << "Podaj drugi trzyczłonowy napis " << endl;
    getline(cin, s2);
    cout << s2 << endl;
    // s1.replace(5, 10, "Java");
    // cout<< s1 << endl;
    // string s4 = s1.substr;
    string n = s2;
    string n2 = s1;

    int poczatek = 2;
    int dlugosc = 3;
    // cout << s1.length << end;
    s2 = s1.substr(poczatek, dlugosc);
    s1 = n.substr(poczatek, dlugosc);
    

    cout << n.replace(5, s1, " ");
    cout << n2.replace(5, s2, " ");
}