# Search Algorithm Performance Analysis
This project provides a C++ implementation and analysis of two fundamental searching algorithms: Sequential Search and Binary Search. It measures and compares their performance in terms of the number of comparisons required for both successful and unsuccessful search operations across various array sizes.

**Table of Contents**
Introduction
Algorithms Implemented
Sequential Search
Binary Search
How to Compile and Run
Program Output
Analysis of Results
Contributing
License
**Introduction**
Efficient searching is a cornerstone of computer science, and understanding the performance characteristics of different search algorithms is crucial for writing optimized code. This project aims to offer a clear, empirical comparison between Sequential Search and Binary Search. By tracking the number of comparisons made during each search, we can visualize how their efficiency scales with increasing data set sizes, highlighting the practical implications of their theoretical time complexities.

**Algorithms Implemented**
Sequential Search
The Sequential Search (also known as Linear Search) algorithm is the simplest searching method. It iterates through each element of an array sequentially, comparing each element with the target key until a match is found or the end of the array is reached.

**Characteristics:**

Time Complexity: O(N) in the worst and average cases.
Space Complexity: O(1).
Requirements: Does not require the array to be sorted.
**Binary Search**
The Binary Search algorithm is a highly efficient search technique that works exclusively on sorted arrays. It operates by repeatedly dividing the search interval in half. It compares the target key with the middle element of the interval. If the key is less than the middle element, the search continues in the lower half; otherwise, it continues in the upper half. This process is repeated until the key is found or the interval becomes empty.

**Characteristics:**

Time Complexity: O(log N) in the worst and average cases.
Space Complexity: O(1).
Requirements: Requires the array to be sorted.
**How to Compile and Run**
To compile and execute this program, you will need a C++ compiler (e.g., g++).

Save the code: Save the provided C++ source code into a file named search_analysis.cpp.

Open a terminal/command prompt: Navigate to the directory where you saved search_analysis.cpp.

Compile the code: Use the following command to compile the program:

Bash

g++ search_analysis.cpp -o search_analysis
This command compiles search_analysis.cpp and creates an executable file named search_analysis.

Run the executable: Execute the compiled program using:

Bash

./search_analysis
**Program Output**
The program will output a formatted table to the console, displaying the number of comparisons for each algorithm (Sequential Search and Binary Search) across different array sizes (N), for both successful and unsuccessful search scenarios.

The output format will be similar to this:

N       Seq(S)  Seq(U)  Bin(S)  Bin(U)
10      X       Y       A       B
100     X       Y       A       B
1000    X       Y       A       B
5000    X       Y       A       B
10000   X       Y       A       B
20000   X       Y       A       B
50000   X       Y       A       B
Where:

N: Represents the size of the array being searched.
Seq(S): The number of comparisons performed by Sequential Search for a successful search.
Seq(U): The number of comparisons performed by Sequential Search for an unsuccessful search.
Bin(S): The number of comparisons performed by Binary Search for a successful search.
Bin(U): The number of comparisons performed by Binary Search for an unsuccessful search.
**Analysis of Results**
By examining the output table, you will observe distinct performance patterns for each algorithm:

**Sequential Search:**

The number of comparisons for Seq(S) (successful search) will generally show a linear increase with N. In the best case, it's 1 comparison (if the element is at the first position), and in the worst case, it's N comparisons (if the element is at the last position or not present). The Seq(S) value in the output represents an average or a specific instance from a randomly chosen successful search.
The number of comparisons for Seq(U) (unsuccessful search) will consistently be N, as the algorithm must check every element before concluding that the key is not present.
This linear relationship confirms its O(N) time complexity.
**Binary Search:**

For both Bin(S) and Bin(U), the number of comparisons will increase much more slowly, following a logarithmic pattern (approximately log2(N)).
This logarithmic growth vividly demonstrates the superior efficiency of Binary Search for larger datasets compared to Sequential Search. Even for N = 50000, the number of comparisons for Binary Search will be significantly lower than for Sequential Search.
This efficiency comes at the cost of requiring the input array to be sorted beforehand.
This experiment effectively illustrates the fundamental differences in efficiency between O(N) and O(log N) algorithms, emphasizing why Binary Search is the preferred choice for searching in large, sorted collections.

Contributing
Feel free to fork this repository, suggest improvements, or add more search algorithms for comparison. Any contributions are welcome!

