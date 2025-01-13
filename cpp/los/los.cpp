#include <iostream>

using namespace std;


double losujLiczbeRzeczywista()
{
    return -10.0 + double(rand()) / RAND_MAX * 20.0;
}

int main()
{
    srand(time(NULL));

    double losowaLiczba = losujLiczbeRzeczywista();

    cout << "Wylosowana liczba rzeczywista: " << losowaLiczba << endl;

    return 0;
}
