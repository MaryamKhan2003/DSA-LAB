# C++ Linked List Implementations

This repository contains several C++ implementations of a singly linked list data structure, along with example usage and exercises.

## Table of Contents

- [Overview](#overview)
- [Included Implementations](#included-implementations)
    - [Example 6.1 (Template List)](#example-61-template-list)
    - [Exercise 6.1 (Integer List)](#exercise-61-integer-list)
    - [Exercise 6.2 (String Reversal)](#exercise-62-string-reversal)
    - [Exercise 6.3 (Enhanced Integer List)](#exercise-63-enhanced-integer-list)
- [How to Use](#how-to-use)
- [Getting Started with an Implementation](#getting-started-with-an-implementation)
- [Contributing](#contributing)
- [License](#license)

## Overview

This repository provides different variations of a singly linked list implemented in C++. These implementations demonstrate the fundamental concepts of linked lists, including node structure, traversal, insertion, deletion, and other common operations. The code includes examples and exercises that explore the versatility of linked lists in solving various problems.

## Included Implementations

This repository contains the following linked list implementations:

### Example 6.1 (Template List)

This implementation defines a generic linked list using C++ templates. It can store elements of any data type `T`.

**Key Features:**

* Templated `list` class.
* `push(T newvalue)`: Adds a new element to the beginning of the list.
* `pop()`: Removes and returns the first element of the list.
* `insertafter(T oldvalue, T newvalue)`: Inserts a new element after the first occurrence of `oldvalue`.
* `Deleteitem(T oldvalue)`: Deletes the first occurrence of `oldvalue` from the list.
* `empty()`: Checks if the list is empty.
* Constructor and destructor for proper memory management.

### Exercise 6.1 (Integer List)

This implementation provides a linked list specifically for storing integer values.

**Key Features:**

* `list` class for integers.
* `push(int newval)`: Adds a new integer to the beginning of the list.
* `pop()`: Removes and returns the first integer of the list.
* `insertafter(int oldval, int newval)`: Inserts a new integer after the first occurrence of `oldval`.
* `dlt(int oldval)`: Deletes the first occurrence of `oldval` from the list.
* `emptylist()`: Checks if the list is empty.
* Constructor and destructor for memory management.

### Exercise 6.2 (String Reversal)

This implementation demonstrates how a linked list can be used to reverse a string. It includes a `list` class that can store characters and a `reverseString` function that utilizes the list to achieve the reversal.

**Key Features:**

* `list` class for characters with `push(char newval)` and `pop(char& x)`.
* `reverseString(string input)` function: Takes a string as input and returns its reversed version using the character linked list.

### Exercise 6.3 (Enhanced Integer List)

This implementation offers a more comprehensive set of operations for an integer-based linked list.

**Key Features:**

* `list` class for integers.
* `insert1(int x)`: Inserts at the beginning.
* `insertlast(int x)`: Inserts at the end.
* `insertmid(int old, int newv)`: Inserts after a specific value.
* `dlt1()`: Deletes from the beginning.
* `dltlast()`: Deletes from the end.
* `dltmid(int val)`: Deletes a specific value.
* `search(int x)`: Checks if a value exists in the list.
* `counter()`: Returns the number of elements in the list.
* `makestr(int l)`: Creates a list of a given length by taking user input.
* `display()`: Prints the elements of the list.
* `isempty()`: Checks if the list is empty.
* `pop()`: Removes and returns the first element.
* Constructor and destructor for memory management.
