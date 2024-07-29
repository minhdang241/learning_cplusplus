**1. What are the two parts of a class, as described in the chapter?**

The two parts of a class are the interface and the implementation.

**2. What is the difference between the interface and the implementation in a class?**

The interface is the part of the class that is visible to the user of the class. It is the part that the user learns to
interact with the class.
The implementation is the part of the class that is hidden from the user. It is the part that the user does not need to
know about to use the class.

**3. What are the limitations and problems of the original Date struct that is created in the chapter?**

```original struct
struct Date {
   int y;       // year
   int m;     // month in year
   int d;      // day of month
};
```

The original Date struct has the following limitations and problems:

- The members are public, so the user can change the values of the members directly.
- The members are not checked for validity. For example, the user can set the month to 13, which is not a valid month.
- The members are not initialized, so the user can create a Date object with invalid values.

**4. Why is a constructor used for the Date type instead of an init_day() function?**

- A constructor is used for the Date type instead of an init_day() function because a constructor ensures that a Date
  object is always initialized correctly. A constructor is called automatically when a Date object is created, so the
  user does not have to remember to call an init_day() function after creating a Date object. A constructor also allows
  the Date object to be created in a single step, which makes the code easier to read and write.

**5. What is an invariant? Give examples.**

- An invariant is a condition that is always true for an object of a class.

**6. When should functions be put in the class definition, and when should they be defined outside the class? Why?**

- A function that can be free-standing (i.e., does not need access to the private members of the class) should be
  defined outside the class. This helps to keep the class interface small and simple. Also, when errors occur, we
  can limit the scope of the error to the function that caused it.

**7. When should operator overloading be used in a program? Give a list of operators that you might want to overload (
each with a reason).**

- Operator overloading should be used when it makes sense to use the operator with objects of a class. For example, if
  it makes sense to add two objects of a class together, then the + operator should be overloaded for that class.

**8. Why should the public interface to a class be as small as possible?**

- The public interface to a class should be as small as possible to make it easier to learn and use.

**9. What does adding const to a member function do?**

- Adding const to a member function indicates that the function does not modify the object on which it is called.

**10. Why are “helper functions” best placed outside the class definition?**

- When errors occur, we can limit the scope of the error to the function within a class only.