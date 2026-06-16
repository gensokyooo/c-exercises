#include <iostream>
#include <map>

using namespace std;

int main () {

    // HOW TO MAKE MAPS
    map <string, int> ages;
    // They work with keys and values
    ages["Emilia Romagna"] = 21;
    ages["Geova"] = 22;
    // "Emilia Romagna" = key
    // 21 = value

    // Access by key:

    cout << ages["Marco"];


    // To access or print them, most common is range-based loop:
    for (auto x: ages) {
        cout << x.first << endl;
    }

}