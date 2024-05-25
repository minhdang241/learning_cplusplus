//
// https://minhdang241.github.io/
// Chapter 17 - Exercise 4
//
#include <iostream>

using namespace std;

char* strdup(const char* s) {
    char* p = new char[strlen(s) + 1];
    for (int i = 0; s[i] != '\0'; i++) {
        p[i] = s[i];
    }
    return p;
}


int main() {
    char message[] = "Hello, World!";
    auto* p = strdup(message);
    cout << p << endl;
    delete[] p;
    return 0;
}

