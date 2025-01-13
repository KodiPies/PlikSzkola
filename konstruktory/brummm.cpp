 #include <iostream>
using namespace std;

class Auto
{
    string marka;
    bool bity;

public:
    static int ileAut;
    Auto()
    {
        
        ileAut++;
    }
    Auto(string markaP, bool bityP) 
    {
        marka = markaP;
        bity = bityP;
         ileAut++;
    }
    string getMarka()
  {
    return marka;
  }
  void setMarka(string markaa)
  {
    marka= markaa;
  }

    
    
    void wypisanie(string markaP, bool bityP)
    {
        if(bityP == true) {
            cout <<"Aute bite " << endl;
        }
        else {
            cout <<"Auto nie bite ";
        }
        if (marka.length() > 0)
            cout << "Marka pierwsza " << markaP  << endl;
        else
            cout << "Brak danych" << endl;
    }
};
int Auto::ileAut = 0;
int main()
{
    Auto osoba1;
    string marka;
    bool bity;
    cout << "Zrobimy auta\n";
    cout << "Podaj marke auta " << endl;;
    cin >> marka;
    cout << "Podaj cy bity czy nie " << endl;;
    cin >> bity;
    Auto osoba2(marka, bity);
    
    cout << "Auto 2 " << endl;;
   
    osoba2.wypisanie(marka, bity);
   
    cout << Auto::ileAut << " tyle jest aut";
    return 0;
}