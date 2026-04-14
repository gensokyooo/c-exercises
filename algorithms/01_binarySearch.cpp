#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int k) {

    int half = (len-1)/2;

    while (arr[half] == k) {
        if (arr[half] < k) {
            half = len-half;
        }
    }

            // 2 < 5?
            // we wanna look right
            // because it's ascending
            // how do we look right?
            // we say check within len-half
            // and now look at the middle




}

int main () {
    int arr[] = {1,2,2,3,6};
    int len = 5;
    int k = 3;

    int result = binarySearch(arr,len,k);
    cout << result;
}