Queue Implementation in C++

Overview

This project contains various implementations of queues in C++, including both standard and templated versions. The exercises cover basic queue operations, circular queues, double-ended queues (deque), and applications like palindrome checking.

Implemented Examples and Exercises

Example 4.1 & Exercise 4.1: Static Queue Implementation

Implements a queue using a fixed-size array.

Supports operations: insert(), remove(), isempty(), and isfull().

Uses circular indexing to efficiently utilize array space.

Example 4.2 & Exercise 4.2: Template-Based Queue

Implements a generic queue using dynamic memory allocation.

Supports integer and string types.

Uses methods: insert(), remove(), isempty(), and isfull().

Exercise 4.3: Double-Ended Queue (Deque)

Implements a queue with front and back insertion and removal.

Supports operations: pushback(), pushfront(), popfront(), popback(), isfull(), and isempty().

Exercise 4.4: Character Queue & Palindrome Checker

Implements a queue storing characters.

Uses a queue to check if a string is a palindrome.

Operations include: pushright(), pushleft(), popleft(), and popright().

Compilation & Execution

Compilation:

To compile and run the main program, use the following command:

 g++ main.cpp -o main

Or, if using template-based implementation:

 g++ main.cpp queue.cpp -o main

Running the Program:

 ./main

Example Usage

Example 4.1:

Queue info;
info.insert(20);
info.insert(40);
info.insert(60);
while (!info.isempty()) {
    cout << info.remove() << endl;
}

Exercise 4.4 (Palindrome Check):

string str = "racecar";
if (pallindrome(str)) {
    cout << str << " is a palindrome";
} else {
    cout << str << " is not a palindrome";
}

Issues & Improvements

Proper memory management should be ensured for dynamic allocations.

Use exceptions instead of exit(1) for error handling.

Improve the palindrome checker logic to avoid early exits.

License

This project is open-source and free to use for educational purposes.