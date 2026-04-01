# Programming Club: Task 1

This repository contains my solution for Task 1, focusing on version control systems, CPU architecture logic, and C++ integer behavior.

## Repository Structure
* *task-1/*: Contains the source code and documentation.
  * assignment.cpp
  * namespace.cpp
  * README.md: Documentation and assignment answers.

---

## Assignment Answers

### Question 1
*Question:* A custom CPU has a maximum addressable width of 2 bytes. How many bits does the "mega" data type (the largest supported) contain?

*Answer:* The *mega* data type contains *16 bits*. 
Since the CPU has a maximum addressable width of 2 bytes, and 1 byte equals 8 bits ($2 \times 8 = 16$), the largest possible data type the system can handle is 16 bits.

### Question 3
*Question:* What is the output of the provided C++ program and why?

*A. Output:* 4294967295

*B. Explanation:* This output occurs due to *integer underflow* (or wrap-around). Because the variable x is an unsigned int, it cannot store negative numbers. When we calculate $0 - 1$, the binary representation "wraps around" from all zeros to all ones, resulting in the maximum value possible for a 32-bit unsigned integer ($2^{32} - 1$).

