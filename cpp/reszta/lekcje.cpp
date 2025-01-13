#include <iostream>
using namespace std;

int liczba;
int main()
{

    cout << "Podaj liczbe a ja powiem ci jaka jest lekcja" << endl;
    cin >> liczba;
    if (liczba == 1)
    {
        cout << "Masz teraz Biologie";
    }
    if (liczba == 2)
    {
        cout << "Masz teraz Chemie";
    }
    if (liczba == 3)
    {
        cout << "Masz teraz Fizyke";
    }
    if (liczba == 4)
    {
        cout << "Masz teraz Matematyka";
    }
    if (liczba == 5)
    {
        cout << "Masz teraz Zawodowe";
    }
    if (liczba == 6)
    {
        cout << "Masz teraz Zawodowe";
    }
    return 0;
}

#include <iostream>
using namespace std;

int liczba;
int main()
{

    cout << "Podaj liczbe a ja powiem ci ile lekcji zostało" << endl;
    cin >> liczba;
    if (liczba == 1)
    {
        cout << " Masz teraz biologie Zostało ci 6 lekcji, biologia,chemia,fizyka,matematyka,zawodowe,zawodowe";
    }
    else if (liczba == 2)
    {
        cout << "Masz teraz chemie Zostało ci 5 lekcji, chemia,fizyka,matematyka,zawodowe,zawodowe";
    }
    else if (liczba == 3)
    {
        cout << "Masz teraz fizyke Zostały ci 4 lekcje, fizyka,matematyka,zawodowe,zawodowe";
    }
    else if (liczba == 4)
    {
        cout << "Masz teraz matematyke Zostały ci 3 lekcje, matematyka,zawodowe,zawodowe";
    }
    else if (liczba == 5)
    {
        cout << "Masz teraz zawodowe Zostały ci 2 lekcje, ,zawodowe,zawodowe";
    }
    else if (liczba == 6)
    {
        cout << "Masz teraz zawodowe Została ci 1 lekcja, zawodowe";
    }
    return 0;
}
