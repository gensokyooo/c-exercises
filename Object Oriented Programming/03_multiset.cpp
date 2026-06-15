#include <iostream>
using namespace std;


template <typename T>

class MultiSet {
private:
    T insieme[100];
    int capacity;
    int count;

public:
    MultiSet() {
        capacity = 0;
        count = 0;
    }

    void add (T element) {
        if (count < 100) {
            insieme[count] = element;
            count++;
        }
    }

    // TODO: fix this stuff
    void remove (T elem) {

    for (int i = 0; i < count; i ++){
        if (insieme[i] != elem) {

};

