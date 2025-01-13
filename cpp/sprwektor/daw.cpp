#include <iostream>
#include <vector>

// napisz funkcje:
// Wypełnia wektor danymi losowymi w rozmiarze podanym przez użytkownika.
// Znajduje wartości extremalne i zwraca je w wektorze
// Przetestuj je w funkcji main

using namespace std;

int wylosujLiczbe()
{
  int liczba = ((double)rand() * 10 / RAND_MAX) + 1;

  return liczba;
}

void wypelnij(vector<int> &wektor, int rozmiar)
{
  for (int i = 0; i < rozmiar; i++)
  {
    wektor.push_back(wylosujLiczbe());
  }
}

void wypisz(vector<int> &wektor)
{
  cout << "Wygenerowane liczby to:" << endl;
  for (int i = 0; i < wektor.size(); i++)
  {
    cout << wektor[i] << ", ";
  }
  cout << endl;
}

int max(vector<int> &wektor)
{
  int maxNum = wektor[0];

  for (int i = 1; i < wektor.size(); i++)
  {
    if (maxNum < wektor[i])
    {
      maxNum = wektor[i];
    }
  }

  return maxNum;
}

int min(vector<int> &wektor)
{
  int minNum = wektor[0];

  for (int i = 1; i < wektor.size(); i++)
  {
    if (minNum > wektor[i])
    {
      minNum = wektor[i];
    }
  }

  return minNum;
}

vector<int> liczbyEkstremalne(vector<int> &wektor)
{
  vector<int> wartosciEkstremalne = {min(wektor), max(wektor)};
  return wartosciEkstremalne;
}

int main()
{
  int rozmiar;
  cout << "Ile liczb chcesz wygenerować (zakres 1-10):" << endl;
  cin >> rozmiar;

  vector<int> wektor;
  wypelnij(wektor, rozmiar);
  wypisz(wektor);
  vector<int> wartosciEkstremalne = liczbyEkstremalne(wektor);
  cout << "Wartość najmniejsza:" << endl;
  cout << wartosciEkstremalne[0] << endl;
  cout << "Wartość najwieksza:" << endl;
  cout << wartosciEkstremalne[1] << endl;

  return 0;
}