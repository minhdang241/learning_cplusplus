//
// Created by DANG BA MINH on 01/05/2024.
//
#include <iostream>

using namespace std;

template<typename T>
class Auto_ptr1 {
private:
    T* m_ptr{}; // nullptr
public:
    Auto_ptr1(T* ptr = nullptr) : m_ptr(ptr) {
    }

    // Move constructor
    // Transfer ownership
    Auto_ptr1(Auto_ptr1&& a) noexcept {
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
    }

    // Copy constructor
    // Do deep copy of a.m_ptr to m_ptr
    Auto_ptr1(Auto_ptr1& a) {
        m_ptr = new T{};
        *m_ptr = *a.m_ptr;
    }

    ~Auto_ptr1() {
        delete m_ptr;
    }

    Auto_ptr1& operator=(const Auto_ptr1& a) {
        if (&a == this) return *this;

        delete m_ptr;
        m_ptr = new T{};
        *m_ptr = *a.m_ptr;
        return *this;
    }

    Auto_ptr1& operator=(Auto_ptr1&& a) {
        if (&a == this) return *this;
        delete m_ptr;
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this;
    }

    T& operator*() const { return *m_ptr; }

    T* operator->() const { return m_ptr; }

    bool isNull() const { return m_ptr == nullptr; };
};

class Resource {
public:
    Resource() {
        cout << "Resource acquired\n";
    }

    ~Resource() {
        cout << "Resource destroyed\n";
    }

    void sayHi() {
        cout << "Hi\n";
    }
};

Auto_ptr1<Resource> generateResource() {
    Auto_ptr1<Resource> res {new Resource{}};
    return res;
}

int main() {
    Auto_ptr1<Resource> mainres;
    mainres = generateResource();
    return 0;
}