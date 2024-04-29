#include "../principle_and_practice_cpp/std_lib_facilities.h"
#include "macros.h"

template<typename T>
void print(T value) {
    cout << value << endl;
}

int main() {
    int i = 1;
    int &a = i;
    cout << a << " " << i << endl;
    int sz(10.0);
    cout << sz << endl;
    return 0;
}
