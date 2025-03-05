Queue Implementation and Exercises

Overview

This project contains multiple implementations of queue data structures in C++. It includes examples and exercises that cover different types of queues, including:

Static integer queue

Template-based queue

Double-ended queue (Deque)

Character queue for palindrome checking

Files Included

queue.h - Header file defining the queue classes

queue.cpp - Implementation of queue methods

main.cpp - Test cases and exercises

Queue Implementations

1. Example 4.1 & Exercise 4.1

Simple Integer Queue

Implements a static array-based queue

Uses circular indexing for efficient enqueue and dequeue

Handles overflow and underflow conditions

2. Example 4.2 & Exercise 4.2

Template-based Queue

Allows generic data type for queue elements

Dynamically allocates memory for flexible queue size

Supports inserting and removing elements

3. Exercise 4.3

Double-ended Queue (Deque)

Supports insertion and removal from both ends

Implements circular queue behavior

Checks for full and empty conditions

4. Exercise 4.4

Character Queue for Palindrome Checking

Pushes characters from a string into the queue

Checks if the string is a palindrome by comparing front and rear elements

Compilation and Execution

Compile the code:

 g++ -o queue_program main.cpp queue.cpp

Run the executable:

 ./queue_program

Example Usage

Running Integer Queue Example

Insert number at index 0: 10
Insert number at index 1: 20
Removed number from index 0: 10
Removed number from index 1: 20

Running Palindrome Check

Enter a string: racecar
racecar is a palindrome

Contributions

Contributions are welcome! Feel free to submit issues or pull requests.

License

This project is licensed under the MIT License.

