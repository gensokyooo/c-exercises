#include <iostream>
using namespace std;

char* trim (char str[], char c) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newstr = new char [length+1];

    int temp = 0;
    for (int i = 0; i < length; i++) {
        bool found = false;
        if (str[i] == c) {
            found = true;
        }
        if (!found) {
            newstr[temp] = str[i];
            temp++;
        }
    }

    newstr[temp] = '\0';
    return newstr;


}

int main () {
    char str[] = "eh";
    char c = 'h';
    char* result = trim (str,c);
    cout << result;
}