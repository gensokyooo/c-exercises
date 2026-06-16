#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class MultiSet {
private:
    T array[100];
    int capacity;
    int count;

public:

    MultiSet () {
        capacity = 100;
        count = 0;
    }

    void add (T elem) {
        if (count < capacity) {
            array[count] = elem;
            count++;
        }
    }

    bool contains (T elem) const {
        for (int i = 0; i < count; i ++) {
            if (elem == array[i] ) {
                return true;
            }
        }
        return false;
    }

    bool isEmpty() const {
        if (count == 0)
            return true;
        return false;
    }

    bool operator==(const MultiSet <T>& x) const {

        if (count != x.count) {
            return false;
        }
        for (int i = 0; i < count; i ++) {
            int count_this = 0;
            int count_x = 0;
            for (int j = 0; j < count; j++) {
                if (array[i] == array[j]) {
                    count_this++;
                }
                if (array[i] == x.array[j]) {
                    count_x++;
                }
            }
            if (count_this != count_x) {
                return false;
            }
        }
        return true;
    }

    friend ostream& operator << (ostream& fout, const MultiSet <T>& other) {
        fout << "[ ";
        for (int i = 0; i < other.count; i++) {
            fout << other.array[i] << ",";
        }
        fout << " ]";
        return fout;
    }

};

int main () {

    MultiSet <string> hello;

    hello.add("Hello");
    cout << hello;
}