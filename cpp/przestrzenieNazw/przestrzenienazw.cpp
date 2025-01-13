#include <iostream>
using namespace std;

namespace dawneMiary
{
    const float sazen = 1.8;

}
int main()
{
    short int wzrost;
    cout << "Podaj wzrost w centymetrach\n";
    cin >> wzrost;
    cout << "Twoj wzrost w sazniach to: " << (float)wzrost / 100 / dawneMiary::sazen;
    return 0;
}