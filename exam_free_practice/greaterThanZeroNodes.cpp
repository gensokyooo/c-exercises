#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};


node* greaterThanZero (node* lst1) {

    if (lst1 == nullptr) return nullptr;

    node* curr = lst1;
    node* head = nullptr;
    node* tail = nullptr;
    while (curr != nullptr) {
        if (curr->info > 0) {
            node* newLst = new node {curr->info, nullptr};

            if (head == nullptr) {
                head = newLst;
                tail = newLst;
            } else {
                tail->next = newLst;
                tail = newLst;
            }
            curr = curr->next;
        }


    return head;

}

int main () {

}