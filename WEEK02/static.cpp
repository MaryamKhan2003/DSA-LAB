//EXAMPLE 2.1:
//#include <iostream>
//#include <cstdlib>
//#include "stack1.h"
//
//using namespace std;
//
//stack::stack() {
//	top = -1;
//}
//int stack::IsEmpty() const {
//	return (top == -1);
//}
//
//int stack::IsFull() const {
//	return (top == Max_items - 1);
//}
//
//void stack::Push(itemtype newitem) {
//	if (IsFull()) {
//		cout << "Stack overflow!" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newitem;
//}
//void stack::Pop(itemtype& newitem) {
//	if (IsEmpty()) {
//		cout << "Stack underflow!" << endl;
//		exit(1);
//	}
//	newitem = items[top];
//	top--;
//}
//
//EXERCISE 2.1:
//#include <iostream>
//#include <cstdlib>
//#include "stack1.h"
//
//using namespace std;
//
//stack::stack() {
//	top = -1;
//}
//int stack::IsEmpty() const {
//	return (top == -1);
//}
//
//int stack::IsFull() const {
//	return (top == Max_items - 1);
//}
//
//void stack::Push(itemtype newitem) {
//	if (IsFull()) {
//		cout << "Stack overflow!" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newitem;
//}
//
//void stack::Pop(itemtype& newitem) {
//	if (IsEmpty()) {
//		cout << "Stack underflow!" << endl;
//		exit(1);
//	}
//	newitem = items[top];
//	top--;
//}
//
//itemtype stack::Peek() const {
//	if (IsEmpty()) {
//		cout << "Stack is empty, cannot peek!" << endl;
//		exit(1);
//	}
//	return items[top];
//}
//EXERCISE 2.2:
//#include "stack1.h"
//
//stack::stack() {
//    top = -1;
//}
//
//int stack::IsEmpty() const {
//    return (top == -1);
//}
//
//int stack::IsFull() const {
//    return (top == Max_items - 1);
//}
//
//void stack::Push(char ch) {
//    if (IsFull()) {
//        cout << "Stack overflow!" << endl;
//        return;
//    }
//    items[++top] = ch;
//}
//
//void stack::Pop(char& ch) {
//    if (IsEmpty()) {
//        cout << "Stack underflow!" << endl;
//        return;
//    }
//    ch = items[top--];
//}
//EXERCISE 2.3:

//#include "stack1.h"
//
//Stack::Stack() {
//    top = -1;
//}
//
//
//bool Stack::isEmpty() {
//    return top == -1;
//}
//bool Stack::isFull() {
//    return top == MAX_SIZE - 1;
//}
//
//void Stack::push(char value) {
//    if (!isFull()) {
//        arr[++top] = value;
//    }
//    else {
//        cout << "Stack Overflow\n";
//    }
//}
//char Stack::pop() {
//    if (!isEmpty()) {
//        return arr[top--];
//    }
//    else {
//        cout << "Stack Underflow\n";
//        return '\0';
//    }
//}
//
//
//char Stack::peek() {
//    if (!isEmpty()) {
//        return arr[top];
//    }
//    return '\0';
//}
