Graph Implementations in C++
This repository contains C++ implementations of various graph data structures and algorithms, including:

Adjacency Matrix representation
Adjacency List representation
Breadth-First Search (BFS) traversal
Depth-First Search (DFS) traversal
Dijkstra's Algorithm for shortest paths
Table of Contents
Adjacency Matrix
Adjacency List
Graph Traversal (BFS & DFS)
Dijkstra's Algorithm
How to Compile and Run
Contributing
License
Adjacency Matrix
The GraphMatrix class implements a graph using an adjacency matrix. This representation is suitable for dense graphs where the number of edges is close to the maximum possible.

Features:
GraphMatrix(int vertices): Constructor to initialize a graph with a given number of vertices.
addEdge(int u, int v, int wt): Adds a directed edge from vertex u to v with a specified weight.
hasedge(int u, int v): Checks if an edge exists between vertices u and v.
removeedge(int u, int v): Removes the edge between vertices u and v.
getweight(int u, int v): Returns the weight of the edge between vertices u and v.
print(): Prints the adjacency matrix.
Adjacency List
The GraphList class implements a graph using an adjacency list. This representation is generally more efficient for sparse graphs (fewer edges).

Features:
GraphList(int vertices): Constructor to initialize a graph with a given number of vertices.
addEdge(int u, int v, int wt): Adds a directed edge from vertex u to v with a specified weight.
print(): Prints the adjacency list.
Graph Traversal (BFS & DFS)
The Graph class in the traversal section (Exercise 11.1) provides implementations for Breadth-First Search (BFS) and Depth-First Search (DFS). This Graph class uses an adjacency matrix internally.

Features:
Graph(int size): Constructor to initialize a graph with a given number of vertices.
addEdge(int u, int v, int weight = 1, bool undirected = true): Adds an edge (defaulting to undirected and weight 1) between u and v.
BFS(int start): Performs a Breadth-First Search starting from a specified node.
DFS(int start): Performs a Depth-First Search starting from a specified node.
print(): Prints the adjacency matrix (with '0' for no edge).
Dijkstra's Algorithm
The Graph class in the Dijkstra's algorithm section (Exercise 11.2) provides an implementation of Dijkstra's shortest path algorithm. This Graph class also uses an adjacency matrix.

Features:
Graph(int size): Constructor to initialize a graph with a given number of vertices.
addEdge(int u, int v, int weight = 1, bool undirected = true): Adds an edge (defaulting to undirected and weight 1) between u and v.
dijkstra(int src): Computes and prints the shortest paths from a source node to all other nodes using Dijkstra's algorithm.
How to Compile and Run
To compile and run these C++ files, you'll need a C++ compiler (like g++).

Save the code: Save each exercise's code into separate .cpp files (e.g., exercise10_1a.cpp, exercise10_1b.cpp, exercise11_1.cpp, exercise11_2.cpp).

Compile: Open your terminal or command prompt and use the following command to compile (replace filename.cpp with your actual file name):

Bash

g++ filename.cpp -o output_name
For example:

Bash

g++ exercise11_2.cpp -o dijkstra_demo
Run: Execute the compiled program:

Bash

./output_name
For example:

Bash

./dijkstra_demo
