#include <iostream>
using namespace std;

int countInversion (int arr[], int n) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}


char * remove (char str1[], char str2[]) {

    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }

    char* newstr = new char[length1+1];

    int temp = 0;
    for (int i = 0; i < length1; i++) {
        bool found = false;
        for (int j = 0; j < length2; j++) {
            if (str1[i] == str2[j]) {
                found = true;
            }
        }
        if (!found) {
            newstr[temp] = str1[i];
            temp++;
        }
    }
    newstr[temp] = '\0';
    return newstr;

}

#define MAX 101
int main () {

    char str1[] = "abc";
    char str2[] = "ac";
    char* result2 = remove(str1,str2);
    cout << result2;

    char a [MAX];
    cin.getline(a,MAX);
    if (cin.fail()) {
        return -1;
    }
    char* result3 = remove(a,str2);
    cout << result3;

    cout << " " << endl;
    int arr[] = {2,5,4};
    int n = 3;
    int result = countInversion (arr,n);
    cout << result;


}