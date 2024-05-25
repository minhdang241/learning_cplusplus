# Chapter 17

- The hardware only supports a sequence of bytes.

> Try to learn how a program maps on to a computer's memory and operations

- When start a C++ program,
    - The compiler set aside memory for code called `code storage`.
    - The compiler set aside memory for global variables called `static storage`.
    - The compiler set aside memory for function calls and local variables called `stack storage`.
    - The left over memory is called `free store`.

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

When thinking of using a case, reconsider:
1. Is there a way to write the code without the case?
2. Is there a way to redesign that part of the program so that the cast is not needed?

- Pointers and references:
    - For tiny objects prefer pass-by-values
    - For functions where "no object" is a valid argument, use pointers
    - Otherwise, use a reference parameter

> `this` is a pointer that points to the object for which the member function was called.

# Chapter 18

