#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};


node* removeDuplicates (node* lst1) {


    node* curr = lst1;
    node* head = nullptr;
    node* tail = nullptr;
    while (curr != nullptr) {
        int count = 0;
        node* curr2 = lst1;
        while (curr2 != nullptr) {
            if (curr->info == curr2->info) {
                count++;
            }
            curr2 = curr2->next;
        }
        if (count == 1) {
            node* newLst = new node {curr->info, nullptr};

            if (head == nullptr) {
                head = newLst;
                tail = newLst;
            } else {
                tail->next = newLst;
                tail = newLst;
            }
        }
        curr = curr->next;
    }

    return head; 

}

    int main () {

    }