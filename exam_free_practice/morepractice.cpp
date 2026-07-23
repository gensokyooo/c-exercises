#include <iostream>
using namespace std;

char* trim (char str[], char c, int n ) {


    char* newStr = new char[n+1];

    int temp = 0;
    for (int i = 0; i < n; i ++ ) {
        if (str[i] != c) {
            newStr[temp] = str[i];
            temp++;
        }
    }

    newStr[temp] = '\0';
    return newStr;

}

int main () {


}