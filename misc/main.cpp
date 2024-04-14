#include "../std_lib_facilities.h"
#include "macros.h"

int f(int& x) {
    return x;
}

int main() {
//    FATAL("critical error occurred!");
//    ASSERT(1 == 2, "1 is not equal to 2!");
    int v = 1;
    int* p = &v;
    int& r = v;
    cout << f(r) << endl;
    cout << p << endl;
    cout << r << endl;
}
