#include <iostream>
#include <cstring>

int main() {
    char imieNazwisko[] = "Jan Probosz";
    char drugielmie[] = "Stanisław";
    char napis2[100];

    // 1. Użycie indeksów do znalezienia spacji w imieNazwisko
    int indeks_spacji = 0;
    while (imieNazwisko[indeks_spacji] != ' ' && imieNazwisko[indeks_spacji] != '\0') {
        indeks_spacji++;
    }

    if (imieNazwisko[indeks_spacji] == '\0') {
        std::cout << "Nie znaleziono spacji w imieniu i nazwisku." << std::endl;
        return 1;
    }

    // 2. Łączenie imienia, drugiego imienia i nazwiska za pomocą funkcji strcat
    strncpy(napis2, imieNazwisko, indeks_spacji);  // Kopiowanie imienia
    napis2[indeks_spacji] = '\0';  // Dodanie zakończenia łańcucha
    strcat(napis2, " ");  // Dodanie spacji
    strcat(napis2, drugielmie);  // Dołączenie drugiego imienia
    strcat(napis2, " ");  // Dodanie kolejnej spacji
    strcat(napis2, imieNazwisko + indeks_spacji + 1);  // Dołączenie nazwiska

    std::cout << "wy: dane==" << napis2 << std::endl;

    return 0;
}