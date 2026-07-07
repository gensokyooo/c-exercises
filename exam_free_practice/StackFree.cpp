#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T* elements;
    int capacity;
    int count;
public:
    Stack () {
        capacity = 100;
        int count = 0;
        elements = new T[capacity];
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

    void push (const T& elem) {
        if (count == capacity) {
            resize();
        }

        elements[count] = elem;
        count++;
    }

    bool isEmpty () const {
        if (count == 0) {
            return true;
        }
        return false;
    }
    ~Stack () {
        delete[]elements;
    }

    T pop () {

        if (this->isEmpty()) {
            throw runtime_error ("Pila è vuota");
        }

        T x = elements[count-1];
        count--;
        return x;
    }

    int size () const {
        return count;
    }

    friend ostream& operator<< (ostream& fout, const Stack <T>& x) {
        fout << "[";
        for (int i = 0; i < x.count; i ++) {
            fout << x.elements[i] << ",";
        }
        fout << "]";
        return fout;
    }


};

int main () {

}