#include <iostream>
using namespace std;

void ruota (int a[], int length) {

    int temp = a[0];
    for (int i = length-1; i > 0 ; i--) {
        a[i] = a[i-1];
    }
    a[0] = temp;
}

void print (int a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << endl;
    }
}

int main () {

}