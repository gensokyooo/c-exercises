#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};
bool equals (node* lst1, node* lst2) {

    node* curr = lst1;
    node* curr2 = lst2;

    if (lst1 == nullptr && lst2 == nullptr) return true;
    if (lst1 == nullptr || lst2 == nullptr) return false;

    while (curr != nullptr && curr2 != nullptr) {
        if (curr->info == curr2->info) {
            curr = curr->next;
            curr2= curr2->next;
        } else {
            return false;
        }
    }
    if (curr == nullptr && curr2 == nullptr) return true;

    return false;
}

int main () {
    node* b = new node { 1, nullptr};
    node* a = new node {5, b};

    node* lst1 = a;

    node* y = new node { 1, nullptr};
    node* x = new node {5, y};

    node* lst2 = x;

}