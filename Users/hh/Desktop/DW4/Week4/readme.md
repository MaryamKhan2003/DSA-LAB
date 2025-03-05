# **Queue Implementations and Exercises:**

## **Introduction**

This repository offers a detailed exploration of queue data structure implementations and exercises in C++. It encompasses various queue types, ranging from basic fixed-size arrays to advanced template-based dynamic arrays and circular buffers. The goal is to provide a practical understanding of queue mechanics and their diverse applications.

## **Table of Contents**

1.  **Repository Contents**
2.  **Queue Implementations**
    * 2.1. **Example 4.1 & Exercise 4.1: Fixed-Size Array Queue**
    * 2.2. **Example 4.2 & Exercise 4.2: Template-Based Dynamic Array Queue**
    * 2.3. **Exercise 4.3: Circular Buffer Integer Queue**
    * 2.4. **Exercise 4.4: Circular Buffer Character Queue**
3.  **Compilation and Execution Instructions**
4.  **Exercise Breakdown**
5.  **Important Notes**

## **1. Repository Contents**

* **`queue.h`**: Header file containing class declarations for all queue implementations.
* **`queue.cpp`**: Implementation file with definitions of queue class methods (where applicable).
* **Main Files**: Individual `main_*.cpp` files demonstrating each queue's usage and exercise solutions.
* **`README.md`**: This document, providing a comprehensive overview of the repository.

## **2. Queue Implementations**

### **2.1. Example 4.1 & Exercise 4.1: Fixed-Size Array Queue**

* **Description**: A fundamental queue implementation using a static array with a predefined maximum size (`maxqueue = 100`).
* **Data Type**: Utilizes `int` as the item type (`itemtype`).
* **Methods**: Includes `isempty()`, `isfull()`, `insert(itemtype newitem)`, and `remove()`.

### **2.2. Example 4.2 & Exercise 4.2: Template-Based Dynamic Array Queue**

* **Description**: A versatile queue implementation using C++ templates, enabling storage of any data type.
* **Data Structure**: Employs a dynamically allocated array (`itemtype* items`).
* **Constructors**: Features constructors for default and custom queue sizes.
* **Methods**: Provides `isempty()`, `isfull()`, `insert(itemtype newitem)`, and `remove(itemtype& item)`.

### **2.3. Exercise 4.3: Circular Buffer Integer Queue**

* **Description**: An efficient queue implementation using a circular buffer with a fixed size (`maxi = 5`).
* **Data Type**: Designed for integer data.
* **Operations**: Supports `pushback()`, `pushfront()`, `popfront()`, and `popback()` operations.

### **2.4. Exercise 4.4: Circular Buffer Character Queue**

* **Description**: A circular buffer queue tailored for character data, with a fixed size (`maxi = 5`).
* **Operations**: Implements `pushright()`, `pushleft()`, `popleft()`, and `popright()` operations.
* **Application**: Includes a palindrome check function demonstrating queue usage.

## **3. Compilation and Execution Instructions**

1.  **Clone the Repository:**

    ```bash
    git clone [repository_url]
    cd [repository_directory]
    ```

2.  **Compile the Code:**

    * **Example 4.1 & Exercise 4.1:**

        ```bash
        g++ queue.cpp main_example_4_1.cpp -o example_4_1
        ```

    * **Example 4.2 & Exercise 4.2:**

        ```bash
        g++ main_example_4_2.cpp -o example_4_2
        ```

        (Note: Template implementations often require inclusion of the `.cpp` file directly in the header or main file.)

    * **Exercise 4.3:**

        ```bash
        g++ queue.cpp main_exercise_4_3.cpp -o exercise_4_3
        ```

    * **Exercise 4.4:**

        ```bash
        g++ queue.cpp main_exercise_4_4.cpp -o exercise_4_4
        ```

3.  **Run the Executable:**

    ```bash
    ./example_4_1
    ./example_4_2
    ./exercise_4_3
    ./exercise_4_4
    ```

## **4. Exercise Breakdown**

* **Exercise 4.1**: Create a basic queue using a fixed-size array.
* **Exercise 4.2**: Develop a generic queue using templates and dynamic memory allocation.
* **Exercise 4.3**: Implement a circular buffer queue for integers with comprehensive operations.
* **Exercise 4.4**: Build a circular buffer queue for characters and use it to detect palindromes.

## **5. Important Notes**

* Circular buffer implementations utilize the modulo operator (`%`) for efficient wrap-around.
* Template-based code may necessitate specific compilation approaches.
* Error handling for queue overflow and underflow is implemented using `cout` and `exit(1)` or `throw runtime_error()`.

This repository serves as a valuable resource for learning and practicing queue implementations in C++. Feel free to explore, modify, and enhance the code to deepen your understanding.