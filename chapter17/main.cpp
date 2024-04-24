#include <iostream>

using namespace std;


int main() {
    int num = 10;
    int* ptr = &num;
    cout << "Original value: " << num << endl;
    cin >> *ptr;
    cout << "Modified value: " << num << endl;
    return 0;
}
