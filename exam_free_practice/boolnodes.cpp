#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

bool equals (node* l1, node* l2) {

    if (l1 == nullptr && l2 == nullptr) return true;

    node* curr = l1;
    node* curr2 = l2;

    node* curr_1 = l1;
    node* curr_2= l2;

    int count_1 = 0;
    int count_2 = 0;

    while (curr != nullptr) {
        count_1++;
        curr = curr->next;
    }
    while (curr2 != nullptr) {
        count_2++;
        curr2 = curr2->next;
    }

    if (count_1 != count_2) return false;

    while (curr_1 != nullptr && curr_2 != nullptr) {
        if (curr_1->info != curr_2-> info) {
            return false;
        }

        curr_1 = curr_2->next;
        curr_2 = curr_2->next;
    }

    return true;
}

int main () {

}