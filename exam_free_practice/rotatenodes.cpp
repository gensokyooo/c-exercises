#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

void rotate (node*& lst) {
    if (lst == nullptr || lst->next == nullptr) {
        return;
    }

    node* curr = lst;
    node* last = lst;
    while (last->next != nullptr) {
        last = last->next;
    }
    if (lst->next->next != nullptr) {
        while (curr->next->next != nullptr) {
            curr = curr->next;
        }
        curr->next = nullptr;

    }
    last->next = lst;
}

int main () {

}