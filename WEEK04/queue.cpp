//Example 4.1 && EXERCISE 4.1:
//#include "queue.h"
//Queue::Queue() {
//    count = 0;
//    front = 0;
//    rear = 0;
//}
//
//int Queue::isfull() {
//    return count == maxqueue;
//}
//
//int Queue::isempty() {
//    return count == 0;
//}
//
//void Queue::insert(itemtype newitem) {
//    if (isfull()) {
//        throw runtime_error("Queue Overflow");
//    }
//    items[rear] = newitem;
//    rear = (rear + 1) % maxqueue;
//    ++count;
//}
//
//itemtype Queue::remove() {
//    if (isempty()) {
//        throw runtime_error("Queue Underflow");
//    }
//    itemtype item = items[front];
//    front = (front + 1) % maxqueue;
//    --count;
//    return item;
//}


//Example 4.2:
//template<typename itemtype>queue<itemtype>::queue() {
//	maxqueue = 100;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new itemtype[maxqueue];
//}
//template<typename itemtype>queue<itemtype>::queue(int m) {
//	maxqueue = m + 1;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new itemtype[m];
//}
//
//template<typename itemtype>int queue<itemtype>::isempty() {
//	return count == 0;
//
//}
//template<typename itemtype>int queue<itemtype>::isfull() {
//	return count == maxqueue;
//
//}
//template<typename itemtype>void queue<itemtype>::insert(itemtype newitem) {
//	if (isfull()) {
//		cout << "overflow" << endl;
//		exit(1);
//	}
//	else {
//		items[rear] = newitem;
//		rear = (rear + 1) % maxqueue;
//		++count;
//	}
//}
//template<typename itemtype>void queue<itemtype>::remove(itemtype& item) {
//	if (isempty()) {
//		cout << "under flow";
//		exit(1);
//	}
//	else {
//		item = items[front];
//		front = (front + 1) % maxqueue;
//		--count;
//	}
//}
//Exercise 4.2:
//template<typename itemtype>queue<itemtype>::queue() {
//	maxqueue = 100;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new itemtype[maxqueue];
//}
//template<typename itemtype>queue<itemtype>::queue(int m) {
//	maxqueue = m + 1;
//	front = 0;
//	rear = 0;
//	count = 0;
//	items = new itemtype[m];
//}
//
//template<typename itemtype>int queue<itemtype>::isempty() {
//	return count == 0;
//
//}
//template<typename itemtype>int queue<itemtype>::isfull() {
//	return count == maxqueue;
//
//}
//template<typename itemtype>void queue<itemtype>::insert(itemtype newitem) {
//	if (isfull()) {
//		cout << "overflow" << endl;
//		exit(1);
//	}
//	else {
//		items[rear] = newitem;
//		rear = (rear + 1) % maxqueue;
//		++count;
//	}
//}
//template<typename itemtype>void queue<itemtype>::remove(itemtype& item) {
//	if (isempty()) {
//		cout << "under flow";
//		exit(1);
//	}
//	else {
//		item = items[front];
//		front = (front + 1) % maxqueue;
//		--count;
//	}
//}
// //EXERCISE 4.3:

   //queue:: queue() {
   //     front = -1;
   //     rear = -1;

   // }
   // void queue:: pushback(int x) {
   //     if (isfull()) {
   //         cout << "queue is full";
   //         exit(1);
   //     }
   //     else if (isempty()) {
   //         front = rear = 0;
   //         arr[rear] = x;


   //     }
   //     else {
   //         rear = (rear + 1) % maxi;
   //         arr[rear] = x;
   //     }
   // }
   // void queue::pushfront(int x) {
   //     if (isfull()) {
   //         cout << "queue is full";
   //         exit(1);


   //     }
   //     if (isempty()) {
   //         front = rear = 0;
   //         arr[front] = x;
   //     }

   //     else {
   //         front = (front - 1 + maxi) % maxi;//wrap around//
   //         arr[front] = x;
   //     }
   // }
   // bool queue::isfull() {
   //     if ((rear + 1) % maxi == front) {
   //         return true;
   //     }
   //     else {
   //         return false;
   //     }
   // }
   // void queue::popfront(int& y) {
   //     if (isempty()) {
   //         cout << "queue empty";
   //         exit(1);
   //     }
   //     y = arr[front];

   //     if (front == rear) {
   //         front = rear = -1;
   //     }
   //     else {
   //         front = (front + 1) % maxi;
   //     }
   // }
   // void queue::popback(int& y) {
   //     if (isempty()) {
   //         cout << "Queue is empty\n";
   //         return;
   //     }
   //     y = arr[rear];  // Store the value first
   //     if (front == rear) {
   //         front = rear = -1;
   //     }
   //     else {
   //         rear = (rear - 1 + maxi) % maxi;//for wrap around
   //     }
   // }


   // bool queue::isempty() {
   //     if (front == -1 && rear == -1) {
   //         return true;
   //     }
   //     else {
   //         return false;
   //     }
   // }


//
//EXERCISE 4.4:
//
//queue::queue() {
//    front = -1;
//    rear = -1;
//}
//
//void queue::pushright(char x) {
//    if (isfull()) {
//        cout << "Queue is full\n";
//        exit(1);
//    }
//    if (isempty()) {
//        front = rear = 0;
//    }
//    else {
//        rear = (rear + 1) % maxi;
//    }
//    arr[rear] = x;
//}
//
//void queue::pushleft(char x) {
//    if (isfull()) {
//        cout << "Queue is full\n";
//        exit(1);
//    }
//    if (isempty()) {
//        front = rear = 0;
//    }
//    else {
//        front = (front - 1 + maxi) % maxi;
//    }
//    arr[front] = x;
//}
//
//char queue::popleft() {
//    if (isempty()) {
//        cout << "Queue is empty\n";
//        exit(1);
//    }
//    char temp = arr[front];
//    if (front == rear) {
//        front = rear = -1;
//    }
//    else {
//        front = (front + 1) % maxi;
//    }
//    return temp;
//}
//
//char queue::popright() {
//    if (isempty()) {
//        cout << "Queue is empty\n";
//        exit(1);
//    }
//    char temp = arr[rear];
//    if (front == rear) {
//        front = rear = -1;
//    }
//    else {
//        rear = (rear - 1 + maxi) % maxi;
//    }
//    return temp;
//}
//
//bool queue::isfull() {
//    return (rear + 1) % maxi == front;
//}
//
//bool queue::isempty() {
//    return front == -1 && rear == -1;
//}
