#include <iostream>
#include <string>
using namespace std;

 long long int sequence(int n)
{
    if (n == 0)
    {
        return 3;
    }
    else
    {
        return  sequence(n - 1) * sequence(n - 1) - 20 * sequence(n - 1);
    }
}

int main()
{
    cout << sequence(20);
    return 0;
}