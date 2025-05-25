# Stack Implementation and Applications(DYNAMIC & STATIC)

This repository contains a C++ implementation of a stack data structure and demonstrates its usage in various applications.  The code includes multiple variations of the stack class, addressing different data types and memory management.  It also showcases how stacks can be used to solve common problems like string reversal, parenthesis checking, infix to postfix conversion, and postfix evaluation.

## Table of Contents

- [Introduction](#introduction)
- [Stack Implementations](#stack-implementations)
    - [Basic Stack (stack1.h/cpp)](#basic-stack)
    - [Stack with Peek (stack1.h/cpp)](#stack-with-peek)
    - [Character Stack (stack1.h/cpp)](#character-stack)
    - [Template Stack (stack1.h/cpp)](#template-stack)
    - [Character Stack with Error Handling (stack1.h/cpp)](#character-stack-with-error-handling)
- [Applications](#applications)
    - [Stack Operations Demo (main.cpp)](#stack-operations-demo)
    - [String Reversal (main.cpp)](#string-reversal)
    - [Parenthesis Checker (main.cpp)](#parenthesis-checker)
    - [Infix to Postfix Conversion and Evaluation (main.cpp)](#infix-to-postfix-conversion-and-evaluation)
- [How to Compile and Run](#how-to-compile-and-run)
- [File Structure](#file-structure)
- [Explanation of Code](#explanation-of-code)
- [Further Improvements](#further-improvements)


## Introduction

The stack is a fundamental data structure that follows the Last-In, First-Out (LIFO) principle.  This repository provides a clear and concise implementation of stacks in C++, highlighting different ways to define and use them.  The examples demonstrate the versatility of stacks in solving practical problems.

## Stack Implementations

The repository includes several variations of the stack class:

### Basic Stack (stack1.h/cpp)

A basic stack implementation for integer data types.  Provides `Push` and `Pop` operations.

### Stack with Peek (stack1.h/cpp)

Extends the basic stack with a `Peek` function to access the top element without removing it.

### Character Stack (stack1.h/cpp)

A stack specifically designed to hold characters.  Useful for string manipulation tasks.

### Template Stack (stack1.h/cpp)

A generic stack implementation using templates, allowing it to store any data type. Demonstrates dynamic memory allocation.

### Character Stack with Error Handling (stack1.h/cpp)

A character stack with improved error handling for overflow and underflow conditions.

## Applications

The following applications demonstrate the use of stacks:

### Stack Operations Demo (main.cpp)

A simple program to showcase basic stack operations like push, pop, and displaying the contents.

### String Reversal (main.cpp)

Uses a stack to reverse a given string.

### Parenthesis Checker (main.cpp)

Checks if a given expression has balanced parentheses using a stack.

### Infix to Postfix Conversion and Evaluation (main.cpp)

Converts an infix expression to postfix using a stack and then evaluates the postfix expression.

## How to Compile and Run

1.  Ensure you have a C++ compiler (e.g., g++) installed.
2.  Navigate to the directory containing the source files in your terminal.
3.  Compile the code. For example, to compile the infix to postfix example:
    ```bash
    g++ main.cpp stack1.cpp -o infix_postfix
    ```
    (Adjust the compilation command based on the specific application you want to run.)
4.  Run the executable:
    ```bash
    ./infix_postfix
    ```

## File Structure