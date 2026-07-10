#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

void concat (node* l1, node* l2) {

    if (l2 == nullptr) {
        return;
    }

    if (l1 == nullptr) {
        l1 = l2;
        return;
    }

    node* curr = l1;

    while (curr -> next != nullptr) {
        curr = curr->next;
    }

    curr->next = l2;

}

int main () {

}