#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

//Scrivere una funzione di tipo void di nome concat che, presi come suoi parametri due liste
// concatenate semplici l1 ed l2 i cui elementi hanno campo informazione di tipo int,
// concateni la lista l2 alla lista l1. Ad
// esempio, se l1 = f1,7g e l2 = f5,9,12g, dopo la chiamata alla funzione concat
// passando come parametri l1 ed l2, la
// lista l1 diventa f1,7,5,9,12g. Trattare in modo opportuno anche i casi in cui l1
// e/o l2 siano liste vuote. (+3pt se la
// funzione `e ricorsiva)

// we changin lst1
void concat (node*& lst1, node* lst2) {

    if (lst1 == nullptr) {
        lst1 = lst2;
        return;
    }
    if (lst2 == nullptr) {
        return;
    }

    node* curr = lst1;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = lst2;
}


int main () {

    node* c = new node { 1, nullptr};
    node* a = new node {5, c};

    node* lst1 = a;

    node* y = new node { 1, nullptr};
    node* x = new node {5, y};

    node* lst2 = x;

}