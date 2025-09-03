#ifndef FUNCTION_TEMPLATE
#define FUNCTION_TEMPLATE

#include <cstring>

template <typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v1 > v2) return 1;
    return 0;
}

template <unsigned N, unsigned M>
auto compare(const char (&p)[N], const char (&q)[M]) -> int {
    return std::strcmp(p, q);
}

template <typename T, std::size_t sz>
class StaticArray {
  private:
    T array[sz];

  public:
    auto operator[](int index) -> T & { return array[index]; }

    auto size() const -> std::size_t { return sz; }
};

#endif