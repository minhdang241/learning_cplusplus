//#include "../std_lib_facilities.h"
#include <iostream>

template<typename T>
class vector {
    int sz;
    T* elem;
    int space;
public:

    vector() : sz{0}, elem{nullptr}, space{0} {}

    explicit vector(int s) : sz{s}, elem{new T[s]}, space(s) {
        std::cout << "init with s" << std::endl;
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    ~vector() {
        std::cout << "destructor\n";
        delete[] elem;
    }

    vector(std::initializer_list<T> lst) : sz{static_cast<int>(lst.size())}, elem{new T[sz]}, space{sz} {
        std::copy(lst.begin(), lst.end(), elem);
    }

    // copy constructor, this will be called when we initialize a vector with another vector
    vector(const vector& a) : sz{a.sz}, elem{new T[a.sz]}, space{a.sz} {
        std::copy(a.elem, a.elem + sz, elem);
    }

    // move constructor
    vector(vector&& a) noexcept : sz{a.sz}, elem{a.elem}, space{a.sz} {
        std::cout << "Move constructor\n";
        a.sz = 0;
        a.elem = nullptr;
    }

    int size() const { return sz; }

    vector& operator=(const vector& a) {
        if (this == &a) return *this;
        auto* p =new T[a.sz];
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

    T& operator[](int n) {
        return elem[n];
    }

    void set(int n, T v) {
        elem[n] = v;
    }

    const T& operator[](int n) const {
        return elem[n];
    }

    int capacity() const { return space; }
    void reserve(int newalloc) {
        if (newalloc <= space) return;
        auto* p = new T[newalloc];
        for (int i = 0; i < sz; i++) {
            p[i] = elem[i];
        }
        delete[] elem;
        elem = p;
        space = newalloc;
    }
    void resize(int newsize) {
        reserve(newsize);
        for (int i = sz; i < newsize; i++) {
            elem[i] = 0;
        }
        sz = newsize;

    };
    void push_back(T d) {
        if (space == 0) {
            reserve(8);
        } else if (sz == space) {
            reserve(2 * space);
        }
        elem[sz] = d;
        sz++;
    };
};

int main() {
    std::vector<int> v{1};
    vector<int> v2 {1};
    std::cout << v[0] << std::endl;
    std::cout << v2[0] << std::endl;

}
