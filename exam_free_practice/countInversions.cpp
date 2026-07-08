#include <iostream>
using namespace std;

int countInversion (int arr[], int n) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool one = false;
        bool two = false;
        for (int j = i; j < n; j++) {
            if ( i < j ) {
                one = true;
            }
            if (arr[i] > arr[j]) {
                two = true;

            }
        }

    }

    return count;

}

char* remove (char* str1, char* str2) {

    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }

    char* newStr = new char[length1+1];

    int temp = 0;
    for (int i = 0; i < length1; i ++ ) {
        bool match = false;
        for (int j = 0; j < length2; j++) {
            if (str1[i] == str2[j]) {
                match = true;
                break;
            }
        }

        if (!match) {
            newStr[temp] = str1[i];
            temp++;
        }
    }

    newStr[temp] = '\0';
    return newStr;

}

#define MAX 101

int main () {
    char stringa [MAX];
    cin.getline(stringa,MAX);
    if (cin.fail()) {
        return -1;
    }
    char stringa2 [MAX] = "ac";
    char* result = remove(stringa,stringa2);
    cout << result;
}