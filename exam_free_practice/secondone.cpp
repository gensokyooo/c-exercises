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
#define MAX 1001
int main () {
    int* y = new int [MAX];
    int x;
    cin >> x;
    int temp = 0;
    while (x > 0) {
        y[temp] = x;
        temp++;
        cin >> x;
    }

    cout << "ARRAY A" << endl;
    for (int i = 0; i < temp; i++) {
        cout << y[i] << endl;
    }
    cout << endl;
    int* b = new int[MAX];

    // Find minimum and maximum values
    //
    int min = 0;
    int max = 0;
    int temp2 = 0;
    for (int i = 0; i < temp; i ++ ) {
        bool found_min = true;
        bool found_max = true;
        for (int j = 0; j < temp; j++) {
            if (a[i] > a[j]) {
                found_min = false;
            }
        }
        for (int z = 0; z < temp; z++) {
            if (a[i] < a[z]) {
                found_max = false;
            }
        }
        if (!found_min && !found_max) {
            b[temp2] = a[i];
            temp2++;
        }
    }

    for (int i = 0; i < temp2; i ++) {
        cout << b[i] << endl;
    }

    delete[]b;
    delete[]y;
}