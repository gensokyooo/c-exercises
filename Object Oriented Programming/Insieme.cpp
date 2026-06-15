#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Insieme {
private:
    T array[100];
    int capacity;
    int count;

public:
    Insieme () {
        capacity = 100;
        count = 0;
    }

    void add (T elem) {
        for (int i = 0; i < count; i++) {
            if (array[i] == elem) {
                throw runtime_error("Elem already present in array");
            }
        }

        if (count < capacity) {
            array[count] = elem;
            count++;
        }

    }

    bool contains (T elem) const {
        for (int i = 0; i < count; i++) {
            if (array[i] == elem) {
                return true;
            }
        }
        return false;
    }

    int size () const {
        return count;
    }

    Insieme operator+ (Insieme <T>& x) const {
        Insieme <T> newObject;
        for (int i = 0; i < count; i++ ) {
            if (!newObject.contains(array[i])) {
                newObject.add(this->array[i]);
            }
        }

        for (int j = 0; j < x.count; j++) {
            if (!newObject.contains(x.array[j])) {
                newObject.add(x.array[j]);
            }
        }

        return newObject;
    }
};

int main () {

}