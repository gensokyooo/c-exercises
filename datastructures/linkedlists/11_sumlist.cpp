#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

int sum (node* l, int m) {

    int zero = 0;
    if (l == nullptr) return zero;

    int sum = 0;
    node* curr = l;

    while (curr != nullptr) {
        if (curr->info % m == 0) {
            sum += curr->info;
        }
        curr = curr->next;
    }

    return sum;
}


int main () {
    node* c = new node { 3, nullptr};
    node* b = new node { 2, c};
    node* a = new node {4, b};

    node* l = a;

    int m = 2;

    int result = sum (l,m);
    cout << result;


}