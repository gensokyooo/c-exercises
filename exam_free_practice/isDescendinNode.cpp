#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

bool isDescending (node* lst1) {

    if (lst1 == nullptr) return true;

    node* curr = lst1;
    while (curr -> next != nullptr) {
        if (curr->info <= curr->next->info) {
            return false;
        }
        curr = curr->next;
    }

    return true;
}


int main () {

}