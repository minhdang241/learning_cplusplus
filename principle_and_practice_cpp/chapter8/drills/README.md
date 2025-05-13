**8.5.6**: Pass by value vs Pass by reference
> if we use a reference to simply avoid copying, we use a const reference. When we see a non-const reference, we assume that the function changes its arguments.

**8.5.8**: Argument checking and conversion

using reference with const prevents re-assigning value to the reference.
```c++
int const& i = 1;
i = 2; // ERROR 
```

Global Variable Best Practice: Wrap the variable within a function. For example,
```c++
auto default_date() -> Date const& {
  static Date const dd(1970,1,1);
  return dd;
}
```

using constexpr to evaluate the expr at the compiled time
a constexpr function can be evaluated at compile time if we give it constant expressions as arguments.
```c++
auto d = const double(10);
```

