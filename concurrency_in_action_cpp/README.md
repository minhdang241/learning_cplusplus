# Chapter 3
> Race condition is anything where the outcome depends on the relative ordering 
> of execution of operations on two or more threads. 

How does the lock work?
Before accessing the data structure, locking the <b>mutex</b>. 
After finishing modifying the data structure, unlocking the <b>mutex</b>. 

Problem with <b>mutex</b>: "DEADLOCK"

`std::lock_guard` implements RAII (Resources Acquistion Is Initialization) idiom for mutex. 
How does it work?
- It locks the mutex on construction and unlock on destruction.

What's wrong with stack in the concurrency world?
pop() vs top()
if we combine them, we can make sure that there is no data race. Yet, a new problem emerges, what if the element is poped but not copied successfully due to external factors such as OOM.


DEADLOCK:
- Always lock 2 mutexes in the same order. 


`std::unique-lock` less strict than `std::lock_guard` 
It does not always own the mutex
It allows unlocking => improve performance since holding lock in a long time is bad for performance.

> Lock should be held for the minimum possible time needed to perform the required ops.

