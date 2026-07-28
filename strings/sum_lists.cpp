#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;
};

node* sum_lists ( node* l1, node* l2) {

    node* curr1 = l1;
    node* curr2 = l2;
    while (curr1 != nullptr && curr2 != nullptr) {
        int result = curr1->info + curr2->info;
        node* newNode = new node {result, nullptr};

    }

    if (curr1 == nullptr && curr2 != nullptr) {
        while (curr2 != nullptr) {
            node* secondNode = new node {curr2->info, nullptr};
        }
    }



}

int main () {

}