#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* array;
    int capacity;
    int count;

    Stack () {
        capacity = 100;
        count = 0;
        array = new T[capacity];
    }

    // copy operator
    Stack (Stack<T>& x) {

        this->capacity = x.capacity;
        this->count = x.count;

        this->array = new T[capacity];
        for (int i = 0; i < count; i ++) {
            array[i] = x.array[i];
        }
        // copy constructor: no checks and no returns

        // assignment operator: checks and returns

    }


};

int main () {

}