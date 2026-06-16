#include <iostream>
using namespace std;

template <typename K, typename V>
class Map {
private:
    K key [100];
    V value [100];
    int count;
    int capacity;
public:
    Map () {
        capacity = 100;
        count = 0;
    }
    void insert (const K& key, const V& value) {
            // We don't check for capacity here because we're only updating a value
            for (int i = 0; i < count; i ++ ) {
                if (key == this->key[i]) {
                    this->value[i] = value;
                    // We return because asap you found the value you must not continue
                    // adding (like going to the code right outside the loop)
                    return;
                }
            }
            if (count < capacity) {
            this->key[count] = key;
            this->value[count] = value;
            count++;
        } else {
            throw runtime_error ("Capacity reached");
        }
    }

    bool contains (const K& key) const {
        for (int i = 0; i < count; i ++ ) {
            if (key == this->key[i]) {
                return true;
            }
        }
        return false;
    }

    bool isEmpty () const {
        if (count == 0)
            return true;
        return false;
    }

    void remove (const K& key) {
        for (int i = 0; i < count; i ++) {
            if (this->key[i] == key) {
                for (int j = i; j < count-1; j++) {
                    this->key[j] = this->key[j+1];
                    this->value[j] = this->value[j+1];
                }
                count--;
                return;
            }
        }
        throw runtime_error ("Chiave non trovata");
    }

    int size () const {
        return count;
    }
};

int main () {

}