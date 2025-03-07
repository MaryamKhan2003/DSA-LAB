//#pragma once
//#include <iostream>
//using namespace std;
//Example 4.1 && EXERCISE 4.1:
//#define maxqueue 100
//typedef int itemtype;
//
//class Queue {
//private:
//    int front, rear, count;
//    itemtype items[maxqueue];
//
//public:
//    Queue();
//    int isempty();
//    int isfull();
//    void insert(itemtype newitem);
//    itemtype remove();
//};


//Example 4.2:
//template <typename itemtype>
//class queue {
//	int front, rear, maxqueue, count;
//	itemtype* items;
//public:
//	queue();
//	queue(int m);
//	int isempty();
//	int isfull();
//	void insert(itemtype newitem);
//	void remove(itemtype& item);
//
//};
//Exercise 4.2:
//template <typename itemtype>
//class queue {
//	int front, rear, maxqueue, count;
//	itemtype* items;
//public:
//	queue();
//	queue(int m);
//	int isempty();
//		int isfull();
//		void insert(itemtype newitem);
//		void remove(itemtype &item);
//
//};
// // //EXERCISE 4.3:
//
//const int maxi = 5;
//class queue {
//    int front, rear;
//    int arr[maxi];
//public:
//    queue();
//    void pushback(int x);
//    void pushfront(int x);
//    bool isfull();
//    void popfront(int& y);
//    void popback(int& y);
//    bool isempty();
//};
//EXERCISE 4.4:
//const int maxi = 5;
//class queue {
//    int front, rear;
//    char arr[maxi];
//public:
//    queue();
//    void pushright(char x);
//    void pushleft(char x);
//    bool isfull();
//    char popleft();
//    char popright();
//    bool isempty();
//};

