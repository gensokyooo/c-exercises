#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector <int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (left+right) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            right = mid - 1;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
    }

    return -1;

}

int main () {
    vector <int> arr = {1,2,3,4,6};
    int target = 2;

}