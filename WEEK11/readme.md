C++ Sorting Algorithms and STL Examples
This repository contains a collection of C++ examples demonstrating various Standard Template Library (STL) functionalities and fundamental sorting algorithms. Each example is provided as a commented-out section within a single .cpp file, allowing you to easily uncomment and run individual examples.

STL Examples (Chapter 12)
This section includes examples showcasing different STL containers and algorithms.

std::vector and random_shuffle (Example 12.1)
Demonstrates the use of std::vector to store integers and std::random_shuffle to randomize their order.

std::list (Example 12.2)
Illustrates basic operations with std::list, such as push_back, front, and pop_front.

std::deque and random_shuffle (Example 12.3)
Shows the use of std::deque and how random_shuffle can be applied to it, followed by pop_front operations.

std::stack with std::list as underlying container (Example 12.4)
An example of using std::stack with std::list as its underlying container to demonstrate LIFO (Last-In, First-Out) behavior.

std::bitset (Example 12.5)
Demonstrates basic bitwise operations using std::bitset, specifically showing the bitwise NOT operation.

std::find (Example 12.6)
Illustrates how to use the std::find algorithm to search for an element within a std::vector.

std::set_union (Example 12.7)
An example demonstrating the std::set_union algorithm to combine elements from two sorted ranges.

std::fill and std::fill_n (Example 12.8)
Shows how to use std::fill and std::fill_n to initialize ranges with a specific value.

std::accumulate (Example 12.9)
Demonstrates the std::accumulate algorithm for performing sums and products on a range of elements.

Custom String class with std::vector and std::sort (Example 12.10)
An example of using std::vector with a custom String class and sorting it using std::sort after shuffling.

std::map (Example 12.11)
Illustrates the use of std::map to count word frequencies from input.

Sorting Algorithms (Chapter 13)
This section provides implementations and analysis of common sorting algorithms.

Time Measurement (Example 13.1)
A simple example demonstrating how to measure the execution time of a task using time_t and difftime.

Bubble Sort (Exercise 13.1 Part 1)
A basic implementation of the Bubble Sort algorithm.

Selection Sort (Exercise 13.1 Part 2)
An implementation of the Selection Sort algorithm.

Insertion Sort (Exercise 13.1 Part 3)
An implementation of the Insertion Sort algorithm.

Heap Sort (Exercise 13.1 Part 4)
An implementation of the Heap Sort algorithm, including the heapify helper function.

Sorting Algorithm Analysis (Exercise 13.2)
This example provides a framework to compare the comparisons and exchanges performed by Bubble Sort, Selection Sort, Insertion Sort, and Heap Sort for different array sizes. It generates random arrays and records statistics for each algorithm.

Measuring Sorting Time (Exercise 13.3)
A specific example demonstrating how to measure the execution time of Bubble Sort using clock() for a given array.

How to Use
To run any of the examples:

Clone the repository:

Bash

git clone [repository-url]
cd [repository-name]
Open the .cpp file: Locate the main.cpp (or similar) file containing all the examples.

Uncomment the desired example: Each example is enclosed within //#include and //... comments. Remove the // at the beginning of each line for the specific example you want to run.

Compile and Run: Use a C++ compiler (like g++) to compile the code.

Bash

g++ your_file_name.cpp -o your_program_name
./your_program_name
Note: Some examples might use conio.h and getch(), which are Windows-specific. If you are on a different operating system (e.g., Linux, macOS), you might need to replace getch() with an alternative like cin.ignore(); cin.get(); or remove it if not essential for the example's functionality.