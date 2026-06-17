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
        delete[]array;
        array = newArray;
        capacity = newCapacity;
    }

    // Copy constructor
    Multiset (const Multiset<T>& other) {

        capacity = other.capacity;
        count = other.count;
        array = new T[capacity];
        for (int i = 0; i < count; i++) {
            array[i] = other.array[i];
        }
    }
    // Assignment operator

    Multiset<T>& operator= (const Multiset<T>& other) {
        if (this != &other) {

            capacity = other.capacity;
            count = other.count;
            T* newArray = new T[capacity];
            for (int i = 0; i < count; i++) {
                newArray[i] = other.array[i];
            }
            delete[]array;
            array = newArray;
        }
        return *this;

    }
    // Destructor

    void add (T elem) {
    if (count >= capacity) {
        resize();
}
    array[count] = elem;
    count++;
}
    bool contains (const T elem) const {
    for (int i = 0; i < count; i ++) {
    if (elem == array[i]) {
        return true;
    }
}
return false;
}
    bool isEmpty () const {
    if (count == 0)
    return true;
return false;
}

bool operator==(const Multiset <T>& other) const {

    if (count != other.count) {
        return false;
       }

    for (int i = 0; i < count; i ++) {
        int count_this = 0;
        int count_other = 0;
        for (int j = 0; j < count; j++) {
        if (array[i] == array[j]) {
            count_this++;
                    }
       if (array[i] == other.array[j]) {
        count_other++;
                }
            }
if (count_this != count_other) {
        return false;
            }
        }
        return true;
       }

    friend ostream& operator<<(ostream& fout , const Multiset <T>& other) {
        fout << "[";
        for (int i = 0; i < other.count; i ++ ) {
        fout << other.array[i] << ",";
           }
            fout << "]";
        return fout;
        }

};