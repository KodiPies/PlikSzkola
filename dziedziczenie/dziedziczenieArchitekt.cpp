#include <iostream>
using namespace std;
// Definicja klasy bazowej Pracownik:
class Procesor {
public: 
string chipset;
};
class Pamiec {
public: 
int ram;
};
class torbaNaLaptopa {
public: 
bool czyDac;
};
class rozmiarMatrycy {
public: 
int w ;
};
class ekranDotykowy{
public: 
bool czyJest;
};

class Desktop: public Procesor, public Pamiec { // dziedziczenie publiczne
public:
string ukradl;
void zwrocDan() {
cout <<"Procesor " <<  chipset <<" Pamięć ram "<< ram <<" Kto ukradł desktop "<<ukradl<< endl;
}


};
class Laptop : public Procesor , public Pamiec , public torbaNaLaptopa, public rozmiarMatrycy {
    public:
    string sklep;
    void zwrocDane() {
cout <<"Procesror "<<  chipset <<" Pamięć Ram "<< ram << " Obudowa tak czy nie "<<czyDac <<"W takim sklepie kupiony został "<<sklep<<" Rozmiar matrycy "<<  w << endl;
}
    
};
class Tablet : public Procesor , public Pamiec , public ekranDotykowy, public rozmiarMatrycy {
    
    public:
    int cena;
    void zwrocDanee() {
cout <<"Procesror "<<  chipset <<" Pamięć Ram "<< ram << " Obudowa tak czy nie "<<czyJest <<" Rozmiar matrycy "<<  w  <<" To jest cena "<<cena << endl;
}
    
};

int main() {
Laptop lenovo;
Tablet Ipad;
Desktop cos;

lenovo.chipset = "Intel"; 
lenovo.ram = 16; 
lenovo.czyDac = true; 
lenovo.w = 10;
lenovo.sklep = "Media Shit";
lenovo.zwrocDane();

Ipad.chipset = "M2"; 
Ipad.ram = 8; 
Ipad.czyJest = true; 
Ipad.w = 4;
Ipad.cena =10;
Ipad.zwrocDanee();

cos.chipset = "cosiek";
cos.ram = 1;
cos.ukradl = "Adrian";
cos.zwrocDan();
}