//
// https://minhdang241.github.io/
// Chapter 18 - Exercise 1
//
#include <iostream>
using namespace std;

char* strdup(const char* s) {
    const char* tmp = s;
    int n = 0;
    while (*tmp != '\0') {
        n++;
        tmp++;
    }
    char* p = new char[n];
    char* q = p;
    while (*s != '\0') {
        *(p++) = *(s++);
    }
    return q;
}

char* findx(const char* s, const char* x) {
    const char* tmp = s;
    while (*tmp != '\0') {
        if (*tmp == *x) {
            const char* p = tmp;
            const char*q = x;
            bool is_match = true;
            while (*p != '\0' && *q != '\0') {
                if (*p == *q) {
                    p++;
                    q++;
                } else {
                    is_match = false;
                    break;
                }
            }
            if (is_match) {
                return const_cast<char*>(tmp);
            }
        }
        tmp++;
    }
    return nullptr;
}

int strcmp(const char* s1, const char* s2) {
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char* p = strdup("Hello, World!");
    cout << p << endl;
    delete[] p;

    p = findx("Hello, World!", "World");
    cout << p << endl;

    cout << strcmp("Hello", "Hello") << endl;
    cout << strcmp("Hello1123", "Hello") << endl;
    cout << strcmp("Hello", "Hello Minh") << endl;

    return 0;
}
