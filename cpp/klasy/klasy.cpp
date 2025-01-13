#include <iostream>
using namespace std;

class Pizza
{
    public:
    int brokol = 34;
    int szynka = 145;
    int ser = 420;
    int ciastoM = 500;
    int ciastoD= 1000;
    static int liczbaPizz;


    int cenaBrokol = 1;
     int cenaSzynka = 3;
      int cenaSer = 2;
       int cenaCiastoM = 5;
        int cenaCiastoD = 10;
        int cena = 0;
         int odp = 0;
    
    void Cena(int cena, int odp)
    {
       cout <<"Mała czy duża pizza 1 to mała 2 to duza" << endl;
       cin >>odp;
       if (odp = 1) {
        cena + cenaCiastoM;
       }
       if (odp = 2) {
        cena + cenaCiastoD;
       }

        cout <<"Jak chcesz brokola to 1 jak nie to 2" << endl;
       cin >>odp;
       if (odp = 1) {
        cena + cenaBrokol;
       }
       if (odp = 2) {
        cout <<"brak brokolo" << endl;
       }
       cout <<"Jak chcesz szynke to 1 jak nie to 2" << endl;
       cin >>odp;
       if (odp = 1) {
        cena + cenaSzynka;
       }
       if (odp = 2) {
        cout <<"brak Szynki" << endl;
       }
       cout <<"Jak chcesz ser to 1 jak nie to 2" << endl;
       cin >>odp;
       if (odp = 1) {
        cena + cenaSer;
       }
       if (odp = 2) {
        cout <<"brak sera" << endl;
       }
       liczbaPizz++;
        




    }
    // void setPaliwo(float paliwo)
    // {
    //     if (paliwo >= pojemnoscBaku)
    //     {
    //         cout << "Max to " << pojemnoscBaku << endl;
    //         ilePaliwa = pojemnoscBaku;
    //     }
    //     else
    //     {
    //         ilePaliwa = paliwo;
    //     }
    // }
   
    
};



int main()
{
    int cena;
    int odp;
Pizza zamowienie1;
zamowienie1.Cena(cena, odp);


return 0;





    
}