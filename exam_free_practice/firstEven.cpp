#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};


node* firstEven (node* l1) {


    if (l1 == nullptr) {
        return nullptr;
    }

    node* curr = l1;

    while (curr != nullptr) {
        if (curr->info % 2 == 0) {
            return curr;
        }
        curr = curr->next;
    }

    return nullptr;

}

int main () {

}