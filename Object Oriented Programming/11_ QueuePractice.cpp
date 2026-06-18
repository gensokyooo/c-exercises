#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Queue {
private:
    T* array;
    int capacity;
    int count;

public:
    Queue () {
        capacity = 100;
        count = 0;
        array = new T[capacity];
    }

    void resize () {
        int newCapacity = capacity*2;
        // Why create a new array? Because we need something to fill in the elements from last array
        T* newArray = new T[newCapacity];
        for (int i = 0; i < count; i++) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        capacity = newCapacity;
    }
    // Rule of Three: Copy constructor / Assignment operator / Destructor


};

int main () {

    Queue <string> x;
    Queue <string> y = x;
    // this would essentially do:
    // y.capacity = x.capacity

}