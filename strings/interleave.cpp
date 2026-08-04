#include <iostream>
using namespace std;


char* interleave (char* str1, char* str2) {
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }

    int temp = 0;

    char* newStr = new char[length*2+1];

    for (int i = 0; i < length; i++) {
        newStr[temp] = str1[i];
        temp++;
        newStr[temp] = str2[i];
        temp++;
    }

    newStr[temp] = '\0';
    return newStr;


}

int main () {



}