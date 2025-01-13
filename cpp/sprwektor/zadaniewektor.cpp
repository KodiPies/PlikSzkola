#include <iostream>
#include <vector>

using namespace std;

int wylosujLi()
{
    
    
    int liczba = (rand() * 64 / RAND_MAX) + 1;

    return liczba;
}

void wypelnij(vector<int> &zad, int rozmiarT)
{
    for (int i = 0; i < rozmiarT; i++)
    {
        zad.push_back(wylosujLi());
    }
}

void wypiszWektor(vector<int> &zad, int rozmiarT)
{
    cout << "Wylosowane liczby :" << endl;
    for (int i = 0; i < rozmiarT; i++)
    {
        cout << zad[i] << " ";
    }
    cout << endl;
}

int najwiekszaLiczba(vector<int> &zad)
{
    int najwieksza = zad[0];

    for (int i = 1; i < zad.size(); i++)
    {
        if (najwieksza < zad[i])
        {
            najwieksza = zad[i];
        }
    }

    return najwieksza;
    
}

int najmiejszaLiczba(vector<int> &zad)
{
    int najmniejsza = zad[0];

    for (int i = 1; i < zad.size(); i++)
    {
        if (najmniejsza > zad[i])
        {
            najmniejsza = zad[i];
        }
    }

    return najmniejsza;
}

vector<int> liczbyEks(vector<int> &zad)
{
    vector<int> wartosciEks = {najmiejszaLiczba(zad), najwiekszaLiczba(zad)};
    return wartosciEks;
}

int main()
{
    int rozmiarT;
    cout << "Ile liczb chcesz wygenerować a ja podam ci najmiejszą i największą :" << endl;
    cin >> rozmiarT;
    

    vector<int> zad;

    wypelnij(zad, rozmiarT);

    wypiszWektor(zad, rozmiarT);

    vector<int> wartosciEks = liczbyEks(zad);

    cout << "Najmniejsza Liczba:" << endl;

    cout << wartosciEks[0] << endl;

    cout << "Największa Liczba:" << endl;

    cout << wartosciEks[1] << endl;
    zad.clear();

    return 0;
}