#include <iostream>
using namespace std;

int subSequences (const int arr[], const int k, const int length) {

    int count_subsequence = 0;
    for (int i = 0; i < length; i ++) {
        int sum = 0;
        for (int j = i; j < length; j ++) {
            sum += arr[j];
            if (sum == k) {
                count_subsequence++;
            }
        }
    }
    return count_subsequence;

}

char* revert (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newStr = new char[length+1];

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

    int temp = 0;
    for (int x = 0; x < length; x++) {
        newStr[temp] = str[x];
        temp++;
    }

    newStr[temp] = '\0';
    return newStr;
}


int main () {



}