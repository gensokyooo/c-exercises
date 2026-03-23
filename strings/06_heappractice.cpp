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
        // We reset condition each index
        bool empty = false;
        // We check if it's an empty space
        if (str[i] == ' ') {
            empty = true;
        }
        // If it's not then we add normally
        if (!empty) {
            newstr[count++] = str[i];
        }
        // If it is then we add an underscore
        if (empty) {
            newstr[count++] = '_';
        }
    }

    // Add the terminator at the end
    newstr[count] = '\0';

    return newstr;
}

int main () {

    char str [20] = "Hello World";



}