#include <iostream>

using namespace std;

class Vettore {
private:
    int* array;
    int size;

public:
    // Constructor
    Vettore (int s) {
        size = s;
        array = new int[size];

    }
    // Destructor
    ~Vettore() {
        delete[] array;
    }

    // Copy constructor
    Vettore (const Vettore& other) {
        size = other.size;
        array = new int[size];

        for (int i = 0; i < size;  i++) {
            this->array[i] = other.array[i];
        }
    }
};

int main () {
    Vettore x (10);
    Vettore y (10);
    // Here when you do y = x you're actually making y.array point to
    // the same memory as x points.
    y = x;
    // this almost looks correct but the problem is
    // That you actually would have two names for the same memory
    // Could be dangerous


}