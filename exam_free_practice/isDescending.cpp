#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

bool isDescending (node* l) {
    if (l == nullptr) return true;


    node* prev = l;
    node* curr = l;

    while (curr->next != nullptr) {
        if (prev->info < curr->next->info) {
            return false;
        }
        curr = curr->next;
        prev = prev->next;
    }
    return true;
}

int main () {

}