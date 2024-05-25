#include <iostream>

using namespace std;
// When implement the vector class we need a container to contain values
// The container should be able to expand and access by index => using pointer

class MyVector {
    int sz;
    double* elem;
public:
    explicit MyVector(int s) : sz{s}, elem{new double[s]} {
        for (int i = 0; i < s; ++i) elem[i] = 0;
    }

    ~MyVector() {
        cout << "destructor\n";
        delete[] elem;
    }

    int size() const { return sz; }

    double get(int n) const { return elem[n]; }

    void set(int n, double v) { elem[n] = v; }

};

void sizes(char ch, int i, int* p) {
    cout << "the size of char is " << sizeof(char) << " " << sizeof(ch) << '\n';
    cout << "the size of int is " << sizeof(int) << " " << sizeof(i) << '\n';
    cout << "the size of pointer is " << sizeof(int*) << " " << sizeof(p) << '\n';
    cout << "the size of bool is " << sizeof(bool) << '\n';
}

class Base {
public:
    Base() { cout << "Base constructor\n"; }

    virtual ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }

    ~Derived() override { cout << "Derived destructor\n"; }
};

MyVector* f() {
    auto* p = new MyVector{10};
    return p;
}

struct Link {
    string value;
    Link(const string& v): value{v}{};
};

int main() {
//    MyVector v{5};
//    for (int i = 0; i < v.size(); i++) {
//        v.set(i, 1.1*i);
//        cout << v.get(i) << " ";
//    }
//    MyVector* p = f();
//    for (int i = 0; i < p->size(); i++) {
//        cout << p->get(i) << " ";
//    }
//    delete p;
    string v = "Minh";
    Link l = Link(v);
    cout << l.value << endl;
}