#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char* str1 = "Programowanie ";
    const char* str2 = "zorientowane ";
    const char* str3 = "obiektowo";
    int totalLength = strlen(str1) + strlen(str2) + strlen(str3) + 1;

    char result[totalLength];

    result[0] = '\0';

    strcat(result, str1);
    strcat(result, str2);
    strcat(result, str3);

    cout << result << endl;

    return 0;
}