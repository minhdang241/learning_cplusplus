//
// https://minhdang241.github.io/
// Chapter 17 - Drills Part 2
//

/*
	1. Allocate an int, initialize it to 7, and assign its address to a variable p1.
	2. Print out the value of p1 and of the int it points to.
	3. Allocate an array of seven ints ; initialize it to 1, 2, 3, 4, 8, etc.; and
	   assign its address to a variable p2.
	4. Print out the value of p2 and of the array it points to.
	5. Declare an int* called p3 and initialize it with p2.
	6. Assign p1 to p2.
	7. Assign p3 to p2.
	8. Print out the values of p1 and p2 and of what they point to.
	9. Deallocate all the memory you allocated from the free store.
	10. Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign
		its address to a variable p1.
	11. Allocate an array of ten ints, and assign its address to a variable p2.
	12. Copy the values from the array pointed to by p1 into the array pointed to by p2.
	13. Repeat 10-12 using a vector rather than an array.
*/

#include <iostream>

using namespace std;

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i < n; i++) {
        os << a[i] << " ";
    }
    os << endl;
}

int main() {
    // drill 1
    int x = 7;
    int* p1 = &x;

    // drill 2
    cout << p1 << " " << *p1 << endl;

    // drill 3
    int arr[] = {1, 2, 4, 8, 16, 32, 64};
    int* p2 = arr;
    cout << p2 << " ";

    // drill 4
    print_array(cout, p2, 7);

    // drill 5
    int* p3 = p2;

    // drill 6
    p2 = p1;

    // drill 7
    p2 = p3;

    // drill 8
    cout << p1 << " " << *p1 << endl;
    cout << p2 << " ";
    print_array(cout, p2, 7);

    // drill 9
    // No need to deallocate memory because everything is on the stack

    // drill 10
    int arr2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p1 = arr2;

    // drill 11
    int arr3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    p2 = arr3;

    // drill 12
    for (int i = 0; i < 10; i++) {
        p2[i] = p1[i];
    }

    // drill 13
    vector<int> v{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int> v2(10);
    p1 = &v[0];
    p2 = &v2[0];
    for (int i = 0; i < 10; i++) {
        p2[i] = p1[i];
    }
    print_array(cout, p2, 10);

    return 0;
}