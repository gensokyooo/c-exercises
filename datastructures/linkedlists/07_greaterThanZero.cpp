#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;
};

//Write a function that, given a singly linked list lst
//whose nodes contain an integer field, returns a new list
//containing only the elements of lst that are strictly greater than zero.
//For example, if lst = {1, 7, -2, 1, -3, 5}, the function should return {1, 7, 1, 5}.
//Handle appropriately the case where lst is empty.

node* greaterThanZero (node* lst1) {
    node* newHead = nullptr;
    node* curr = lst1;
    if (lst1 == nullptr) return nullptr;

    while (curr != nullptr) {
        if (curr->info > 0) {
            node* newNode = new node {curr->info, newHead};
            newHead = newNode;
            curr = curr->next;
        } else {
            curr = curr->next;
        }
    }
    return newHead;
}

void print (node* newlst ) {
    if (newlst == nullptr) {
        cout << "Null";
    }
    while (newlst != nullptr) {
        cout << newlst->info << endl;
        newlst = newlst->next;
    }

}

int main () {
        node* c = new node { 1, nullptr};
        node* b = new node { 2, c};
        node* a = new node {0, b};

        node* lst1 = a;

    node* newlst = greaterThanZero(lst1);
    print (newlst);

    }