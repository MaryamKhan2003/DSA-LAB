Priority Queue Implementation in C++

Overview

This project implements a priority queue using templates in C++. It allows inserting and removing elements based on different priority levels. The queue is implemented using an array of standard queues, enabling efficient insertion and deletion of elements.

Features

Template-based implementation for flexibility with different data types.

Dynamic priority levels configurable at runtime.

Efficient insertion and removal based on priority.

Error handling for invalid priority levels and queue underflow.

File Structure

/Project_Folder
│── queue.h       # Header file for Queue class
│── queue.cpp     # Implementation of Queue class
│── pque.h        # Header file for Priority Queue class
│── pque.cpp      # Implementation of Priority Queue class
│── main.cpp      # Test program
│── README.md     # Documentation

Installation & Compilation

Requirements

A C++ compiler (G++ or MSVC recommended)

Compilation

To compile the project, use the following command:

g++ -o priority_queue main.cpp pque.cpp queue.cpp

Running the Program

./priority_queue

Usage

Enter the number of priority levels.

Insert elements with their priority.

Elements will be removed in order of priority.

Sample Input/Output

Input

Enter the number of priority levels: 5
Enter element at index 0: 10
Enter priority (0-4): 2
Enter element at index 1: 15
Enter priority (0-4): 1
...

Output

Removing elements based on priority:
Removed: 15
Removed: 10
...

Future Enhancements

Implement max heap for better efficiency.

Add user-defined priority rules.

Improve error handling with exceptions.