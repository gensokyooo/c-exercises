#include <iostream>
using namespace std;

//Write a function removeDuplicates that takes as
//input a singly linked list lst, whose nodes contain an
//integer field, and returns a new list with all duplicate elements removed.

//For example, if
//lst = 1 → 2 → 2 → 3 → 3,
//the function should return
//1 → 2 → 3.

//Properly handle the case where lst is empty.

struct node {
    int info;
    node* next;
};

node* removeDuplicates (node* lst1) {
    if (lst1 == nullptr) return nullptr;

    node* curr = lst1;
    node* newHead = nullptr;
    node* tail = nullptr;

    while (curr != nullptr) {
        bool flag = false;
        node* check = newHead;
        while (check != nullptr) {
            if (curr->info == check->info) {
                flag = true;
                break;
            }
            check = check->next;
        }

        if(!flag) {
                node* newNode = new node {curr->info,nullptr};

            if (newHead == nullptr) {
                newHead = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
    curr = curr->next;
    }

    return newHead;
}



int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {2, b};

    node* lst1 = a;
}