#include <iostream>
#include <vector>
// #include <ctime> 

using namespace std;

void sortujRosnaco(vector<int>& tablica) {
    int n = tablica.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tablica[j] > tablica[j + 1]) {
                int temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

void sortujMalejaco(vector<int>& tablica) {
    int n = tablica.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (tablica[j] < tablica[j + 1]) {
                int temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

void wypiszTablice(const vector<int>& tablica) {
    for (const auto& liczba : tablica) {
        cout << liczba << " ";
    }
    cout << endl;
}

int main() {
    // srand(time(nullptr)); 

    vector<int> tablica;

    
    cout << "Podaj wielkosc tablicy: ";
    int wielkosc;
    cin >> wielkosc;

    
    for (int i = 0; i < wielkosc; ++i) {
        tablica.push_back(rand() % 100); 
    }

    
    cout << "Chcesz wyswietlic od najmniejszej (1) czy od najwiekszej (2) liczby? ";
    int wybor;
    cin >> wybor;

    
    if (wybor == 1) {
        sortujRosnaco(tablica);
    } else if (wybor == 2) {
        sortujMalejaco(tablica);
    } else {
        cout << "Nieprawidlowy wybor." << endl;
        return 1;
    }

    
    cout << "Posortowana tablica: ";
    for (const auto& liczba : tablica) {
        cout << liczba << " ";
    }
    cout << endl;

    return 0;
}