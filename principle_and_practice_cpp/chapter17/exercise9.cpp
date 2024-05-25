//
// https://minhdang241.github.io/
// Chapter 17 - Exercise 9
//
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 11;
    if (&x - &y > 0) {
        cout << "Stack grows downward" << endl;
    } else {
        cout << "Stack grows upward" << endl;
    }
    int* p1 = new int{1};
    int* p2 = new int{1};
    if (p1 - p2 > 0) {
        cout << "Heap grows downward" << endl;
    } else {
        cout << "Heap grows upward" << endl;
    }
    return 0;
}