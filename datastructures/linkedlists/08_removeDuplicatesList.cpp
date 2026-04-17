#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

node* removeDuplicates (node* head) {
    if (head == nullptr) return nullptr;
    // ==========================================================================================
    node* curr = head;
    node* newHead = nullptr;
    node* tail = nullptr;

    while (curr != nullptr) {
        bool flag = false;
        node* check = newHead;
        while (check != nullptr) {
            if(curr->info == check->info) {
                flag = true;
                break;
            }
            check = check->next;
        }

        // ==========================================================================================
        if (flag) {
            curr = curr->next;
            continue;
        }
        // ==========================================================================================

        if (!flag) {
            node* newNode = new node {curr->info, nullptr};

            if (newHead == nullptr) {
                newHead = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }

            // ==========================================================================================


            curr = curr->next;
        }
    }
    return newHead;
    // ==========================================================================================
}


int main () {
    node* c = new node { 1, nullptr};
    node* b = new node { 2, c};
    node* a = new node {2, b};

    node* head = a;


}
