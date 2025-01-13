#include <iostream>
#include <string>
using namespace std;

int main()
{
   string napis1, napis2;
    cout << "Podaj pierwszy dwuczłonowy napis: " << endl;
    getline(cin, napis1);
    cout << "Podaj drugi dwuczłonowy napis: " << endl;
    getline(cin, napis2);

    int spacja = napis1.find(' ');
    if (spacja != -1)
    {
        string pierwszy = napis1.substr(spacja + 1);
        string ogondrug = napis2.substr(spacja + 1);
        string drugi = napis1.substr(0, spacja);
        string ogonpierwszy = napis2.substr(0, spacja);
        cout << ogondrug << " " << pierwszy << " " << ogonpierwszy << " " << drugi << endl;
    }
    else
    {
        cout << "Podano nieprawidłowe dane." << endl;
    }
}