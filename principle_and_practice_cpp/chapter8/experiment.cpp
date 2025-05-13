#include "../std_lib_facilities.h"
#include <cassert>

auto gob = 1;
auto bad() -> int { return gob; }

auto overload(int a, int b) -> void {
  cout << "integer " << a << " " << b << endl;
}
auto overload(double a, double b) -> void {
  cout << "double " << a << " " << b << endl;
}

auto f(int a, int &r, int const &cr) -> void {
  ++a;
  ++r;
  cout << cr << endl;
}

int main() {
  cout << bad() << endl;
  int i = 1;
  f(1, i, 3);
  assert(i == 2);

  overload(1, 1);     // OK
  overload(1.1, 1.1); // OK
                      // overload(1, 1.1); // ERROR: Ambiguous
                      // vector<int> vi(10);
                      // vector<int> &vi_ref = vi;
                      // int i = 0;
                      // int &i_ref = i;  // This is the reference to i
                      // char a[] = "123";
                      // char (&a_ref)[4] = a;

  // for (auto v: vi) {
  //     cout << v << endl;
  // }

  // cout << "hello\n";
  // auto date = default_date();
  // cout << date << endl;
}