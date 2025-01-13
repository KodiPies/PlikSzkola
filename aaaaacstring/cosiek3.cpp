 #include <iostream>
 #include <cstring>

 using namespace std;

 int main() {
     const char* str1 = "Java Runtime Environment";
    const char* str2 = "Runtime";

     if (strstr(str1, str2)) {
         cout << "Jest" << endl;
     } else {
         cout << "Nie ma" << endl;
     }

     return 0;
 }