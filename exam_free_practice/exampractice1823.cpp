#include <iostream>
using namespace std;

void ruota (int arr[], int n) {

    int temp = arr[n-1];

    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

}

void print (int arr[], int n) {
    for (int i = 0; i < n; i ++) {
        cout << arr[i];
    }
}

#define MAX 1001

int main () {

    int x;
    cin >> x;
    int temp = 0;

    int* a = new int[MAX];

    while (x > 0) {
        if (temp == MAX) {
            break;
        }
        a[temp] = x;
        temp++;
        cin >> x;
    }

    for (int i = 0; i < temp; i ++) {
        cout << a[i];
    }

    int* b = new int[temp];

    // for ex. we have 1 2 3 6 2
    // we have to put everything except the ones that have maximum and minimum value
    // how do we check which one is the smallest?
    // we go through the whole array and compare a[i] with a[j]
    // if a[i] < a[j]
    // then min = a[i]

    //if a[i] > a[j]
    // then max = a[j]

    // 1
    int max = a[0];
    int min = a[0];


    for (int i = 1; i < temp; i ++ ) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }







    }

    delete[]a;
    delete[]b;
}