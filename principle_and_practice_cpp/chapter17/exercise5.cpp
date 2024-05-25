//
// https://minhdang241.github.io/
// Chapter 17 - Exercise 5
//
#include <iostream>

using namespace std;

char* findx(const char* s, const char* x) {
    for (int i = 0; i <= strlen(s) - strlen(x); i++) {
        bool found = true;
        for (int j = 0; j < strlen(x); j++) {
            char c = s[i+j];
            if (c != x[j]) {
                found = false;
                break;
            }
        }
        if (found)
            return const_cast<char*>(&s[i]);
    }
    return nullptr;
}

int main() {
    string s = "hello, world";
    const char* c;
    c = findx(s.c_str(), "ll");
    cout << c << endl;
    return 0;
}

