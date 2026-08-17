#include <iostream>
using namespace std;


struct date {
    int info;
};

class Tower {
public:
    int height;
};

char* revert (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newstr = new char [length+1];

    for (int i = 0; i < length; i++) {
        newstr[i] = str [length - 1 -i];
    }
    newstr[length] = '\0';
    return newstr;

}

int main () {

    Tower eiffel;
    eiffel.height = 32;

    date x;
    x.info = 32;

    char str[6] = "Hello";
    char* result = revert (str);
    cout << result;
}