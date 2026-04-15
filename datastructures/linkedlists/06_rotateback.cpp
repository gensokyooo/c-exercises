#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

// Write a function named rotate_back that takes as parameter a singly
// linked list lst, whose nodes contain an integer information field,
// and performs a “backward rotation” of the list: the rotation must move the first element
// of the list to the tail position.
//For example, if lst = 1 -> 2 -> 3 -> 4 -> 5,
//after calling rotate_back(lst), the list becomes lst = 2 -> 3 -> 4 -> 5 -> 1.
//Properly handle the case where lst is empty.
//Also, define the structure that models a node of
//a singly linked list with an integer information field

void rotate_back (node*& lst1) {
    if (lst1 == nullptr || lst1->next == nullptr) {
        return;
    }
    int head_info = lst1->info;
    node* curr = lst1;
    while (curr->next != nullptr) {
        curr->info = curr->next->info;
        curr = curr->next;
    }
    curr->info = head_info;
}

void rotate_back_2 (node*& lst1) {
    if (lst1 == nullptr || lst1->next == nullptr) {
        return;
    }

    node* old_head = lst1;
    lst1 = lst1->next; // New head is next element

    node* curr = lst1; // Start from new head
    // Get to the last element
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    curr->next = old_head;
    old_head->next = nullptr;

}

void print (node* lst1) {
    while (lst1 != nullptr) {
        cout << lst1->info << endl;
        lst1 = lst1->next;
    }
}

int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {5, b};

    node* lst1 = a;
    rotate_back(lst1);
    print(lst1);
}