//
// Created by DANG BA MINH on 29/04/2024.
//
#include <iostream>

using namespace std;
class IntArray {
private:
    int* m_array = nullptr;
    int m_length;
    const int test;
public:
    IntArray(int length): test(length) {
        assert(length > 0);
        m_length = length;
        m_array = {new int[static_cast<std::size_t>(length)]{}};
    }
    ~IntArray() {
        delete[] m_array;
    }

    void setValue(int index, int value) {
        m_array[index] = value;
    }
    int getValue(int index) {
        return m_array[index];
    }
    int getLength() {
        return test;
    }
};
int main() {
    IntArray ar(10);
    for (int count = 0; count < ar.getLength(); count++) {
        ar.setValue(count, count+1);
    }
    cout << "The value of element 5 is: " << ar.getValue(5) << endl;
    return 0;
}