#include <iostream>
using namespace std;


char* function (char str[]) {
    char* str1 = new char [10];
    str1 = "Hi";

    return str1;
}

int main () {

    char str[6] = "Hello";
    char* result = function (str);
    cout << result;
}