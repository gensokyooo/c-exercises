#include <iostream>
using namespace std;

int subSequences (const int arr[], const int k, const int length) {

    int count_subsequence = 0;
    for (int i = 0; i < length; i ++) {
        int sum = 0;
        for (int j = i; j < length; j ++) {
            sum += arr[j];
            if (sum == k) {
                count_subsequence++;
            }
        }
    }
    return count_subsequence;

}

char* revert (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char* newStr = new char[length+1];

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

    int temp = 0;
    for (int x = 0; x < length; x++) {
        newStr[temp] = str[x];
        temp++;
    }

    newStr[temp] = '\0';
    return newStr;
}
struct node {
    int info;
    node* next;
};

node* newlist (node* lst) {
    node* curr = lst;
    node* head = nullptr;
    node* tail = nullptr;
    while (curr != nullptr) {
        if (curr->info > 0) {
            node* newLst = new node {curr->info, nullptr};
            if (head == nullptr && tail == nullptr) {
                head = newLst;
                tail = newLst;
            } else {
                tail->next = newLst;
                tail = newLst;
            }
        }
        curr = curr->next;
    }

    return head;
}

#define MAX 51
int main () {

char stringa[MAX];
    cin.getline(stringa,MAX);
    if (cin.fail()) {
        return -1;
    }
    char* result = revert(stringa);
    cout << result;
    delete[]result;

    node* c = new node {1,nullptr};
    node* b = new node {1,c};
    node* a = new node {1,b};
    node* lst = a;
}
