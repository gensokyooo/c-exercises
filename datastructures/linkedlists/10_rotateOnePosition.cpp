#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

void rotate (node*& lst1) {

    if (lst1 == nullptr) return;
    if (lst1->next == nullptr) return;

    node* curr = lst1;
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    node* save = lst1;
    curr->next = save;
    lst1 = lst1->next;
    save->next = nullptr;
}

int main () {
    node* c = new node { 3, nullptr};
    node* b = new node { 2, c};
    node* a = new node {1, b};

    node* lst1 = a;


}
