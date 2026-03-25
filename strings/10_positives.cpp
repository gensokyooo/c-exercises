#include <iostream>
using namespace std;



#define MAX 1001
int main () {
    int* a = new int[MAX];
    int x;

    int i = 0;
    while (true) {
        cin >> x;

        if (x < 0) {
            break;
        }
        a[i] = x;
        i++;
    }
    int length = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < length; i++) {
        cout << a[i];
    }
}

