#include <iostream>

using namespace std;

int main() {
//    char greeting[] = "Hello, world!";
//    cout << greeting << endl;
//    greeting[7] = 'C';
//    cout << greeting << endl;
//    cout << sizeof(greeting) << endl;
//    string message = "Hello, world!";
//    cout << sizeof(message) << endl;
//    cout << message.size() << endl;
//    cout << message << endl;
//    message += " Welcome to C++!";
//    cout << message << endl;
//    string fullName;
//    cout << "Enter your full name\n";
//    getline(cin, fullName);
//    cout << fullName << endl;
//    std::cout << "Enter your age: ";
//    int age;
//    std::cin >> age;
//    cin.ignore();
//
//    std::cout << "Now enter your name: ";
//    std::string name;
//    std::getline(std::cin, name);
//
//    std::cout << "Hello, " << name << " and your age: " << age << '\n';
//
    int number = 42;
    int &ref = number; //create a "ref" link and associate it with the "number" variable

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    ref = 100;

    std::cout << "New value of number: " << number << std::endl;
    std::cout << "New value of ref: " << ref << std::endl;


    int a[] = {1, 2, 3};
    int (&b)[3] = a;
    cout << b[0]  << endl;

    return 0;
}