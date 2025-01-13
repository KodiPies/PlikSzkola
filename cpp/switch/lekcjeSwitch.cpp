#include <iostream>
using namespace std;

int liczba;
int main()
{
    cout << "Podaj liczbe a ja powiem ci ile lekcji zostało" << endl;
    cin >> liczba;
    switch (liczba)
    {
    case 1:
        cout << "Masz teraz biologie Zostało ci 6 lekcji, biologia,chemia,fizyka,matematyka,zawodowe,zawodowe";
        break;
    case 2:
        cout << "Masz teraz chemie Zostało ci 5 lekcji, chemia,fizyka,matematyka,zawodowe,zawodowe";
        break;
    case 3:
        cout << "Masz teraz fizyke Zostały ci 4 lekcje, fizyka,matematyka,zawodowe,zawodowe";
        break;
    case 4:
        cout << "Masz teraz matematyke Zostały ci 3 lekcje, matematyka,zawodowe,zawodowe";
        break;
    case 5:
        cout << "Masz teraz zawodowe Zostały ci 2 lekcje, ,zawodowe,zawodowe";
        break;
    case 6:
        cout << "Masz teraz zawodowe Została ci 1 lekcja, zawodowe";
        break;
    default:
        cout << "Zła wartość";
    }
    return 0;
}

int liczba;
int main()
{
    cout << "Podaj liczbe a ja powiem ci jaka jest teraz lekcja" << endl;
    cin >> liczba;
    switch (liczba)
    {
    case 1:
        cout << "Masz teraz biologie ";
        break;
    case 2:
        cout << "Masz teraz chemie ";
        break;
    case 3:
        cout << "Masz teraz fizyke e";
        break;
    case 4:
        cout << "Masz teraz matematyke ";
        break;
    case 5:
        cout << "Masz teraz zawodowe ";
        break;
    case 6:
        cout << "Masz teraz zawodowe ";
        break;
    default:
        cout << "Zła wartość";
    }
    return 0;
}
// int liczba;
// int main()
// {
//     cout <<"Podaj liczbe a ja powiem ci jaka jest teraz lekcja" << endl;
//     cin >> liczba;
//     switch(liczba) {
//     case 1: cout <<"Masz teraz biologie ";

//     case 2: cout <<"Masz teraz chemie ";

//     case 3: cout <<"Masz teraz fizyke ";

//     case 4: cout <<"Masz teraz matematyke ";

//     case 5: cout <<"Masz teraz zawodowe ";

//     case 6: cout <<"Masz teraz zawodowe ";

//     default: cout <<"Zła wartość";
//     }
//     return 0;
// }
