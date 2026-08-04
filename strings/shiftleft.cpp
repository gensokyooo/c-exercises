#include <iostream>
using namespace std;


struct node {
    int info;
    node* next;

};

node* sumlists (node* lst1, node* lst2) {

    node* curr2 = lst2;
    node* curr = lst1;
    node* head = nullptr;
    node* tail = nullptr;




    while (curr != nullptr && curr2 != nullptr) {
        int result = curr->info + curr2->info;

        node* newNode = new node {result,nullptr};
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        curr = curr->next;
        curr2 = curr2->next;
    }



}

int main () {


}