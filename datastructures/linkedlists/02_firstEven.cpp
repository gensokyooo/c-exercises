#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;
};
//Write a function named firstEven that takes a singly linked list lst
//(with integer data fields) as a parameter and returns a pointer to the first even
//element in the list. If the list contains no even elements, return NULL.
//Appropriately handle the case where lst is empty. (+2pt if the function is recursive).

node* firstEven (node* lst) {

    while (lst != nullptr) {
        if (lst->info %2 == 0) {
            return lst;
        }
        lst = lst->next;
    }

    return nullptr;
}

int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {5, b};

    node* lst = a;
}