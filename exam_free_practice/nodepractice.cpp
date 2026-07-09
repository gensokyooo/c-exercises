#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;
};


void remove (node*& lst, int e) {


    while (lst != nullptr && lst->info > e) {
        // save the first node
        node* temp = lst;
        // now point the head to the one after it
        lst = lst->next;
        // delete the old head
        delete temp;
    }

    if (lst == nullptr) return;

    node* curr = lst;
    while (curr->next != nullptr) {
        if (curr->next->info > e) {
            node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
}
int main () {

}