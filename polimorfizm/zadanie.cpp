#include <iostream>
using namespace std;

class Imie
{
public:
  string imie;

  void display()
  {
    cout << "Imie:" << imie << endl;
  }
};

class Nazwisko
{
public:
  string nazwisko;

  void display()
  {
    cout << "Nazwisko:" << nazwisko << endl;
  }
};

class Przedmiot
{
public:
  string przedmiot;

  void display()
  {
    cout << "Przedmiot:" << przedmiot << endl;
  }
};

class Klasa
{
public:
  string klasa;

  void display()
  {
    cout << "Klasa:" << klasa << endl;
  }
};

class Pracownik : public Imie, public Nazwisko
{
  void display()
  {
    cout << "Imie:" << imie << endl;
    cout << "Nazwisko:" << nazwisko << endl;
  }
};

class Nauczyciel : public Imie, public Nazwisko, public Przedmiot
{
  void display()
  {
    cout << "Imie:" << imie << endl;
    cout << "Nazwisko:" << nazwisko << endl;
    cout << "Przedmiot:" << przedmiot << endl;
  }
};

class Wychowawca : public Imie, public Nazwisko, public Przedmiot, public Klasa
{
  void display()
  {
    cout << "Imie:" << imie << endl;
    cout << "Nazwisko:" << nazwisko << endl;
    cout << "Przedmiot:" << przedmiot << endl;
    cout << "Klasa:" << klasa << endl;
  }
};

int main()
{
  Imie *w_imie;
  Nazwisko *w_nazwisko;
  Przedmiot *w_przedmiot;
  Klasa *w_klasa;
  Pracownik pracownik;
  w_imie = &pracownik;
  w_nazwisko = &pracownik;
  w_imie->imie = "imie";
  w_nazwisko->nazwisko = "nazwisko";
  cout << "Pracownik:" << endl;
  w_imie->display();
  w_nazwisko->display();

  Nauczyciel nauczyciel;
  w_imie = &nauczyciel;
  w_nazwisko = &nauczyciel;
  w_przedmiot = &nauczyciel;
  w_imie->imie = "imie";
  w_nazwisko->nazwisko = "nazwisko";
  w_przedmiot->przedmiot = "przedmiot";
  cout << "Nauczyciel:" << endl;
  w_imie->display();
  w_nazwisko->display();
  w_przedmiot->display();

  Wychowawca wychowawca;
  w_imie = &wychowawca;
  w_nazwisko = &wychowawca;
  w_przedmiot = &wychowawca;
  w_klasa = &wychowawca;
  w_imie->imie = "imie";
  w_nazwisko->nazwisko = "nazwisko";
  w_przedmiot->przedmiot = "przedmiot";
  w_klasa->klasa = "klasa";
  cout << "Wychowawca:" << endl;
  w_imie->display();
  w_nazwisko->display();
  w_przedmiot->display();
  w_klasa->display();

  return 0;
}