#include <iostream>
#include <string>
#include <cstring>  
using namespace std;

int main() {
   
    string str = "Hello World";

    cout << "Original (C++ string): " << str << endl;
    cout << "Reversed (C++ string): ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

   
    char cstr[] = "C++ Programming";
    int len = strlen(cstr);

    cout << "\nOriginal (C-style string): " << cstr << endl;
    cout << "Reversed (C-style string): ";
    for (int i = len - 1; i >= 0; i--) {
        cout << cstr[i];
    }
    cout << endl;

    return 0;
}
