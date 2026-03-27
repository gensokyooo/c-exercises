#include <iostream>
using namespace std;

#define MAX 1001
int main () {

    int* a = new int [MAX];

    int x;
    int count = 0;
    while (true) {
        cin >> x;
        if (x < 0) {
            break;
        }
        count++;
        a[count-1] = x;

    }

    cout << " " << endl;
    cout << "Array A: " << endl;
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }
    // SECTION B
    int* b = new int [count];
    int max = 0;
    int min = a[0];
    for (int i = 0; i < count; i++) {
        if (a[i] >= max) {
            max = a[i];
        }
        if (a[i] <= min) {
            min = a[i];
        }
    }

    cout << " " << endl;

    int temp = 0;
    cout << "ARRAY B: " << endl;
    for (int i = 0; i < count; i++) {
        if (a[i] != max && a[i] != min) {
            b[temp] = a[i];
            temp++;
        }
    }

    for (int i = 0; i < temp; i++) {
        cout << b[i] << " " << endl;
    }

    delete[]b;
    delete[]a;


}