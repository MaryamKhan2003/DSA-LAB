Queue Implementation in C++

Introduction

This project demonstrates various implementations of Queue Data Structure in C++. The queue is implemented using both arrays and templates, with additional functionality like double-ended queue (deque) operations and palindrome checking using a queue.

📂 Project Structure

Example 4.1 & Exercise 4.1: Basic Queue implementation using an array.

Example 4.2 & Exercise 4.2: Template-based Queue implementation.

Exercise 4.3: Implementation of a Deque (Double-ended Queue).

Exercise 4.4: Palindrome checking using a queue.

Each example is implemented with insert, remove, isfull, isempty functions, and additional methods for deque operations.

Features

Basic Queue Operations: Insert & Remove elements.

Template-based Queue: Supports multiple data types.

Double-ended Queue: Allows push & pop operations from both ends.

Palindrome Checker: Uses queue operations to verify palindromes.

🛠️ Compilation & Execution

1. Compile the program

To compile the project, use a C++ compiler (like g++ or MSVC).

 g++ -o main main.cpp queue.cpp

2. Run the Executable

 ./main

Usage Examples

1. Basic Queue Operations

Queue q;
q.insert(10);
q.insert(20);
int removed = q.remove();
cout << "Removed: " << removed << endl;

2. Template-based Queue

queue<string> q;
q.insert("Alice");
q.insert("Bob");
string removed;
q.remove(removed);
cout << "Removed: " << removed << endl;

3. Deque Operations

queue q;
q.pushfront(10);
q.pushback(20);
int front;
q.popfront(front);
cout << "Popped from front: " << front << endl;

4. Palindrome Checker

string word = "madam";
bool isPalindrome = palindrome(word);
cout << (isPalindrome ? "Palindrome" : "Not a Palindrome") << endl;

🎯 Author

This project was created as part of Data Structures and Algorithms (DSA) practice to strengthen queue concepts in C++.

📜 License

This project is open-source and free to use for educational purposes.

