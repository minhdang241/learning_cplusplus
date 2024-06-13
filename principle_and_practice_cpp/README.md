# Chapter 4
> lvalue refers to the box, and rvalue refers to the value in the box.

# Chapter 8
> Using non-cost reference if we want to change the object value.

# Chapter 17

- The hardware only supports a sequence of bytes.

> Try to learn how a program maps on to a computer's memory and operations

- When start a C++ program,
    - The compiler set aside memory for code called `code storage`.
    - The compiler set aside memory for global variables called `static storage`.
    - The compiler set aside memory for function calls and local variables called `stack storage`.
    - The leftover memory is called `free store`.

Memory layout:
<table>
<tr>Memory</tr>
<tr>Static data</tr>
<tr>Free store</tr>
<tr>Stack</tr>
</table>

> The pointer does not know how many elements it points to.

Besides the * on a pointer, we can use the subscript operator `[]` to access the elements.
```c++
double* p = new double[4];
double x = *p;
double y = p[2];
```

Cast:
- `static_cast<T>(x)`: converts between types `void*` and `double*`.
- `const_cast<T>(x)`: strips the `const`.
- `reinterpret_cast<T>(x)`: casts between unrelated types, such as `int` and `double*`.
 
When thinking of using a case, reconsider:
1. Is there a way to write the code without the case?
2. Is there a way to redesign that part of the program so that the cast is not needed?

- Pointers and references:
    - For tiny objects prefer pass-by-values
    - For functions where "no object" is a valid argument, use pointers
    - Otherwise, use a reference parameter

> `this` is a pointer that points to the object for which the member function was called.

- Deconstructor is called in either case:
  - When the object goes out of scope
  - When the pointer to object is explicitly deleted

# Chapter 18
## Copy
`{} == initializer_list<T>`   
copy by default is member wise copy

- Deep copy vs Shallow copy
> vector and string do deep copy.
- Type that provides shallow copy is said to have _pointer semantics_ or _reference semantics_.
- Type that provides deep copy is said to have _value semantics_.

## Moving
with move constructors and move assignment operators, we do not have to deal with pointers or references.

## Essential operations
There are 7 operations:
* Default constructor: We need this one when we want to create an object without any arguments.
* Constructors with one or more arguments
* Copy constructor / Copy assignment: A class acquiring resources should have a copy constructor and copy assignment operator since the member wise copy is wrong.
* Move constructor / Move assignment: A class acquiring resources should have a move constructor and move assignment operator since the copy can be expensive. 
* Destructor: We need this one if the class acquires resources.
> If we can't define a good invariant (default values) for a class that its constructor can establish, we probably have a poorly designed class.

The single-argument constructor can be used to convert one type to another. 
We should use the `explicit` key word to provide the construction semantics instead of implicit conversions.

# Chapter 19
## Templates
> Template is a mechanism that allows us to use types as parameters to a class or function.

The compiler generates a new class or function for each type used in the template.

> Generic programming: writing code that works with a variety of types.

## Resources & Exceptions 
When a function cannot perform its task, it should throw an exception.
When the thread of execution leaves a scope, the destructors for every fully constructed object and sub-object are invoked.