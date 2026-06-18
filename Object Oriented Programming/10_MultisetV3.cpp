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
        count = 0;
        array = new T[capacity];
    }

    // resize
    // Rule of three: Copy constructor, assignment op, destructor
    // Multiset a (b)

    void resize () {
        int newCapacity = capacity*2;
        T* newArray = new T[newCapacity];
        for (int i = 0; i < count; i ++ ) {
            newArray[i] = array[i];
        }
         delete[]array;
        array = newArray;
        capacity = newCapacity;
    }

    Multiset (const Multiset <T>& other) {
        // Non c'è bisogno di fare array = other.array giusto?
        capacity = other.capacity;
        count = other.count;

        array = new T[capacity];

        for (int i = 0; i < count; i ++ ) {
            array[i] = other.array[i];
        }

    }

    // assignment operator
    Multiset<T>& operator=(const Multiset<T>& other) {
        if (this != &other) {
            delete[]array;
            capacity = other.capacity;
            array = new T[capacity];
            count = other.count;
            for (int i = 0; i < count; i ++) {
                array[i] = other.array[i];
            }

        }
        return *this;
    }


    bool isEmpty() const {
        if (count == 0) {
            return true;
        }
        return false;
    }

    void add (T value) {
        if (count >= capacity) {
            resize();
        }
        array[count] = value;
        count++;
    }

    int cardinality (const T& value) {
        int count_this = 0;
        for (int i = 0; i < count; i ++) {
            if (value == array[i]) {
                count_this++;
            }
        }
        return count_this;
    }

    Multiset <T> intersection (const Multiset <T>& other) const {
        Multiset <T> result;
        int min_count = 0;
        int min_current_count = 0;

        for (int i = 0; i < count; i ++) {
            int count_other = 0;
            int count_this = 0;
            bool seen = false;
            for (int y = 0; y < i; y++) {
                if (array[i] == array[y]) {
                    seen = true;
                }
            }
            if (seen) {
                continue;
            }
            for (int j = 0; j < other.count; j++) {
                if (array[i] == other.array[j]) {
                    count_other++;
                }
            }
            for (int x = 0; x < count; x++) {
                if (array[i] == array[x]) {
                    count_this++;
                }
            }

            if (count_other == 0 || count_this == 0) {
                continue;
            }
            if (count_other < count_this) {
                min_current_count = count_other;
            } else {
                min_current_count = count_this;
            }
            for (int z = 0; z < min_current_count; z++) {
                result.add(array[i]); \
            }

        }
    }

    friend ostream& operator<< (ostream& fout, const Multiset<T>& other) {
        fout << "[";
        for (int i = 0; i < other.count; i ++ ) {
            fout << other.array[i] << ",";
        }
        fout << "]";

        return fout;
    }

};

int main () {

}