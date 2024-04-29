#include "../../std_lib_facilities.h"

class Bad_area {};
int area(int length, int width) {
    if (length <= 0 || width <= 0) throw Bad_area{};
    return length * width;
}

int main() {
    int l, w;
    cin >> l >> w;
    try {
        cout << area(l, w) << "\n";
    } catch (Bad_area) {
        cout << "Oops! Bad arguments to area()\n";
    }
    return 0;
}
