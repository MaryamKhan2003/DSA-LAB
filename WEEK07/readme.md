# C++ Doubly Linked List Implementations

This repository contains C++ implementations of doubly linked lists, including a standard doubly linked list and a circular doubly linked list, along with an exercise demonstrating their use for representing and adding long integers.

## Table of Contents

- [Overview](#overview)
- [Included Implementations](#included-implementations)
    - [Example 7.1: Standard Doubly Linked List](#example-71-standard-doubly-linked-list)
    - [Example: Circular Doubly Linked List](#example-circular-doubly-linked-list)
    - [Exercise 7.1: Long Integer Addition using Doubly Linked List](#exercise-71-long-integer-addition-using-doubly-linked-list)
- [How to Use](#how-to-use)
- [Getting Started with an Implementation](#getting-started-with-an-implementation)
- [Contributing](#contributing)
- [License](#license)

## Overview

This repository showcases the implementation and application of doubly linked lists in C++. Doubly linked lists are linear data structures where each node contains data and pointers to both the previous and the next nodes, allowing for efficient traversal in both directions. The repository includes basic operations for doubly linked lists and demonstrates a practical application in handling large integer arithmetic.

## Included Implementations

This repository contains the following doubly linked list implementations:

### Example 7.1: Standard Doubly Linked List

This implementation provides a template-based doubly linked list that can store elements of any data type `T`.

**Key Features:**

* Templated `double_linked` class.
* `push_back(T data)`: Adds a new element to the end of the list.
* `push_front(T data)`: Adds a new element to the beginning of the list.
* `pop_back()`: Removes and returns the last element of the list. Throws `runtime_error` if the list is empty.
* `pop_front()`: Removes and returns the first element of the list. Throws `runtime_error` if the list is empty.
* `empty()`: Checks if the list is empty.
* Conversion to `bool` operator to check if the list is non-empty.
* Constructor to initialize an empty list.
* Constructor to initialize a list from an array.
* Destructor for proper memory management.

### Example: Circular Doubly Linked List

This implementation provides a template-based circular doubly linked list where the last node's `next` pointer points to the first node, and the first node's `prev` pointer points to the last node.

**Key Features:**

* Templated `circular_double_linked` class.
* `push_back(T data)`: Adds a new element to the end of the circular list.
* `push_front(T data)`: Adds a new element to the beginning of the circular list.
* `pop_back()`: Removes and returns the last element. Throws `runtime_error` if empty.
* `pop_front()`: Removes and returns the first element. Throws `runtime_error` if empty.
* `empty()`: Checks if the list is empty.
* `display()`: Prints the elements of the circular list.
* Constructor for an empty circular list.

### Exercise 7.1: Long Integer Addition using Doubly Linked List

This implementation demonstrates how a doubly linked list can be used to represent very large integers that exceed the capacity of standard integer types. It includes a `LongInt` class that stores digits in a doubly linked list and provides a static function to add two `LongInt` objects.

**Key Features:**

* `LongInt` class to represent large integers.
* `insertDigit(int digit)`: Inserts a single digit at the end of the number.
* `insertNumber(const string& number)`: Inserts a number from a string, digit by digit.
* `display()`: Prints the long integer.
* `add(LongInt& num1, LongInt& num2)`: A static function that takes two `LongInt` objects and returns their sum as a new `LongInt` object. The addition is performed digit by digit, handling carries.
* `insertFront(int digit)`: Inserts a digit at the front (used for building the sum).
* Destructor for memory management.

