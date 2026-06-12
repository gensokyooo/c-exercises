#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Set {
private:
    T elements[100];
    int capacity;
    int count;

public:

Set () {
    capacity = 100;
    count = 0;
}


    void add (T element) {
    for (int i = 0; i < count; i++) {
        if (element == elements[i]) {
            throw runtime_error("Element already present");
            break;
        }
    }

    if (count < capacity) {
        elements[count] = element;
        count++;

    } else if (count >= capacity) {
        throw runtime_error ("Set is full");
    }
}

    bool contains (T element) {
    for (int i = 0; i < count; i++) {
        if (element == elements[i]) {
            return true;
        }
    }
        return false;
}

    int size () {
    return count;
}




};

int main () {


}