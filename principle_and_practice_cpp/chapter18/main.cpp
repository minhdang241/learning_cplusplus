//#include "../std_lib_facilities.h"
#include <iostream>

class Foo {
private:
    int m_x{};
    int m_y{};
public:
    Foo(int x, int y) : m_x{x}, m_y{y} {
        std::cout << "Foo(" << x << ", " << y << ") constructed\n";
    }

    void print() const {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

class vector {
    int sz;
    double *elem;
public:
    int size() { return sz; }

    explicit vector(int s) : sz{s}, elem{new double[s]} {
        std::cout << "init with s" << std::endl;
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    vector(std::initializer_list<double> lst) : sz{static_cast<int>(lst.size())}, elem{new double[lst.size()]} {
        std::cout << "init with lst" << std::endl;
        std::copy(lst.begin(), lst.end(), elem);
    }

    vector &operator=(const vector &a) {
        auto p = new double[a.sz];
        std::copy(a.elem, a.elem + a.sz, p);
        delete[] elem;
        elem = p;
        sz = a.sz;
        return *this;
    }
};

int main() {
    vector v1(4);
    vector v2{4};
    std::cout << "v1.sz = " << v1.size() << std::endl;
    std::cout << "v2.sz = " << v2.size() << std::endl;
}
