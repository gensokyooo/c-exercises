#include <iostream>
using namespace std;

int countUnique (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int unique = 0;
    for (int i = 0; i < length; i ++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            unique++;
        }
    }
    return unique;
}

#define MAX 51
int main () {

    char str[6] = "Hello";
    char a [MAX];
    cin.getline (a,MAX);
    if (cin.fail()) {
        cout << "-1" << endl;
    }
    else {
        int result = countUnique (a);
        cout << result;
    }

}