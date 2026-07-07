#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    T* elements;
    int capacity;
    int count;

public:
    Queue () {
        capacity = 100;
        count = 0;
        elements = new T[capacity];
    }

    void resize () {
        int newCapacity = capacity*2;
        T* newElements = new T[newCapacity];

        for (int i = 0; i < count; i ++) {
            newElements[i] = elements[i];
        }
        // Free up the space to reuse
        delete[]elements;
        // We need the new capacity
        elements = newElements;
        // Update capacity
        capacity = newCapacity;
    }

    void enqueue (const T& elem) {
        if (count == capacity) {
            resize();
        }
        elements[count] = elem;
        count++;
    }

    T dequeue () {
        if (count == 0) {
            throw runtime_error ("Coda vuota");
        }
        T x = elements[0];
        for (int i = 0; i < count-1; i ++) {
            elements[i] = elements[i+1];
        }
        count--;
        return x;
    }

    bool isEmpty () const {
        if (count == 0) {
            return true;
        }
        return false;
    }

    friend ostream& operator<< (ostream& fout, const Queue <T>& other) {
        fout << "[";
        for (int i = 0; i < other.count; i++) {
            fout << other.elements[i] << ", ";
        }
        fout << "]";
        return fout;
    }

    ~Queue () {
        delete[]elements;
    }
};

int main () {

}