#include <iostream>
using namespace std;

long double obl(int n)
{

    if (n == 1) return 3.0;
    
        
    
    if (n == 2) return 0.5;
    
        
    

    return obl(n - 1) * obl(n - 2) / 5.0;
}

int main()
{
    int wyrazy = 20;

    for (int i = 1; i <= wyrazy; ++i)
    {
        cout << "a" << i << " = " << obl(i) << endl;
    }

    return 0;
}