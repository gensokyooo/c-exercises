#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* array;
    int capacity;
    int count;
public:

    Stack () {
        capacity = 100;
        array = new T[capacity];
        count = 0;
    }

    // copy constructor

    Stack (const Stack& x) {

        this->capacity = x.capacity;
        this->count = x.count;

        this->array = new T[capacity];

        for (int i = 0; i < count; i ++ ) {
            array[i] = x.array[i];
        }


    }

    // assignment operator

    Stack& operator= (const Stack& x) {

        if (this == &x) return *this;

        this->capacity = x.capacity;
        this->count = x.count;

        delete[]array;

        array = new T[capacity];

        for (int i = 0; i < count; i ++ ) {
            array[i] = x.array[i];
        }

        return *this;

    }

    // destructor

    ~Stack () {
        delete[]array;
    }

    // resize

    void resize () {
        capacity *= 2;

        T* newArray = new T[capacity];

        for (int i = 0; i < count; i ++ ) {
            newArray[i] = array[i];
        }

        delete[]array;
        array = newArray;

    }

    //push
    void push (const T elem) {
        if (count == capacity) {
            resize();
        }

        array[count] = elem;
        count++;
    }

    //isEmpty

    bool isEmpty () const {
        if (count == 0) return true;
        return false;
    }
    //pop

    T pop () {

        if (this->isEmpty()) {
            throw runtime_error ("Empty pile");
        }
        T elem = array[count-1];
        count--;
        return elem;
    }

    //size

    int size () const {
        return count;
    }

   T& get (int index) const {
        return array[index];
    }

};
template <typename T>
ostream& operator<<(ostream& fout, const Stack<T> & other) {

    fout << "[";
    for (int i = 0; i < other.size(); i ++) {
        fout << other.get(i);
    }
    fout << "]";

    return fout;
}

int main () {


}