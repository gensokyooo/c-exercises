#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
private:
    T array[100];
    int capacity;
    int count;

public:
    Stack () {
        capacity = 100;
        count = 0;
    }

    void push (T element) {
        if (count < capacity) {
            array[count] = element;
            count++;
        }
    }

    T pop () {
        if (count == 0) {
            throw runtime_error ("Pile is empty");
        }
        T elem = array[count-1];
        count --;
        return elem;
    }

    bool isEmpty () const {
        if (count == 0)
            return true;
        return false;
    }

    int size () const {
        return count;
    }
};