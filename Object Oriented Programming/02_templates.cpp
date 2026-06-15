#include <iostream>
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
        if (count < 100) {
            array[count] = element;
            count++;
        }
    }

    bool isEmpty () {
        if (count == 0) {
            return true;
        }
        return false;
    }

    T pop () {
            if (!this->isEmpty()) {
                throw runtime_error("Stack is empty, dude");
            }
            T x = array[count-1];
            count--;
            return x;
        }

    int size () {
        return count;
    }


};



