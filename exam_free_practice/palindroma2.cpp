#include <iostream>
using namespace std;

bool palindroma (char* str) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // check if it's palindroma
    // anna

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length-1-i]) {
            return false;
        }
    }
    return true;
}

int coincide (int a1[], int a2[], int dim1, int dim2) {

    int count = 0;
    int minDim = dim1;

    if (dim2 < dim1) {
        minDim = dim2;
    }
    for (int i = 0; i < minDim; i ++) {
        if (a1[i] == a2[i]) {
            count++;
        }
    }
}



int main () {

}