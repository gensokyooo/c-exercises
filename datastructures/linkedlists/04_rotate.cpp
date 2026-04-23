#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

void rotate (node*& lst) {
    if (!lst || !lst->next) return;
    node* prev = nullptr;
    node* curr = lst;

    while (curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = nullptr;
    // 1 2 -> nullptr
    curr->next = lst;
    // 3->1->2->nullptr
    lst = curr;
}
int main () {

    node* c = new node {3, nullptr};
    node* b = new node {2,c};
    node* a = new node {1,b};

    node* lst = a;
    rotate(lst);
}