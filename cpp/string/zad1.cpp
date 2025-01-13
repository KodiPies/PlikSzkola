#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1 = "Programowanie";
    string s2 = "Zorientowanie";
    string s3 = "Obiektowo";

    cout << s1 + " " + s2 + " " + s3 << endl; // zad 2

    string s4 = "Java";
    string s5 = "JavaSctript";

    if (s5.compare(s4) == 0)
    { // zad 3
        cout << "Napisy są równe";
    }
    else
    {
        cout << "Napisy są różne" << endl;
    }

    string s6 = "Java Runtime Enviroment ";
    int s7 = s6.find("Runtime");
    if (s7 >= 0)
    {
        cout << "Słowo znajduje sie w ciągu "<< endl;
    }
    else
    {
        cout << "Słowo nie znajduje sie";
    }


    
    string s8 = "C++, JavaScript, C#";
    s8.replace(5, 10, "Java");
    cout << s8;
    return 0;
}