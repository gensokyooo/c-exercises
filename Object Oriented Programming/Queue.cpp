#include <iostream>

using namespace std;


template <typename T>
class Queue {
private:
    T array[100];
    int capacity;
    int count;

public:
    Queue () {
        capacity = 100;
        count = 0;
    }

    void enqueue (T elem) {
        // Add elem to the array
        if (count < capacity) {
            array[count] = elem;
            count++;
        } else {
            throw runtime_error("Capacity is full");
        }
    }

    T dequeue () {
        if (count == 0) {
            throw runtime_error("Array is empty");
        }

        T x = array[0];
        for (int i = 0; i < count-1; i++) {
            array[i] = array[i+1];
        }
        count--;
        return x;
    }

    bool isEmpty() {
        if (count == 0) {
            return true;
        }
        return false;
    }
    friend ostream& operator<< (ostream& fout, const Queue <T>& q) {
        fout << "[";
        for (int i = 0; i < q.count; i ++) {
            fout << q.array[i]  << "," << endl;
        }
        fout << "]";
        return fout;
    }
};



int main () {

    Queue <string> q;
    q.enqueue("Hello");
    q.isEmpty();
   cout << q;

}