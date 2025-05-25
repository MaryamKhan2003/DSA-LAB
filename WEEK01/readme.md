# C++ Programming Examples and Exercises

This repository contains C++ code examples and exercises covering various fundamental concepts.

## Examples

*   **Example 1.1:** Demonstrates different ways to find the maximum of two integers using functions (pass by value, pass by reference, and pass by pointer).  `example1_1.cpp`
*   **Example 1.2:** Introduces the concept of classes and objects with a `complex` number class, showcasing constructors, destructors, and operator overloading. `example1_2.cpp`
*   **Example 1.3:** Illustrates the use of templates for generic functions, specifically a `Getmax` function that can work with different data types. `example1_3.cpp`
*   **Example 1.4:** Extends the template concept to classes with a `mypair` class, demonstrating how to create objects of this class with different types. `example1_4.cpp`
*   **Example 1.5:** Shows how to use templates with non-type parameters (integers) to create a `mysequence` class that can hold an array of a specific size and type. `example1_5.cpp`
*   **Example 1.6:** Introduces file input and output operations in C++, demonstrating how to open, read from, write to, and close files. `example1_6.cpp`
*   **Example 1.7:** Demonstrates reading formatted data from a file and writing results to another file. `example1_7.cpp`

## Exercises

*   **Exercise 1.1:** Implements a `Complex` class with operator overloading for multiplication of complex numbers. `exercise1_1.cpp`
*   **Exercise 1.2:** Extends the `mypair` class to include a `getmin` method for finding the minimum of two values. `exercise1_2.cpp`
*   **Exercise 1.3:** Adds `getmax` and `getmin` methods to the `mysequence` class to find the maximum and minimum values in the sequence. `exercise1_3.cpp`
*   **Exercise 1.4:** Performs file I/O to read text from a file, count the number of characters, words, and sentences, and write the results back to the file. `exercise1_4.cpp`
*   **Exercise 1.5:** Creates a `House` class to store information about houses and allows the user to input and display data for multiple houses. `exercise1_5.cpp`
*   **Exercise 1.6:** Reads student data (name and grades) from a file, calculates and displays the average grade for each student, and determines the class average, highest average, and lowest average. It also identifies students with below-class average scores. `exercise1_6.cpp`

## How to Compile and Run

The code examples and exercises are written in C++ and can be compiled using a C++ compiler such as g++. For example, to compile `example1_1.cpp`, you would use the following command:

```bash
g++ example1_1.cpp -o example1_1