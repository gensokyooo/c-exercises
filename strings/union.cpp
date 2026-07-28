#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

node* unionn (node* l1, node* l2) {


    // filter first one
    node* curr = l1;
    node* head = nullptr;
    node* tail = nullptr;
    node* curr_new1 = head;

    while (curr != nullptr) {
        bool match = false;
        curr_new1 = head;
        while (curr_new1 != nullptr) {
            if (curr->info == curr_new1->info) {
                match = true;
            }
            curr_new1 = curr_new1->next;
        }
        if (!match) {
            node* newNode = new node {curr->info, nullptr};

            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        curr = curr->next;
    }
    // Filter second one
    node* curr2 = l2;
    node* head2 = nullptr;
    node* tail2 = nullptr;
    node* curr_new2 = head2;
    while (curr2 != nullptr) {
        bool match2 = false;
        curr_new2 = head2;
        while (curr_new2 != nullptr) {
            if (curr2->info == curr_new2->info) {
                match2 = true;
            }
            curr_new2 = curr_new2->next;
        }

        if (!match2) {
            node* newNode2 = new node {curr2->info, nullptr};

            if (head2 == nullptr) {
                head2 = newNode2;
                tail2 = newNode2;
            } else {
                tail2->next = newNode2;
                tail2 = newNode2;
            }
        }

        curr2 = curr2->next;
    }

    // Unite them
    tail->next = head2;

    // Remove


}

int main () {


}