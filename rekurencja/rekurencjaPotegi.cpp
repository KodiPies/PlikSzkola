#include <iostream>
using namespace std;



long int potega(int p, int w)
{
    if (w == 0) return 1;
    else return p * potega(p, w - 1);

}




int main()
{
    
    cout << potega(5, 4) << endl;
    

        
}