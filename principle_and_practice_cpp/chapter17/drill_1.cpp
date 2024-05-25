//
// https://minhdang241.github.io/
// Chapter 17 - Drills Part 1
//

/*
	1. Allocate an array of ten ints on the free store using new.
	2. Print the values of the ten ints to cout.
	3. Deallocate the array (using delete[]).
	4. Write a function print_array10(ostream& os, int* a) that prints out the
	values of a (assumed to have ten elements) to os.
	5. Allocate an array of ten ints on the free store; initialise it with the
	values 100, 101, 102, etc.; and print out its values.
	6. Allocate an array of 11 ints on the free store; initialise it with the
	values 100, 101, 102, etc.; and print out its values.
	7. Write a function print_array(osteam& os, int* a, int n) that prints out
	the values of a (assumed to have n elements) to os.
	8. Allocate an array of 20 ints on the free store; initialise it with the
	values 100, 101, 102, etc.; and print out it's values.
	9. Did you remember to delete the arrays? (If not, do it).
	10. Do 5, 6, and 8 using a vector instead of an array and a  print_vector()
	instead of print_array().
*/

#include <iostream>
using namespace std;

void print_array10(ostream& os, int* a) {
    for (int i = 0; i < 10; i++) {
        os << a[i] << " ";
    }
    os << endl;
}

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i < n; i++) {
        os << a[i] << " ";
    }
    os << endl;
}

void print_vector(ostream& os, const vector<int>& arr) {
    for (auto const& v: arr) {
        os << v << " ";
    }
    os << endl;
}

int main() {
    // drill 1
    int* arr = new int[10];

    // drill 2
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // drill 3
    delete[] arr;

    // drill 4
    arr = new int[10];
    print_array10(cout, arr);
    delete[] arr;

    // drill 5
    arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = 100 + i;
    }
    print_array10(cout, arr);
    delete[] arr;

    // drill 6
    arr = new int[11];
    for (int i = 0; i < 11; i++) {
        arr[i] = 100 + i;
    }
    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    // drill 7
    arr = new int[11];
    for (int i = 0; i < 11; i++) {
        arr[i] = 100 + i;
    }
    int n = 11;
    print_array(cout, arr, n);
    delete[] arr;

    // drill 8
    arr = new int[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = 100 + i;
    }
    print_array(cout, arr, 20);
    delete[] arr;

    // drill 10
    vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(100 + i);
    }
    print_vector(cout, vec);
    vector<int> vec2;
    for (int i = 0; i < 11; i++) {
        vec2.push_back(100 + i);
    }
    print_vector(cout, vec);
    vector<int> vec3;
    for (int i = 0; i < 20; i++) {
        vec3.push_back(100 + i);
    }
    print_vector(cout, vec);
    return 0;
}