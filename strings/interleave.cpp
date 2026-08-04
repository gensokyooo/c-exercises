#include <iostream>
using namespace std;


char* interleave (char* str1, char* str2) {
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }

    int temp = 0;

    char* newStr = new char[length*2+1];

    for (int i = 0; i < length; i++) {
        newStr[temp] = str1[i];
        temp++;
        newStr[temp] = str2[i];
        temp++;
    }

    newStr[temp] = '\0';
    return newStr;

}

struct node {
    int info;
    node* next;
};

void rotate_back (node*& lst1) {

    if (lst1 == nullptr) {
        return;
    }

    node* first_element = lst1;
    node* curr = lst1;
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    curr->next = first_element;
    // so now: 1 2 3 4 5 -> 1 2 3 4 5
    //         ^ lst1
    lst1 = lst1->next;
    // now:
    // 2 -> 3 -> 4 -> 5 -> 1
    // ^lst1
    first_element->next = nullptr;
    // now:
    // 2- > 3 -> 4 -> 5 -> 1 -> nullptr

}

#define MAX 101
int main () {

char str[MAX];
char str2[MAX];

    cin.getline(str,MAX);
    if (cin.fail()) {
        return -1;
    }
    cin.getline(str2,MAX);
    if (cin.fail()) {
        return -1;
    }

    char* result = interleave (str,str2);
    cout << result;

}

