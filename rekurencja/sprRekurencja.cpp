#include <iostream>
using namespace std;


long int oblicz(int n) {

    if(n==1) return 0;
    else return oblicz(n) * oblicz(n) - 1;
}


int main() {
    
    oblicz(4);
   
}