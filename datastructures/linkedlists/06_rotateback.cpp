#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};



int main () {
    node* c = new node { 1, nullptr};
    node* a = new node {5, c};

    node* lst1 = a;
}