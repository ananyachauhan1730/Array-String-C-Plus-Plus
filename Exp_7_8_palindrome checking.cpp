#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, revStr;

    cout << "Enter a string: ";
    getline(cin, str); 

    
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }

   
    if (str == revStr) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is NOT a palindrome." << endl;
    }

    return 0;
}

\\output
Enter a string: madam
"madam" is a palindrome.

Enter a string: hello
"hello" is NOT a palindrome.
