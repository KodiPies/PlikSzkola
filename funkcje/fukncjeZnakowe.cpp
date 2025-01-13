#include <iostream>
#include <string>
using namespace std;

 

int main()
{
    string slowo;
    cout << "Podaj słowo a ja go sprawdze" << endl;
    getline(cin,slowo);

    for( int i = 0; i < slowo.length(); i++) {
        // if(isalpha(slowo[i])) {
        //     cout<<  i <<"jest literą" << endl; 
        //    if(islower(slowo[i])){


        //     cout <<i + 1 << "litera jest mała" << endl;
        //     slowo[i] = toupper(slowo[i]);
        //    }
        //    else if(isupper(slowo[i])) {
        //     cout << i + 1 << "Litera jest duża" << endl;
        //     slowo[i] = to
        //    }

        // }
        if (isalpha(slowo[i])) {
            cout << i <<"jest  literą" << endl;
        }
        if (islower(slowo[i])) {
            cout << i <<"znak jest maly" << endl;
            // slowo[i] = toupper(slowo[i]);
        }
        if (isupper(slowo[i])) {
            cout << i <<"znak jest duzy" << endl;
            // slowo[i] = tolower(slowo[i]);
        }
        if(isprint(slowo[i])) {
            cout <<i<<"jest znakiem drukowanym" << endl;
        }
        if(ispunct(slowo[i])) {
            cout << i << "Znak jest znakiem interpunktyjnym" << endl;
        }
        if(iscntrl(slowo[i])) {
            cout << i <<"znaj jest znakiem sterującym" << endl;
        }
        
       



         
    }
}