#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>

class Set {
private:
    T* elementi[100];
    int n;
    int capacity;

    void expand () {
        capacity *= 2;
        T* nuovo = new T[capacity];
        for (int i = 0; i < n; i++) {
            nuovo[i] = this->elementi[i];
        }

        delete[] this->elementi;
        this->elementi = nuovo;
    }

public:
    Set () {
        n = 0;
        capacity = 10;
        elementi = new T[capacity];
        }

    ~Set() {
        delete[] elementi;
    }


    void add (const T& element)  {

        for (int i = 0; i < n; i++) {
            if (element == element[i]) {
                throw runtime_error("Element already present");
            }
        }

         if (n == capacity)
             expand();

        elementi[n] = element;
        n++;
    }

    bool contains (const T& element) {
        for (int i = 0; i < n; i++) {
            if (element == element[i]) {
                return true;
            }
        }
        return false;
    }

    int size () const {
        return n;
    }

    Set operator-(const Set& x) const {
        Set nuovoSet;

       for (int i = 0; i < n; i++) {
           if (x.contains(this->elementi[i])) {
               nuovoSet.add(elementi[i]);
           }
       }
        return nuovoSet;
    }
};

int main () {

}