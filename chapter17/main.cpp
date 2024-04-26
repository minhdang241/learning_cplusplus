#include <iostream>

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr);
    std::cout << "Size of the array: " << size << std::endl; // Output: 20

    int length = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Length of the array: " << length << std::endl; // Output: 5
    return 0;
}