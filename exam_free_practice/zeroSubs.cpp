#include <iostream>
using namespace std;

int getZeroSubs (int arr[], int length) {

    int count = 0;
    for (int i = 0; i < length; i ++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += arr[j];

            if (sum == 0) {
                count++;
            }
        }
    }
    return count;
}

int countUnique (const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int final_count = 0;
    for (int i = 0; i < length; i ++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            final_count++;
        }
    }

    return final_count;
}
#define MAX 51
int main () {

    char stringa[MAX];
    cin.getline(stringa,MAX);
    if (cin.fail()) {
        return -1;
    }
   int x =  countUnique(stringa);
    cout << x;
}