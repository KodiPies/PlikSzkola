#include <iostream>
#include <cstring>

int main() {
    char part1[100], part2[100], part3[100];

    std::cout << "Podaj pierwszy człon: ";
    std::cin.getline(part1, 100);

    std::cout << "Podaj drugi człon: ";
    std::cin.getline(part2, 100);

    std::cout << "Podaj trzeci człon: ";
    std::cin.getline(part3, 100);

    // Zamiana pierwszego członu z trzecim
    char temp[100];
    strcpy(temp, part1);
    strcpy(part1, part3);
    strcpy(part3, temp);

    // Wypisz wynik
    std::cout << "Zmieniony napis: " << part1 << " " << part2 << " " << part3 << std::endl;

    return 0;
}