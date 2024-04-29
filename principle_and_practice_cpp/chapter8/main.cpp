#include "../../std_lib_facilities.h"

int main() {
    vector<int> vi(10);
    vector<int> &vi_ref = vi;
    int i = 0;
    int &i_ref = i;  // This is the reference to i
    char a[] = "123";
    char (&a_ref)[4] = a;

    for (auto v: vi) {
        cout << v << endl;
    }

    cout << "hello\n";
}