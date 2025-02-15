//EXAMPLE 2.2:
//#include<iostream>
//#include<stdlib.h>
//#include"stack1.h"
//using namespace std;
//
//template<typename itemtype>
//stack<itemtype>::stack() {
//    maxstack = 500;
//    top = -1;
//    items = new itemtype[maxstack];
//}
//
//template<typename itemtype>
//stack<itemtype>::stack(int max) {
//    maxstack = max;
//    top = -1;
//    items = new itemtype[maxstack];
//}
//
//template<typename itemtype>
//stack<itemtype>::~stack() {
//    delete[] items;
//}
//
//template<typename itemtype>
//bool stack<itemtype>::Isempty() {
//    return (top == -1);
//}
//
//template<typename itemtype>
//bool stack<itemtype>::Isfull() {
//    return (top == maxstack - 1);
//}
//
//template<typename itemtype>
//void stack<itemtype>::push(itemtype newitem) {
//    if (Isfull()) {
//        cout << "Stack overflow!" << endl;
//        exit(1);
//    }
//    items[++top] = newitem;
//}
//
//template<typename itemtype>
//void stack<itemtype>::pop(itemtype& newitem) {
//    if (Isempty()) {
//        cout << "Stack underflow!" << endl;
//        exit(1);
//    }
//    newitem = items[top--];
//}
//
//template class stack<int>;
//template class stack<float>;