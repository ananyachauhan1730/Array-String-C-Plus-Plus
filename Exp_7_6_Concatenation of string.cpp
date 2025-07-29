#include <iostream>
#include <string>   
#include <cstring>
using namespace std;


int main() {
   
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = str1 + str2;  
    cout << "C++ String Concatenation:" << endl;
    cout << "str1 + str2 = " << str3 << endl;

  
    char cstr1[50] = "Good ";
    char cstr2[] = "Morning";

    strcat(cstr1, cstr2);  

    cout << "\nC-style String Concatenation:" << endl;
    cout << "cstr1 + cstr2 = " << cstr1 << endl;

    return 0;
}


\\Output
mathematica
Copy
Edit
C++ String Concatenation:
str1 + str2 = Hello, World!

C-style String Concatenation:
cstr1 + cstr2 = Good Morning
