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
        Queue (const Queue <T>& other) {
            capacity = other.capacity;
            count = other.count;
            array = new T[capacity];

            for (int i = 0; i < count; i ++ ) {
                array[i] = other.array[i];
            }
    }
    // assignment operator
    Queue<T>& operator= (const Queue<T>& other) {
        if (this != &other) {
            capacity = other.capacity;
            count = other.count;
            T* newArray = new T[capacity];
            for (int i = 0; i < count; i ++) {
                newArray[i] = other.array[i];
            }
            delete[]array;
            array = newArray;
        }
        return *this;
    }

    void enqueue (const T elem) {
        if (count >= capacity) {
            resize();
        }
        array[count] = elem;
        count++;
    }

    T dequeue (const T elem) {
        if (count == 0) {
            throw runtime_error("Empty array");
        }
        T x = array[count];
        count--;
        return x;
    }

    bool isEmpty () const {
        if (count == 0) {
            return true;
        }
        return false;
    }

    friend ostream& operator<< (ostream& fout, const Queue<T>& other) {

        for (int i = 0; i < other.count; i ++) {
            fout << other.array[i];
    }

};

int main () {

    Queue <string> x;
    Queue <string> y;
    // assignment operator
    y = x;

}