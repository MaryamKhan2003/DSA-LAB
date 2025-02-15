//EXAMPLE 2.1:
//#pragma once
//#define Max_items 100  
//#include<string>
//using namespace std;
//typedef int itemtype;
//
//class stack {
//	int top;
//	itemtype items[Max_items];
//	string vari;
//public:
//	stack();
//	
//	int IsEmpty() const;
//	int IsFull() const;
//	void Push(itemtype newitem);
//	void Pop(itemtype& newitem);
//};
// EXERCISE 2.1:
// #pragma once
//#define Max_items 100  
//#include<string>
//using namespace std;
//typedef int itemtype;
//
//class stack {
//	int top;
//	itemtype items[Max_items];
//	string vari;
//public:
//	stack();
//	
//	int IsEmpty() const;
//	int IsFull() const;
//	void Push(itemtype newitem);
//	void Pop(itemtype& newitem);
//	itemtype Peek() const;
//};
// EXERCISE 2.2:
//#pragma once
//#define Max_items 100  
//#include <iostream>
//using namespace std;
//
//class stack {
//    int top;
//    char items[Max_items]; 
//
//public:
//    stack();
//    int IsEmpty() const;
//    int IsFull() const;
//    void Push(char ch);
//    void Pop(char& ch);
//};
// EXERCISE 2.3:
//#pragma once
//
//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100;  
//
//class Stack {
//private:
//    char arr[MAX_SIZE]; 
//    int top;  
//
//public:
//    Stack(); 
//    bool isEmpty();
//    bool isFull();
//    void push(char value);
//    char pop();
//    char peek();
//};
