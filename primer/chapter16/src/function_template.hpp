#ifndef FUNCTION_TEMPLATE
#define FUNCTION_TEMPLATE

#include <cstring>
#include <functional>
#include <iostream>

template <typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return -1;
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

template <typename T, typename V>
auto my_find(T it1, T it2, const V &value) -> T {
    while (it1 != it2) {
        if (*it1 == value) {
            return it1;
        }
        ++it1;
    }
    return it1;
}

template <typename T, std::size_t sz>
auto print(const T (&p)[sz]) -> void {
    for (auto i = 0ul; i < sz; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << "\n";
}

template<typename T, std::size_t sz>
inline constexpr auto size() -> std::size_t {
    return sz;
}


#endif