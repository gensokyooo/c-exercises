#include <iostream>
using namespace std;

char* trim (char str[], char c[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
        }
    char* newstr = new char[length+1];

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != c[0]) {
            newstr[count++] = str[i];
        }
    }

    newstr[count] = '\0';


    return newstr;
}


int main () {

    char str[10] = "Hello";
    char c [5] = "e";

}