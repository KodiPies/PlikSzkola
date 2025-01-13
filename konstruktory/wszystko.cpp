// Napisz program pozwalający przetwarzać dane samochodów w przedsiębiorstwie transportowym.
// Załóż, że firma ma na stanie samochody ciężarowe i autobusy. Każdy pojazd
// można opisać za pomocą cech wspólnych: marki, modelu, roku produkcji. Oprócz
// wymienionych danych samochody ciężarowe charakteryzują się unikatowym przeznaczeniem
// — wywrotka, chłodnia i cysterna, a autobusy — liczbą miejsc stojących i siedzących.
// Wykorzystaj mechanizm dziedziczenia. W każdej klasie wchodzącej w skład
// łańcucha dziedziczenia zdefiniuj konstruktor domyślny i parametryczny. Niech w celach
// testowych będzie możliwe wprowadzenie danych określonego autobusu z klawiatury,
// zapamiętanie ich w zmiennych członkowskich obiektu, a następnie wyświetlenie ich kontrolnie
// na ekranie monitora. Obiekt odpowiadający przetwarzanemu autobusowi utwórz
// przez wywołanie konstruktora parametrycznego zdefiniowanego w klasie pochodnej,
// który będzie wywoływał konstruktor parametryczny zdefiniowany w klasie bazowej.
// Własności w klasie bazowej mają być wszystkich trzech rodzajów.


#include <iostream>
using namespace std;

class Transport
{
    private:
    string marka;
    protected:
    string model;


public:
    int rokProdukcji;

    Transport(string markaP, string modelP, int rokProdukcjiP) : marka(markaP), model(modelP), rokProdukcji(rokProdukcjiP)
    {
    }

    string getMar()

    {
        return marka;
    }

    void setMar(string markaP)
    {
        marka = markaP;
    }
    string getMod()

    {
        return model;
    }

    void setMod(string modelP)
    {
        model = modelP;
    }
};

class Ciezarowki : public Transport
{
public:
    
    int odp;
    string chlodnia, wywrotka,cysterna;
    
    Ciezarowki(string markaP, string modelP, int rokProdukcjiP) : Transport(markaP, modelP, rokProdukcjiP) {}

    void display()
    {
       
        cout<<"Podaj rodzja ciężarówki 1 to chłodnia 2 to Wywrotka a 3 to Cysterna" << endl;
        cin >> odp;
        if(odp == 1) {
            cout << "Marka: " << getMar() << endl;
        cout << "Model: " << getMod() << endl;
        cout << "Rok produkcji: " << rokProdukcji << endl;
            cout <<"Rodzaj: Chłodnia " << endl;
            
        }
        if (odp == 2) {
            cout << "Marka: " << getMar() << endl;
        cout << "Model: " << getMod() << endl;
        cout << "Rok produkcji: " << rokProdukcji << endl;
            cout <<"Rodzaj: Wywrotka " << endl;
        }
        if(odp == 3) {
            cout << "Marka: " << getMar() << endl;
        cout << "Model: " << getMod() << endl;
        cout << "Rok produkcji: " << rokProdukcji << endl;
            cout <<"Rodzaj: Cysterna " << endl;
        }
    }

   
};

class Autobusy : public Transport
{
public:
    int odp1, odp2, stojace, siedzace;
    Autobusy(string markaP, string modelP, int rokProdukcjiP) : Transport(markaP, modelP, rokProdukcjiP) {}

    void display()
    {
        
        
        cout << "Marka: " << getMar() << endl;
        cout << "Model: " << getMod() << endl;
        cout << "Rok produkcji: " << rokProdukcji << endl;
        cout<<"Podaj ile miejsc siedzacych jest" << endl;
        cin >> odp1;
        cout<<"Podaj ile miejsc stojacych jest" << endl;
        cin >> odp2;
        cout <<"Tyle jest miejsc siedzacych: " << odp1 << endl;
        cout <<"Tyle jest miejsc stojących: " << odp2 << endl;
        
    }

    
};

int main()
{
    string jeden, dwa;
    int trzy;
    cout << "Podaj Markę: " << endl;
    cin >> jeden;
    cout << "Podaj Model: " << endl;
    cin >> dwa;
    cout <<"Podaj rok produkcji: " << endl;
    cin >> trzy;
    Ciezarowki przyklad(jeden, dwa, trzy);

    przyklad.display();

    string cztery, piec;
    int szesc;
    cout << "Podaj Markę: " << endl;
    cin >> cztery;
    cout << "Podaj Model: " << endl;
    cin >> piec;
    cout <<"Podaj rok produkcji: " << endl;
    cin >> szesc;
    Autobusy przyklad1(cztery, piec, szesc);
    przyklad1.display();

    

    return 0;
}
/* Napisz program pozwalający przetwarzać dane samochodów w przedsiębiorstwie transportowym.
Załóż, że firma ma na stanie samochody ciężarowe i autobusy. Każdy pojazd
można opisać za pomocą cech wspólnych: marki, modelu, roku produkcji. Oprócz
wymienionych danych samochody ciężarowe charakteryzują się unikatowym przeznaczeniem
— wywrotka, chłodnia i cysterna, a autobusy — liczbą miejsc stojących i siedzących.
Wykorzystaj mechanizm dziedziczenia. W każdej klasie wchodzącej w skład
łańcucha dziedziczenia zdefiniuj konstruktor domyślny i parametryczny. Niech w celach
testowych będzie możliwe wprowadzenie danych określonego autobusu z klawiatury,
zapamiętanie ich w zmiennych członkowskich obiektu, a następnie wyświetlenie ich kontrolnie
na ekranie monitora. Obiekt odpowiadający przetwarzanemu autobusowi utwórz
przez wywołanie konstruktora parametrycznego zdefiniowanego w klasie pochodnej,
który będzie wywoływał konstruktor parametryczny zdefiniowany w klasie bazowej.
Własności w klasie bazowej mają być wszystkich trzech rodzajów. */

// #include <iostream>
// using namespace std;

// class Pojazd
// {
//     string marka;

// protected:
//     string model;

// public:
//     int rokProdukcji;
//     Pojazd()
//     {
//         marka = "";
//         model = "";
//         rokProdukcji = 0;
//     }
//     Pojazd(string markaP, string modelP, int rokProdukcjiP)
//     {
//         marka = markaP;
//         model = modelP;
//         rokProdukcji = rokProdukcjiP;
//     }
//     void setMarka(string markaP)
//     {
//         marka = markaP;
//     }
//     void setModel(string modelP)
//     {
//         model = modelP;
//     }
//     string getMarka()
//     {
//         return marka;
//     }
//     string getModel()
//     {
//         return model;
//     }
//     void display()
//     {
//         cout << "Model: " << model << ", marka: " << marka << ", rok produkcji: " << rokProdukcji;
//     }
// };

// class Autobus : public Pojazd
// {
// public:
//     int liczbaMiejscStojacych, liczbaMiejscSiedzacych;
//     Autobus() : Pojazd()
//     {
//         liczbaMiejscSiedzacych = 0;
//         liczbaMiejscStojacych = 0;
//     }
//     Autobus(string markaP, string modelP, int rokProdukcjiP, int miejscaSiedzace, int miejscaStojace) : Pojazd(markaP, modelP, rokProdukcjiP)
//     {
//         liczbaMiejscSiedzacych = miejscaSiedzace;
//         liczbaMiejscStojacych = miejscaStojace;
//     }
//     void display()
//     {
//         Pojazd::display();
//         cout << ", liczba miejsc stojacych: " << liczbaMiejscStojacych << ", liczba miejsc siedzacych: " << liczbaMiejscStojacych;
//     }
// };

// string bool2Text(bool wartosc)
// {
//     if (wartosc == false)
//     {
//         return "NIE";
//     }
//     else
//     {
//         return "TAK";
//     }
// }

// class Ciezarowka : public Pojazd
// {
// public:
//     bool wywrotka, chlodnia, cysterna;
//     Ciezarowka() : Pojazd()
//     {
//         wywrotka = false;
//         chlodnia = false;
//         cysterna = false;
//     }
//     Ciezarowka(string markaP, string modelP, int rokProdukcjiP, bool wywrotkaP, bool chlodniaP, bool cysternaP) : Pojazd(markaP, modelP, rokProdukcjiP)
//     {
//         wywrotka = wywrotkaP;
//         chlodnia = chlodniaP;
//         cysterna = cysternaP;
//     }
//     void display()
//     {
//         Pojazd::display();
//         cout << ", czy ma cysterne: " << bool2Text(cysterna) << ", czy ma wywrotke: " << bool2Text(wywrotka) << ", czy ma chlodnie " << bool2Text(chlodnia);
//     }
// };

// int main()
// {
//     string marka, model;
//     int miejscaStojace, miejscaSiedzace, rokProdukcji;
//     bool cysterna, wywrotka, chlodnia;
//     cout << "teraz dane do autobusu i ciezarowki zeby mniej pisac ";
//     cout << "Podaj marke ";
//     cin >> marka;
//     cout << "Podaj model";
//     cin >> model;
//     cout << "Podaj rok produkcji ";
//     cin >> rokProdukcji;
//     cout << "Teraz sam autobus ";
//     cout << "Liczba miejsc siedzacych ";
//     cin >> miejscaSiedzace;
//     cout << "Liczba miejsc stojacych ";
//     cin >> miejscaStojace;
//     cout << "Teraz ciezarowka. podaj 0(jesli nie) albo 1(jesli tak) ";
//     cout << "czy ma chlodnia ";
//     cin >> chlodnia;
//     cout << "czy ma wywrotka ";
//     cin >> wywrotka;
//     cout << "czy ma cysterna";
//     cin >> cysterna;
//     Autobus autobus(marka, model, rokProdukcji, miejscaStojace, miejscaSiedzace);
//     Ciezarowka ciezarowka(marka, model, rokProdukcji, wywrotka, chlodnia, cysterna);
//     autobus.display();
//     ciezarowka.display();
//     return 0;
// }
