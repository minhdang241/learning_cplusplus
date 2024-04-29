//
// Created by DANG BA MINH on 27/04/2024.
//

#include "my.h"
#include <iostream>
using namespace std;

namespace X {
    int var;
    void print() {
        cout << var << endl;
    }
}
namespace Y {
    int var;
    void print() {
        cout << var << endl;
    }
}

namespace Z {
    int var;
    void print() {
        cout << var << endl;
    }
}

int main() {
//    foo = 7;
//    print_foo();
//    print(99);
//    double x = 7, y = 9;
//    swap_v(x, y);
//    cout << x << " " << y << endl;
//    swap_r(x, y);
//    cout << x << " " << y << endl;
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();

    return 0;
}
