#include <iostream>
using namespace std;

void swap (int a[], int b[], int n) {

    for (int i = 0; i < n ; i ++) {
        if (a[i] > b[i]) {
            int const temp = b[i];
            b[i] = a[i];
            a[i] = temp;
        }
    }
}

char* remove_double (char* str) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newStr = new char[length+1];

    int temp = 0;

    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > 1) {
            newStr[temp] = str[i];
            temp++;
        }
    }

    newStr[temp] = '\0';
    return newStr;
}

struct node {
    int info;
    node* next;
};

node* remove_duplicates (node* lst) {

    node* curr = lst;
    node* head = nullptr;
    node* tail = nullptr;

    if (lst == nullptr) return nullptr;

    while (curr != nullptr) {

        bool match = false;
        node* curr2 = head;

        while (curr2 != nullptr) {
            if (curr->info == curr2->info) {
                match = true;
                break;
            }
            curr2 = curr2->next;
        }

        if (!match) {
            node* newNode = new node {curr->info, nullptr};
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        curr = curr->next;

    return head;
}

#define MAX 101

int main () {

char str[MAX];

cin.getline(str,MAX);
    if (cin.fail()) {
        return -1;
    }
    char* result = remove_double(str);
    cout << result;

    delete[] result;

    return 0;

}

