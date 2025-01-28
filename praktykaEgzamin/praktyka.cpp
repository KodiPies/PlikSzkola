#include <iostream>
using namespace std;

class Urzadzenie
{
public:
    void wypisz(string komunikat)
    {
        cout << komunikat << endl;
    }
};

class Pralka : public Urzadzenie
{
private:
    int program = 0;

public:
    int Program(int programP)
    {
        if (programP >= 1 && programP <= 12)
        {
            program = programP;
        }
        else
        {
            program = 0;
        }
        return program;
    }
};

class Odkurzacz : public Urzadzenie
{
private:
    bool wlaczony = false;

public:
    void on()
    {
        if (wlaczony == false)
        {
            wlaczony = true;
            wypisz("Odkurzacz wlaczono");
        }
    }
    void off()
    {
        if (wlaczony == true)
        {
            wlaczony = false;
            wypisz("Odkurzacz wylaczono");
        }
    }
};

int main()
{
    int numer;
    Pralka cos;
    Odkurzacz coss;
    cout << "Podaj numer prania 1..12" << endl;
    cin >> numer;
    if (cos.Program(numer) <1 && cos.Program(numer) >12)
    {
        cout << "Podano niepoprawny numer programu" << endl;
    }
    else
    {
        cout << "Program zostal ustawiony" << endl;
    }

    coss.on();
    coss.wypisz("Odkurzacz wyladowal sie");
    coss.off();
    return 0;
}