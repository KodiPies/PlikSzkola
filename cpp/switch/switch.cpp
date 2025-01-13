 #include <iostream>
using namespace std;
int main()
{
    int numerLekcji;
    cout << "Podaj numer lekcji" << endl;
    cin >> numerLekcji;
    switch (numerLekcji)
    {
    case 1:
        cout << "Masz biologie";
        break;
    case 2:
        cout << "Masz chemie";
        break;
    case 3:
        cout << "Masz fizyke";
        break;
    case 4:
        cout << "Masz matematyke";
        break;
    case 5:
        cout << "Masz praktyke";
        break;
    case 6:
        cout << "Masz praktyke";
        break;

    default:
        cout << "blad";
        break;
    }

    return 0;
} 