#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;
};


// se lista 1 -> 2 -> 3 -> 4 -> 5
// poi diventa 2->3->4->5->1
void rotate_back (node*& lst) {

    if (lst == nullptr || lst->next == nullptr) return;

    node* last = lst;
    lst = lst->next;
    node* curr = lst;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = last;
    last->next = nullptr;


}

int main () {



}