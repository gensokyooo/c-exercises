#include <iostream>
using namespace std;

int mostFrequent (int arr[], int len) {

    int maxcount = 0;
    int elem = 0;
    for (int i = 0; i < len ; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxcount) {
            maxcount = count;
            elem = arr[i];
        }
    }

    return elem;
}

char* noVowels (char* str) {


    char* newChar = new char[n+1];
    int temp = 0;
    for (int i = 0; i < n; i ++ ) {
        if (!(str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'o' ||
            str[i] == 'i' ||
            str[i] == 'u'
            )) {
           newChar[temp] = str[i];
            temp++;
        }
    }

    newChar[temp] = '\0';
    return newChar;
}

struct node {
    int info;
    node* next;
};

void remove (node*& lst, int e) {
    if (lst == nullptr) return;

    // Clear the head
    while (lst->info > e) {
        lst = lst->next;
    }
    node* curr = lst;
    // Now we know the head is alright
    while (curr != nullptr) {
        if (curr->next->info > e) {
            curr->next = curr->next->next;
        }
        curr = curr->next;
    }
}

#define MAX 51
int main () {

    char str[MAX];
    cin.getline(str,MAX);
    if (cin.fail()) {
        return -1;
    }
    char* result = noVowels(str);
    cout << result;
    delete[]result;
}