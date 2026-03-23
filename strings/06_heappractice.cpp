#include <iostream>
using namespace std;


char* replace_spaces (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char* newstr = new char[length+1];

    int count = 0;
    for (int i = 0; i < length; i++) {
        bool empty = false;
        if (str[i] == ' ') {
            empty = true;
        }
        if (!empty) {
            newstr[count++] = str[i];
        }
        if (empty) {
            newstr[count++] = '_';
        }
    }
    newstr[length] = '\0';

    return newstr;
}

int main () {

    char str [20] = "Hello World";

}