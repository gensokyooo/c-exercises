#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};


node* sumofLists (node* lst1, node* lst2) {
    if (lst1 == nullptr && lst2 != nullptr) {
        return lst2;
    }
    if (lst2 == nullptr && lst1 != nullptr) {
        return lst1;
    }
    if (lst2 == nullptr && lst1 == nullptr) {
        return nullptr;
    }

    node* curr1 = lst1;
    node* curr2 = lst2;

    node* head = nullptr;
    node* tail = nullptr;

    while (curr1 != nullptr && curr2 != nullptr) {
        int sum = 0;
        sum = curr1->info + curr2->info;
        node* newNode = new node {sum, nullptr};
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // In case curr1 length > curr2 length

    while (curr2 == nullptr && curr1 != nullptr) {
        node* newNode2 = new node {curr1->info, nullptr};
        tail->next = newNode2;
        tail = newNode2;
        curr1 = curr1->next;
    }

    // In case curr2 length > curr1 length
    while (curr2 != nullptr && curr1 == nullptr) {
        node* newNode3 = new node {curr2->info, nullptr};
        tail->next = newNode3;
        tail = newNode3;
        curr2 = curr2->next;
    }

    return head;

}


void print(node* newlst) {

    while (newlst != nullptr) {
        cout << newlst->info << endl;
        newlst = newlst->next;
    }
}

int main () {
    node* b = new node { 2, nullptr};
    node* a = new node {2, b};

    node* z = new node { 2, nullptr};
    node* y = new node { 2, z};
    node* x = new node {1, y};

    node* lst1 = a;
    node* lst2 = x;

    node* newlst = sumofLists(lst1,lst2);
    print (newlst);

}