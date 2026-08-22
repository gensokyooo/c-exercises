#include <iostream>
using namespace std;

int count_increasing_triples (int arr[], const int n) {
    int count = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = i+i; j < n; j++) {
            for (int l = j+1; l < n; l++) {
                if (arr[i] < arr[j] && arr[j] < arr[l]) {
                    count++;
                }
            }
        }
    }
    return count;

}

int main () {

}