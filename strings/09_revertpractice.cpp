#include <iostream>
using namespace std;

char* revert (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newstr = new char [length+1];

    for (int i = 0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

    for (int j = 0; j < length; j++) {
        newstr[j] = str[j];
    }

    newstr[length] = '\0';

    return newstr;

}

int main () {

    char str[6] = "Hello";
    char* result = revert (str);
    cout << result;
}