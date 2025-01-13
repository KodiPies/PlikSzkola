#include <iostream>
using namespace std;
// int main()
// {
//     int wiek1;
//     cout << "Podaj swoj wiek a ja spradze w ktorej klasie jestes" << endl;
//     cin >> wiek1;
//     switch (wiek1)
//     {
//     case 7:
//         cout << "Klasa 1";
//         break;
//     case 8:
//         cout << "Klasa 2";
//         break;
//     case 9:
//         cout << "Klasa 3";
//         break;
//     case 10:
//         cout << "Klasa 4";
//         break;
//     case 11:
//         cout << "Klasa 5";
//         break;
//     case 12:
//         cout << "Klasa 6";
//         break;
//     case 13:
//         cout << "Klasa 7";
//         break;
//     case 14:
//         cout << "Klasa 8";
//         break;

//     default:
//         cout << "blad";
//         break;
//     }

//     return 0;
// }

// int main()
// {
//     int wiek;
//     cout << "Podaj swój wiek a ja sprawdze ile zostalo ci jeszcze lat" << endl;
//     cin >> wiek;
//     switch (wiek)
//     {
//     case 7:
//         cout << "7 lat szkoly ci zostalo";

//     case 8:
//         cout << "6 lat szkoly ci zostalo,";

//     case 9:
//         cout << "5 lat szkoly ci zostalo";

//     case 10:
//         cout << "4 lata szkoly ci zostalo";

//     case 11:
//         cout << "3 lata szkoly ci zostalo";

//     case 12:
//         cout << "2 lata szkoly ci zostalo";
//         break;
//         case 13:
//         cout << "1 rok szkoly ci zostalo";
//         break;
//         case 14:
//         cout << "konczysz szkole";
//         break;

//     default:
//         cout << "blad";
//         break;
//     }
//     return 0;
// }





int main()
{
    int wiek;

    cout << "Podaj wiek ucznia (14-18): ";
    cin >> wiek;

    switch (wiek)
    {
    case 14:
        cout << " 1 technikum." << endl;
        
    case 15:
        cout << " 2 technikum." << endl;
        
    case 16:
        cout << " 3 technikum." << endl;
        
    case 17:
        cout << " 4 technikum." << endl;
    
    case 18:
        cout << " 5 technikum." << endl;
        break;
    default:
        cout << "Błędny wiek. Proszę podać wiek od 14 do 18." << endl;
        break;
    }

    return 0;
}