//
// Created by DANG BA MINH on 27/04/2024.
//

#include "my.h"
#include "../../../std_lib_facilities.h"
int foo;
void print_foo() {
    cout << foo << endl;
}

void print(int i) {
    cout << i << endl;
}

void swap_v(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_r(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

}
//void swap_v(const int& a, const int& b) {
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}

