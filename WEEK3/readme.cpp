# Recursive Functions in C++

This repository contains C++ code examples and exercises demonstrating the concept of recursion.  Recursion is a powerful programming technique where a function calls itself to solve smaller subproblems of the same type.

## Examples

This repository includes the following examples:

* **Example 3.1: Factorial Calculation**
    - Calculates the factorial of a given number using recursion.
    - `int factorial(int n)`:  A recursive function to compute n!

* **Example 3.2: Reverse String**
    - Reverses a string entered by the user using recursion.
    - `void rev()`: A recursive function to reverse and print a string.

* **Example 3.3: Power Calculation**
    - Calculates the power of a number using recursion.
    - `int power(int x, int n)`: A recursive function to compute x^n.

* **Example 3.4 & Exercise 3.2: Ackermann Function**
    - Implements the Ackermann function, a classic example of a recursive function.
    - `int ackermann(int m, int n)`: A recursive function implementing the Ackermann function.

## Exercises

This repository also includes solutions to the following exercises:

* **Exercise 3.1: Table of Powers**
    - Prints a table of powers of a given number using recursion.

* **Exercise 3.3:**
    - **Part A: Reverse Printing:** Prints numbers in reverse order using recursion.
        - `void print(int n)`: A recursive function to print numbers from n to 0.
    - **Part B: Binomial Coefficient:** Calculates the binomial coefficient using recursion.
        - `int Binomial(int n, int k)`: A recursive function to calculate C(n, k).
    - **Part C: Prime Number Check:** Checks if a number is prime using recursion.
        - `int prime(int n, int div)`: A recursive function to determine primality.

## How to Compile and Run

To compile and run the code examples and exercises, you'll need a C++ compiler (e.g., g++).  Here's a general guide:

1. **Save:** Save the C++ code files (e.g., `example_3_1.cpp`, `exercise_3_3_part_c.cpp`) to your local machine.

2. **Compile:** Open a terminal or command prompt and use the compiler to compile the code. For example, to compile `example_3_1.cpp`:
   ```bash
   g++ example_3_1.cpp -o example_3_1