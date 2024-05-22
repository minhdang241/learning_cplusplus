//
// Created by DANG BA MINH on 01/05/2024.
//
#include <iostream>
#include <memory>

using namespace std;

class Resource {
public:
    Resource() { cout << "Resource acquired\n"; }

    ~Resource() { cout << "Resource destroyed\n"; }

    void sayHi() {
        cout << "Hello World!\n";
    }
};

int main() {
    unique_ptr<Resource> res{new Resource{}};
    unique_ptr<Resource> res2{};
    unique_ptr<Resource> res3 = nullptr;
//    cout << "res is " << (res ? "not null\n": "null\n");
//    cout << "res2 is " << (res2 ? "not null\n": "null\n");
//    res2 = move(res);
//    cout << "res is " << (res ? "not null\n": "null\n");
//    cout << "res2 is " << (res2 ? "not null\n": "null\n");
//    res2->sayHi();
    string s = "abc";
    cout << s.substr(0,1) <<endl;
    return 0;
}