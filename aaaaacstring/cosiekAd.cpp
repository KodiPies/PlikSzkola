#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    string napis1, napis2, srodek1, srodek2, reszta1, reszta2, temp;
    int index, indexPierwszejZmiany, indexDrugiejZmiany;
    cout << "Podaj trzyczlonowy napis ";
    getline(cin, napis1);
    cout << "Podaj trzyczlonowy napis ";
    getline(cin, napis2);
    index = napis1.find(" ");
    indexPierwszejZmiany = index;
    srodek1 = napis1.substr(index, napis1.length() - index);
    index = srodek1.find(" ");
    temp = srodek1.substr(index + 1, srodek1.length() - index);
    index = temp.find(" ");
    reszta1 = srodek1.substr(index + 1, srodek1.length() - index);
    srodek1 = srodek1.substr(0, index + 1);
    index = napis2.find(" ");
    indexDrugiejZmiany = index;
    srodek2 = napis2.substr(index, napis2.length() - index);
    index = srodek2.find(" ");
    temp = srodek2.substr(index + 1, srodek2.length() - index);
    index = temp.find(" ");
    reszta2 = srodek2.substr(index + 1, srodek2.length() - index);
    srodek2 = srodek2.substr(0, index + 1);
    index = napis1.find(" ");
    napis1.replace(indexPierwszejZmiany, napis1.length() - index, srodek2 + reszta1);
    cout << napis1 << endl;
    index = napis2.find(" ");
    napis2.replace(indexDrugiejZmiany, napis2.length() - index, srodek1 + reszta2);
    cout << napis2 << endl;
    return 0;
}