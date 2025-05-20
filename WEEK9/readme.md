Binary Search Tree (BST) Implementation
This project provides a C++ template-based implementation of a Binary Search Tree (BST) data structure. It includes common BST operations such as insertion, deletion, retrieval, traversal (in-order), and counting nodes.

Features
Templated Class: The BinarySearchTree class is templated, allowing it to store any data type that supports comparison operators (<, >).
Insertion: Inserts a new element into the tree while maintaining the BST properties.
Deletion: Removes an element from the tree, handling all three cases: no children, one child, and two children.
Retrieval: Searches for an element in the tree and indicates if it was found.
In-order Traversal: Performs an in-order traversal, printing elements in ascending order.
Node Count: Returns the total number of nodes in the tree.
Destructor: Proper memory management is ensured through a destructor that deallocates all tree nodes.
How to Compile and Run
Prerequisites
C++ Compiler (e.g., g++)
Compilation
Navigate to the directory containing the source file (e.g., main.cpp) and compile using a C++ compiler.

Bash

g++ main.cpp -o bst_program
Execution
After successful compilation, run the executable:

Bash

./bst_program
Example Usage
The main function in the source code demonstrates the usage of the BinarySearchTree class with both integer and character data types.

Integer BST Example
This example showcases basic BST operations such as inserting multiple integers, printing the tree in-order, counting nodes, retrieving a specific integer, and deleting an integer.

Character BST Example (Exercise 9.1)
This section demonstrates a practical application of the BST: sorting characters from a user-entered string. Each character from the input string is inserted into the BST, and then the in-order traversal is used to print the characters in alphabetical order, effectively sorting them.

Class Structure
TreeNode Struct
A simple struct representing a node in the binary search tree, containing the data (info) and pointers to its left and right children.

BinarySearchTree Class
This class encapsulates the BST functionality.

Public Methods:

Constructor: Initializes an empty tree.
Destructor: Recursively deallocates all nodes to prevent memory leaks.
isEmpty(): Checks if the tree is empty.
insertItem(T item): Public interface for inserting an item.
PrintTree(): Public interface for printing the tree in-order.
RetrieveItem(T& item, bool& found): Public interface for retrieving an item.
DeleteItem(T& item): Public interface for deleting an item.
NumberOfNodes(): Public interface for counting the total number of nodes.
Private Helper Methods:

The class utilizes several recursive private helper methods to manage the tree's internal structure and operations. These include helpers for the destructor, insertion, printing, retrieval, deletion, and node counting, all operating on TreeNode pointers.