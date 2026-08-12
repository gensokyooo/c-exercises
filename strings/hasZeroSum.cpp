#include <iostream>
using namespace std;

bool hasZeroSum (int arr[], int length) {


    for (int i = 0; i < length; i ++) {
        int sum = 0;
        bool match = false;
        for (int j = i; j < length; j++) {
            sum = arr[j]+sum;
            if (sum == 0) {
                return true;
            }
        }
    }
    return false;
}

char* removeDuplicates (char* str) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newStr = new char[length+1];
    int temp = 0;
    for (int i = 0; i < length; i++) {
            int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            newStr[temp] = str[i];
            temp++;
        }
    }

newStr[temp] = '\0';
return newStr;
}

struct node {
    int info;
    node* next;
};

void concat (node* l1, node* l2)

int main () {

}