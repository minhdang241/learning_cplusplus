//#include "../std_lib_facilities.h"
#include <iostream>

class vector {
    int sz;
    double* elem;
public:

    vector(int s) : sz{s}, elem{new double[s]} {
        std::cout << "init with s" << std::endl;
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    ~vector() {
        std::cout << "destructor\n";
        delete[] elem;
    }

    vector(std::initializer_list<double> lst) : sz{static_cast<int>(lst.size())}, elem{new double[sz]} {
        std::copy(lst.begin(), lst.end(), elem);
    }

    // copy constructor
    vector(const vector& a) : sz{a.sz}, elem{new double[a.sz]} {
        std::copy(a.elem, a.elem + sz, elem);
    }

    // move constructor
    vector(vector&& a) noexcept : sz{a.sz}, elem{a.elem} {
        std::cout << "Move constructor\n";
        a.sz = 0;
        a.elem = nullptr;
    }

    int size() const { return sz; }

    vector& operator=(const vector& a) {
        if (this == &a) return *this;
        auto* p =new double[a.sz];
        std::copy(a.elem, a.elem + a.sz, p);
        delete[] elem;
        elem = p;
        sz = a.sz;
        return *this;
    }

    vector& operator=(vector&& a)  noexcept {
        std::cout << "Move operator\n";
        delete[] elem;
        elem = a.elem;
        sz = a.sz;
        a.sz = 0;
        a.elem = nullptr;
        return *this;
    }

    void set(int n, double v) {
        elem[n] = v;
    }

    const double& operator[](int n) const {
        return elem[n];
    }
};

void print_vector(std::ostream& os, const vector& arr) {
    for (int i = 0; i < arr.size(); i++) {
        os << arr[i] << " ";
    }
    os << std::endl;
}

void f(int n) {
    vector v(3);
    v.set(2,2.2);
    vector v2 {v};
}


int main() {
//    vector v = {1,2,3};
    vector v2 = 10;
}
