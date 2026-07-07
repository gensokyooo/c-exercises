#include <iostream>
using namespace std;

template <typename T>
class Multiset {
private:
    T* elem;
    int capacity;
    int count;

public:
    Multiset() {
        capacity = 100;
        elem = new T[capacity];
        count = 0;
    }

    void resize () {
        int newCapacity = capacity * 2;
        T* newElem = new T[capacity];
        for (int i = 0; i < capacity; i++) {
            newElem[i] = elem[i];
        }
        delete[]elem;
        elem = newElem;
        capacity = newCapacity;
    }

    void add (T x) {
        if (count == 100) {
            resize();
        }
       elem[count] = x;
        count++;
    }

    void remove (T x) {

    }

    bool isEmpty () const {
        if (count == 0) {
            return true;
        }
        return false;
    }

    int cardinality (T x) const {
        int occorrenze = 0;
        for (int i = 0; i < count; i ++) {
            if (x == elem[i]) {
                occorrenze++;
            }
        }
        return occorrenze;
    }

    friend ostream& operator<<(ostream& fout, Multiset<T>& other) {
        fout << "[";
        for (int i = 0; i < other.count; i++) {
            fout << other.elem[i] << ", ";
        }
        fout << "]";
        return fout;
    }

};


int main () {

}