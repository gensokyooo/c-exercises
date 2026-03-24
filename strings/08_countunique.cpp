#include <iostream>
using namespace std;

int countUnique (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int uniques = 0;
    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            uniques++;
        }
    }
    return uniques;
}

#define MAX 51
int main () {
    char str[6] = "Hello";
    char nuova [MAX];
    cin.getline(nuova,MAX);
    if (cin.fail()) {
        cout << "-1";
    }
    int result = countUnique (nuova);
    cout << result;

}