#include <iostream>
using namespace std;

template <typename T>
class Multiset {
private:
    T* array;
    int capacity;
    int count;
public:
    Multiset () {
        capacity = 100;
        array = new T[capacity];
        count = 0;
    }

    void resize () {

        int newCapacity = capacity * 2;
        T* newArray = new T[newCapacity];
        for (int i = 0; i < count; i ++ ) {
            newArray[i] = array[i];
        }

        delete[]array;
        array = newArray;
        capacity = newCapacity;

    }

    void add (T elem ) {

        if (count == capacity) {
            resize();
        }

        array[count] = elem;
        count++;
    }

    void remove (T elem) {
        if (count == 0) {
            throw runtime_error ("empty multiset");
        }

        int temp = 0;
        for (int i = 0; i < count; i ++) {
            if (elem != array[i] ) {
                array[temp] = array[i];
                temp++;
            }
        }

        count = temp;

    }

};

int main () {

}