#include <iostream>
using namespace std;


#define MAX 1001
int main () {
    int x;

    int* a = new int [MAX];
    int count = 0;
    while (true) {
        cin >> x;
        if (x < 0) {
            break;
        }
        count++;
        for (int i = count-1; i < count; i++) {
            a[i] = x;
        }
    }

    cout << "Array A: " << endl;
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }

    int* b = new int [count];

    int temp = 0;
    for (int i = 0; i < count; i++) {
        int count2 = 0;
        for (int j = 0; j < count; j++) {
            if (a[i] == a[j]) {
                count2++;
            }
        }
        if ( count2 == 1) {
            b[temp] = a[i];
            temp++;
        }
    }
    cout << " " << endl;
    cout << "Array B" << endl;
    for (int x = 0; x < temp; x++) {
        cout << b[x] << " ";
    }

    delete[]b;
    delete[]a;



}

