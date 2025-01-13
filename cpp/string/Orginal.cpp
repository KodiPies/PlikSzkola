#include <iostream>
#include <string>
using namespace std;

string podmien(const string &we)
{
    size_t spa = we.find(' ');
    string pS = we.substr(0, spa);
    string dS = we.substr(spa + 1);
    string wy = dS + " " + pS;
     wy[0] = toupper(wy[0]);
    wy[wy.size() - 1] = toupper(wy[wy.size() - 1]);
    for (size_t i = 0; i < wy.size(); ++i)
    {
        if (wy[i] == 'A' || wy[i] == 'a')
        {
            wy.insert(i, 1, '%');
            ++i; 
        }
    }

    return wy;
}

int main()
{
    string we;
    cout << "Podaj napis składający się z dwóch słow , które posiadają w sobie a, ponieważ przed a dodam % i zamienie ich kolejność " << endl;
    getline(cin, we);

   
    cout << "Gotowy napis: " << podmien(we) << endl;

    return 0;
}