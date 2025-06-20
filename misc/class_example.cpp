#include <iostream>

class BaseClass {
public:
  BaseClass() {
    std::cout << "Base\n";
  }
};

class DerivedClass: public BaseClass {
public:
  DerivedClass() {
    std::cout << "Derived\n";
  }
  DerivedClass(int i) {
    std::cout << "Derived: "  << i << "\n";
  }

};


auto main() -> int {
  auto obj = DerivedClass(1);
  (void) obj;
  return 0;
}


