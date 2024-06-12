//
// https://minhdang241.github.io/
// Chapter 18 - Array Drill
//
/*
    1. Define a global vector<int> gv; initialize it with ten ints, 1, 2, 4, 8, 16, etc.
    2. Define a function f() taking a vector<int> argument.
    3. In f():
        a. Define a local vector<int> lv with the same number of elements as the argument vector.
        b. Copy the values from gv into lv.
        c. Print out the elements of lv.
        d. Define a local vector<int> lv2; initialize it to be a copy of the argument
        vector.
        e. Print out the elements of lv2.
    4. In main():
        a. Call f() with gv as its argument.
        b. Define a vector<int> vv, and initialize it with the first ten factorial values
        (1, 2*1, 3*2*1, 4*3*2*1, etc.). c. Call f() with vv as its argument.
*/
#include<iostream>
#include<vector>
using namespace std;

// drill 1
vector<int> gv{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

// drill 2
void f(vector<int>&);

// drill 3
void f(vector<int>& v) {
    // drill 3a
    vector<int> lv(v.size());
    // drill 3b
    for (int i = 0; i < v.size(); i++) {
        lv[i] = v[i];
    }
    // drill 3c
    for (int i : lv) {
        cout << i << " ";
    }
    cout << endl;
    // drill 3d
    vector<int> lv2 = v;
    // drill 3e
    for (int i : lv2) {
        cout << i << " ";
    }
    cout << endl;
}


int main() {
    // drill 4
    f(gv);
    return 0;
}

