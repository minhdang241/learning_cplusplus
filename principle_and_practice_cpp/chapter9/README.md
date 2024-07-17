> struct is used for data structures.

Whenever we decide to create a type, ask "What operations would we like to perform on this type?"

> Don't put member function's body in the class declaration otherwise whenever we change the function body, we have to recompile all the files that include that class.
=> That explains why we need to have header files to contain only the declaration.

## Enum
**Definition**: a basic user-defined type.

**Application**: use enum when we need a set of named integer constants.

> Prefer enum class over enum "plain"

## Operator Overloading
> Only overload operators when it makes sense to do so.

## Class interfaces
> Public interface and the implementation parts of a class should be separated.

Good interfaces:
- Complete & Minimal: we want to make our interface easy to learn and remember.
- Provide constructors
- Support copying or prohibit
- Use types to provide good argument checking
- Identify non-modifying member functions
- Free all resources in the destructor


