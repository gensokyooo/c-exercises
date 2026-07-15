#include <iostream>
using namespace std;

 template <typename T>
class Insieme {
 private:
  T* array;
  int capacity;
  int count;
 public:

 //copy constructor

  Insieme (const Insieme<T>& x) {
   capacity = x.capacity;
   count = x.count;
   this->array = new T [capacity];

   for (int i = 0; i < capacity; i ++ ) {
    array[i] = x.array[i];
   }

  }

 };

int main () {

}