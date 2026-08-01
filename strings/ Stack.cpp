#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* array;
    int capacity;
    int count;

    void resize () {
        capacity *= 2;
       T* newArray = new T[capacity];
        for (int i = 0; i < count; i++) {
            newArray[i] = array[i];
        }
        delete[]array;
        array = newArray;
    }




    void push (T elem) {
        array[count] = elem;
        count++;
    }

    bool isEmpty () const {
        if (count == 0) {
            return true;
        }
        return false;
    }

    T pop () {
        if (isEmpty()) {
            throw runtime_error ("these nuts");
        }
        T elem = array[count-1];
        count--;
        return elem;
    }

    int size () const {
        return count;
    }

    T& getElement (int index) const {
        return array[index];
    }

};
// operator <<
template <typename T>
ostream& operator<< (ostream& fout,const Stack<T>& other) {
    fout << "[";
    for (int i =0 ; i < other.size(); i++) {
        fout << other.getElement(i) << " , ";
    }
    fout << "]";
    return fout;
}

int main () {

}