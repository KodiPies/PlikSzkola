#include <iostream>
using namespace std;
// int liczba;
// int wiek;
int l1;
int main()
{
    //     cout << "Podaj liczbe" << endl;
    //     cin >> liczba;
    //   if(liczba > 0) {
    //     cout <<"Wartośc bezwzględna  wynosi: " << liczba << endl;
    //   }
    //   if(liczba < 0) {
    //     liczba = liczba * -1;
    //     cout <<"Wartośc bezwzględna  wynosi: " << liczba << endl;
    //   }
    //   if(liczba == 0) {

    //     cout <<"Wartośc bezwzględna  wynosi: " << liczba << endl;
    //   }
    // cout <<"Podaj swój wiek a ja cie opisze" << endl;
    // cin >> wiek;
    // if(wiek < 20) {
    //     cout << "Jestes zoomer" << endl;

    // }
    // if((wiek < 60) && (wiek >20)) {
    //     cout << "Jestes x-gen" << endl;

    // }
    // if(wiek >= 60) {
    //     cout << "Jestes boomer" << endl;

    // }

    cout << "Podaj liczbe a ja sprawdze czy dzieli się przez 2 i przez 3" << endl;
    cin >> l1;
    if (l1 % 3 == 0)
    {
        cout << "Liczba dzieli sie przez 3" << endl;
    }
    else if (l1 % 2 == 0)
    {
        cout << "Liczba dzieli sie przez 2" << endl;
    }
    else
    {
        cout << "Liczba nie jest podzielna przez 2 i 3" << endl;
    }

    //     cout<< "Podaj liczbe a ja sprawdze czy dzieli się przez 2 i przez 3" << endl;
    //     cin >> l1;
    //     if (l1%3==0) {
    //         cout<< "Liczba dzieli sie przez 3" << endl;
    //     }
    //       if (l1%2==0) {
    //         cout<< "Liczba dzieli sie przez 2" << endl;
    //     }
    //    if(l1 % 3 != 0 && l1 % 2 != 0) {
    //         cout<< "Liczba nie jest podzielna przez 2 i 3" << endl;
    //     }
}