//
// Created by DANG BA MINH on 01/05/2024.
//
#include <string_view>
#include <iostream>
#include <string>

using namespace std;

class Employee {
 private:
	string m_name{};
	int m_id{0};

 public:
	explicit Employee(string_view name)
	: Employee{name, 0} {
		// The constructor can only delegate or initialize, not both.
	}

	Employee(string_view name, int id)
	: m_name{name}
	, m_id{id} {
		cout << "Employee " << m_name << " created\n";
	}

	Employee() = default;

	string get_name() const {
		return m_name;
	}

	int get_id() const {
		return m_id;
	}
};

int main() {
	Employee e1{"James"};
	auto* e2 = new Employee{"Dave", 42};
	delete e2;
	auto default_e = Employee();
	cout << default_e.get_name() << " " << default_e.get_id() << endl;
	unordered_map<char, int> m = {{'a', 1}, {'b', 2}, {'c', 3}};

	return 0;
}
