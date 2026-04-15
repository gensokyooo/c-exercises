#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

//Write a function named rotate that takes a singly linked list lst (with integer data)
//as a parameter and performs a "forward rotation."
//The rotation moves the last element of the list to the head position.
//For example, if lst = 1 -> 2 -> 3 -> 4 -> 5,
//after calling rotate(lst), the list becomes lst = 5 -> 1 -> 2 -> 3 -> 4.
//The function must appropriately handle empty lists.
//Additionally, define the node structure for a singly linked list containing integer data.


void rotate (node*& lst1) {

    if (lst1 == nullptr || lst1->next == nullptr) return;

    node* curr = lst1;

    while (curr->next->next != nullptr) {
        curr = curr->next;
    }
    node* last = curr->next;
    curr->next = nullptr;
    last->next = lst1;
    lst1 = last;
}

void print(node* lst1) {
    node* curr = lst1;
    while (curr != nullptr) {
        cout << curr->info << endl;
        curr = curr->next;
    }
}

int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {5, b};

    node* lst1 = a;

    rotate(lst1);
    print(lst1);
}