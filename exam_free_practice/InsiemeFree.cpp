#include <iostream>
using namespace std;

template <typename T>
class Insieme {
    T* elements;
    int capacity;
    int count;

public:
    Insieme () {
        capacity = 100;
        count = 0;
        elements = new T[capacity];
    }
    ~Insieme () {
        delete[]elements;
    }

    void resize () {
        int newCapacity = capacity*2;

        T* newElements = new T[newCapacity];

        for (int i = 0; i < count; i ++) {
            newElements[i] = elements[i];
        }

        delete[]elements;
        elements = newElements;
        capacity = newCapacity;
    }

    void add (const T& elem) {
        if (count == capacity) {
            resize();
        }

        for (int i = 0; i < count; i ++) {
            if (elem == elements[i]) {
                throw runtime_error ("element already present");
            }
        }

        elements[count] = elem;
        count++;
    }

    bool contains (const T& elem) {
        for (int i = 0; i < count; i ++) {
            if (elem == elements[i]) {
                return true;
            }
        }
        return false;
    }

    int size () {
        return count;
    }

    Insieme operator+ (const Insieme& other) {
        Insieme x;

        for (int i = 0; i < count; i ++) {
            x.add(this->elements[i]);
        }
        for (int i = 0; i < other.count; i ++) {
            if (!x.contains(other.elements)) {
                x.add(other.elements[i]);
            }
        }

        return x;
    }

};

int main () {

}