#include <iostream>
using namespace std;

struct node {
    char info;
    node* next;
};

//Write a function named concat with return type
//void that takes as parameters two singly linked lists l1 and l2,
//whose nodes contain a char data field, and appends list l2 to the end of list l1.

//For example, if l1 = {'a', 'd'} and l2 = {'g', 'f', 'l'},
//after calling concat(l1, l2), list l1 becomes {'a', 'd', 'g', 'f', 'l'}.

//Properly handle the cases where l1 and/or l2 are empty lists.

void concat (node*& lst1, node* lst2) {
    if (lst1 == nullptr) {
        lst1 = lst2;
        return;
    }

    node* curr = lst1;
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    curr->next = lst2;

}


int main () {
    node* c = new node { 'c', nullptr};
    node* b = new node { 'b', c};
    node* a = new node {'a', b};

    node* lst1 = a;

    node* z = new node { 'z', nullptr};
    node* y = new node { 'y', z};
    node* x = new node {'x', y};

    node* lst2 = x;


}