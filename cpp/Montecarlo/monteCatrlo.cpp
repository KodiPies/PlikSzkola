#include <iostream>
using namespace std;

int main()
{
    int liczba = 5;
      int i = 0, losowaLiczba, liczbyWOkregu=0;
    float x, y;
    while (i < liczba)
    {
        srand((i + 1) * time(NULL));
        x = (float)rand() / RAND_MAX / 2;
        y = (float)rand() / RAND_MAX / 2;
        if(x*x + y*y<=0.5){
          liczbyWOkregu++;
        }
        i++;
    }
    cout<<liczbyWOkregu<<endl;
    cout<<3.14;
    return 0;
}