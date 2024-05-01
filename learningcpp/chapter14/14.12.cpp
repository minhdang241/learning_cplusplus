//
// Created by DANG BA MINH on 01/05/2024.
//
#include <iostream>
#include <string_view>
#include <string>

using namespace std;

class Employee {
private :
    string m_name{};
    int m_id{0};
public:
    int age;

    Employee(string_view name) : Employee{name, 0} {
        // The constructor can only delegate or initialize, not both.
    }

    Employee(string_view name, int id) : m_name{name}, m_id{id} {
        cout << "Employee " << m_name << " created\n";
    }
};

int main() {
    Employee e1{"James"};
    auto* e2 = new Employee{"Dave", 42};
    delete e2;
    return 0;
}
