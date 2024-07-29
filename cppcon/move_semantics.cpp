//
// Created by DANG BA MINH on 18/07/2024.
//

#include<vector>
#include<iostream>

using namespace std;

auto fun(const vector<int>& a) -> void {
    for (const auto& v: a) {
        cout << v << endl;
    }

}

auto fun(vector<int>&& a) -> void {
    a.push_back(5);
    for (const auto& v: a) {
        cout << v << endl;
    }
}

int main() {
    fun({1, 2, 3, 4});
    return 0;
}
