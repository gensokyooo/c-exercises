#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
private:
    T* array;
    int count;
    int capacity;

public:
    void resize () {
        int newCapacity = capacity*2;
        T* newArray = new T[newCapacity];

        for (int i = 0; i < count; i ++) {
            newArray[i] = array[i];
        }

        delete[] array;
        array = newArray;
        capacity = newCapacity;
    }

    Stack () {
        capacity = 100;
        count = 0;
    }
    // Copy constructor
    Stack (const Stack <T>& other) {
        // Copying the capacity
        capacity = other.capacity;
        count = other.count;
        // You're creating a new one from scratch
        array = new T[capacity];
        for (int i = 0; i < count; i ++) {
            array[i] = other.array[i];
        }
    }
    //Assignment operator
    Stack<T>& operator=(const Stack <T>& other) {
        if (this != &other) {
            delete[]array;

            this->count = other.count;
            this->capacity = other.capacity;
            // Creating a new array that points to a fresh address
            array = new T[capacity];

            for (int i = 0; i < count; i ++ ) {
                array[i] = other.array[i];
            }
        }

        *this;
    }

    ~Stack () {
        delete[]array;
    }

    void push (T elem) {
        array[count] = elem;
        count++;

    }
};

int main () {

}