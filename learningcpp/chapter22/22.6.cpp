//
// Created by DANG BA MINH on 01/05/2024.
//
#include <iostream>

using namespace std;

class Resource {
 private:
	int m_cores;

 public:
	Resource() {
		cout << "Resource acquired\n";
	}

	Resource(int cores)
	: m_cores{cores} {
		cout << "Resource acquired with " << m_cores << " core\n";
	}

	~Resource() {
		cout << "Resource destroyed\n";
	}
};

int main() {
	//    Resource *res{new Resource{}};
	//    shared_ptr<Resource> ptr1{res};
	auto ptr1 = make_shared<Resource>(10);
	{
		//        shared_ptr<Resource> ptr2{ptr1};
		auto ptr2{ptr1};
		cout << "Killing one shared pointer\n";
	}
	cout << "Killing another shared pointer\n";
	return 0;
}