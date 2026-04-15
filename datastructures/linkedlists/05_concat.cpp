#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

//Write a void function named concat that takes as parameters two singly linked lists
//l1 and l2, whose nodes contain an integer information field, and concatenates list l2 to list l1.
//For example, if l1 = {1, 7} and l2 = {5, 9, 12},
//after calling concat(l1, l2), list l1 becomes {1, 7, 5, 9, 12}.
//Properly handle the cases where l1 and/or l2 are empty lists.



void concat (node*& lst1, node* lst2) {

    if (lst1 == nullptr) {
        lst1 = lst2;
        return;
    }
    if (lst2 == nullptr) {
        return;
    }

    node* curr = lst1;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = lst2;
}


int main () {

    node* c = new node { 1, nullptr};
    node* a = new node {5, c};

    node* lst1 = a;

    node* y = new node { 1, nullptr};
    node* x = new node {5, y};

    node* lst2 = x;

}