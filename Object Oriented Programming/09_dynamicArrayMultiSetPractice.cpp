#include <iostream>
#include <stdexcept>
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
    // Metodo per espandere capacità
    void resize () {
        int newCapacity = capacity*2;
        T* newArray = new T[newCapacity];
        for (int i = 0; i < count; i ++) {
            newArray[i] = array[i];
        }
        // First you revoke access to the stuff in the old array
        delete[]array;
        // You reassign access to the one we just filled up with the elements of the old one
        array = newArray;
        capacity = newCapacity;
    }
};