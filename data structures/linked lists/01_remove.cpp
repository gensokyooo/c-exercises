#include <iostream>
using namespace std;


void remove (node*& head, int e) {

    // Checking the head
    while (head != nullptr && head->info > e) {
        // Saving the node to remove
        node* tmp = head;
        // Moving forward, here head could become nullptr
        head = head->next;
        delete tmp;
    }
    // Head here could still be nullptr
    if (head == nullptr) {
        return;
    }

    // Checking the middle, we already know the head is safe
    node* curr = head;
    while (curr->next != nullptr) {
        if (curr->next->info > e) {
            node* tmp = curr->next;
            curr->next = curr->next->next;
            delete tmp;
        } else {
            curr = curr->next;
        }
    }

}


int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {5, b};

    int e = 2;
    node* head = a;
}