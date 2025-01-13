#include <iostream>
using namespace std;

// **
// nazwa funkcji: <czyPoprawne>
// opis funkcji: <sprawdza poprawność peselu>
// parametry: <string pesel - string z peselem>
// zwracany typ i opis: <typ bool zwraca wartość true kiedy pesel jest poprawny w przeciwnym razie false>
// **

bool czyPoprawne(string pesel)
{
  int s;
  s += ((int)pesel[0] - 48) * 1;
  s += ((int)pesel[1] - 48) * 3;
  s += ((int)pesel[2] - 48) * 7;
  s += ((int)pesel[3] - 48) * 9;
  s += ((int)pesel[4] - 48) * 1;
  s += ((int)pesel[5] - 48) * 3;
  s += ((int)pesel[6] - 48) * 7;
  s += ((int)pesel[7] - 48) * 9;
  s += ((int)pesel[8] - 48) * 1;
  s += ((int)pesel[9] - 48) * 3;
  int m = s % 10;
  int r = m == 0 ? 0 : 10 - m;

  if ((int)pesel[10] - 48 == r)
  {
    return true;
  }
  return false;
}

// **
// nazwa funkcji: <sprawdzPlec>
// opis funkcji: <sprawdza płeć>
// parametry: <string pesel - string z peselem >
// zwracany typ i opis: <typ char zwraca wartość K, jeśli to pesel kobiety albo M jeśli to pesel mężczyzny>
// **

char sprawdzPlec(string pesel)
{
  if ((int)pesel[9] - 48 % 2 == 0)
  {
    return 'K';
  }
  return 'M';
}

// **
// nazwa funkcji: <wypiszRokUrodzenia>
// opis funkcji: <wypisuje date urodzenia>
// parametry: <string pesel - string z peselem >
// zwracany typ i opis: <void nie zwraca nic>
// **

void wypiszRokUrodzenia(string pesel)
{
  int rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);

  // rok  1977 poczatek ustalania numeru pesel

  int miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

  if (miesiac > 20)
  {
    rokUrodzenia += 2000;
  }
  else
  {
    rokUrodzenia += 1900;
  }

  if (rokUrodzenia > 1999)
  {
    miesiac -= 20;
  }

  int dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
  cout << "Urodziłeś się: ";

  if (dzien < 10)
  {
    cout << "0" << dzien;
  }
  else
  {
    cout << dzien;
  }
  cout << ".";

  if (miesiac < 10)
  {
    cout << "0" << miesiac;
  }
  else
  {
    cout << miesiac;
  }

  cout << ".";
  cout << rokUrodzenia << endl;
}

int main()
{
  cout << "Program, który po podaniu peselu sprawdza czy jest poprawny i wydobywa z niego plec" << endl;
  string pesel;

  cout << "Podaj pesel" << endl;
  cin >> pesel;

  if (!czyPoprawne(pesel))
  {
    cout << "Pesel niepoprawny" << endl;
    return 0;
  }
  cout << "Pesel poprawny" << endl;

  if (sprawdzPlec(pesel) == 'M')
  {
    cout << "Jestes mezczyzna" << endl;
  }
  else
  {
    cout << "Jestes kobieta" << endl;
  }

  wypiszRokUrodzenia(pesel);

  return 0;
}