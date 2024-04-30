//
// Created by DANG BA MINH on 29/04/2024.
//
#include <iostream>

using namespace std;

int main() {
//    cout << "Enter a positive number: ";
//    std::size_t size;
//    cin >> size;
//    cout << "Input a size of " << size << endl;
//    int* array{ new int[size]{}};
//    cout << array[0] << endl;
//    array[0] = 5;
//    cout << array[0] << endl;
//    delete[] array;
    cout << "How many names they wish to enter: ";
    std::size_t size;
    cin >> size;
    string* names{ new string[size]{}};
    string name;
    for (int i = 0; i < size; i++) {
        cout << "Enter name #" << i+1 << ": ";
        cin >> name;
        names[i] = name;
    }
    std::sort(names, names+size);
    cout << "\nHere is your sorted list:\n";
    for (int i = 0; i < size; i++) {
        cout << "Name #" << i+1 << ": " << names[i] << endl;
    }
    delete[] names;
    return 0;
}