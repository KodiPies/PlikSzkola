 #include <iostream>
 #include <cstring>

 using namespace std;

 int main() {
     const char* str1 = "Java";
     const char* str2 = "Java";

     // Użycie funkcji strcmp do porównania łańcuchów
     int result = strcmp(str1, str2);

     if (result == 0) {
         cout << "Napisy są takie same" << endl;
     } else {
        cout << "Napisy są różne" << endl;
    }

     return 0;
 }