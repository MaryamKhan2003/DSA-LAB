//#include<iostream>
//#include<stdlib.h>
////example 6.1://
//using namespace std;
//template <typename T>
//class list {
//protected:
//	struct node {
//		T info;
//		struct node* next;
//	};
//	typedef struct node* nodeptr;
//	nodeptr head;
//public:
//	list();
//	~list();
//	T empty();
//	void insertafter(T oldvalue, T newvalue);
//	void Deleteitem(T oldvalue);
//	void push(T newvalue);
//	T pop();
//};
//template <typename T>list<T>::list() {
//	head = 0;
//}
//template<typename T>list<T>::~list() {
//	nodeptr p;
//	while (head != nullptr) {
//		p = head;
//		head = head->next;
//		delete p;
//	}
//}
//
//template<typename T>void list<T>::insertafter(T oldvalue, T  newvalue) {
//	nodeptr p, q;
//
//	for (p = head; p != 0 && p->info != oldvalue; p = p->next) {
//
//	}
//	if (p == 0) {
//		cout << "Error value sought is not in list";
//		exit(1);
//	}
//	q = new node;
//	q->info = newvalue;
//	q->next = p->next;
//	p->next = q;
//}
//template<typename T>T list<T>::empty() {
//	return (head == 0);
//}
//template<typename T>void list<T>::push(T newvalue) {
//	nodeptr p;
//	p = new node;
//	p->info = newvalue;
//	p->next = head;
//	head = p;
//}
//template<typename T>void list<T>::Deleteitem(T oldvalue) {
//	nodeptr p, q;
//	for (q = 0, p = head; p != 0 && p->info != oldvalue; p = p->next) {}
//	if (p == 0) {
//		cout << "error value sought is not in list";
//		exit(1);
//	}
//	if (q == 0) {
//		head = p->next;
//	}
//	else {
//		q->next = p->next;
//	}
//	delete p;
//}
//template <typename T>T list<T>::pop() {
//	nodeptr p;
//	T x;
//	if (empty()) {
//		cout << "error list is empty";
//		exit(1);
//	}
//	p = head;
//	head = p->next;
//	x = p->info;
//	delete p;
//	return x;
//}
//int main() {
//	list<int> L;
//	L.push(80);
//	L.push(90);
//	L.push(100);
//
//	cout << "List after pushing elements: ";
//	
//
//	cout << "Popped: " << L.pop() << endl;
//
//	cout << "List after pop: ";
//	
//
//	L.insertafter(80, 78);
//	cout << "List after inserting 78 after 80: ";
//	
//
//	L.Deleteitem(90);
//	cout << "List after deleting 90: ";
//	
//
//	return 0;
//}
//ercercise 6.1:

//#include <iostream>
//using namespace std;
//class list {
//protected:
//	struct node {
//		int info;
//		node* next;
//
//	};
//	typedef struct node* nodeptr;
//	nodeptr head;
//public:
//	list() {
//		head = 0;
//	}
//	~list() {
//		nodeptr p, q;
//		if (emptylist()) {
//			exit(0);
//
//		}
//		for (p = head, q = p->next; p != 0; p = q, q = p->next) {
//			delete p;
//		}
//	}
//	bool emptylist();
//	void insertafter(int oldval, int newval);
//	void dlt(int oldval);
//	void push(int newval);
//	int pop();
//};
//bool list::emptylist() {
//	return (head == 0);
//}
//void list::insertafter(int oldval, int newval) {
//	nodeptr p, q;
//	for (p = head; p != 0 && p->info != oldval; p = p->next) {}
//	if (p == 0) {
//		cout << "value is not in list";
//		exit(1);
//	}
//	q = new node;
//	q->info = newval;
//	q->next = p->next;
//	p->next = q;
//}
//void list::dlt(int oldval) {
//	nodeptr p, q;
//	for (q = 0, p = head; p != 0 && p->info != oldval; q = p, p = p->next) {}
//	if (p == 0) {
//		cout << "value is not in list ";
//		exit(1);
//	}
//	if (q == 0) {
//		head = p->next;
//	}
//	else {
//		q->next = p->next;
//	}
//	delete p;
//}
//void list::push(int newval) {
//	nodeptr p;
//	p = new node;
//	p->info = newval;
//	p->next = head;
//	head = p;
//}
//int list::pop() {
//	nodeptr p;
//	int x;
//	if (emptylist()) {
//		cout << "empty list";
//		exit(1);
//	}
//	p = head;
//	head = p->next;
//	x = p->info;
//	delete p;
//	return x;
//}
//
//int main() {
//	list l;
//	l.push(87);
//	l.insertafter(87, 88);
//	l.dlt(88);
//	cout << "popped :" << l.pop() << endl;
//	cout << "popped :" << l.pop() << endl;
//
//
//
//
//	return 0;
//}
// exercise 6.2:
//#include <iostream>
//#include<string>
//using namespace std;
//class list {
//protected:
//    struct node {
//        int info;
//        node* next;
//
//    };
//    typedef struct node* nodeptr;
//    nodeptr head;
//public:
//    list() {
//        head = 0;
//    }
//    ~list() {
//        nodeptr p, q;
//        if (emptylist()) {
//            exit(0);
//
//        }
//        for (p = head, q = p->next; p != 0; p = q, q = p->next) {
//            delete p;
//        }
//    }
//    bool emptylist();
//    void insertafter(int oldval, int newval);
//    void dlt(int oldval);
//    void push(char newval);
//    char pop(char& x);
//};
//bool list::emptylist() {
//    return (head == 0);
//}
//void list::insertafter(int oldval, int newval) {
//    nodeptr p, q;
//    for (p = head; p != 0 && p->info != oldval; p = p->next) {}
//    if (p == 0) {
//        cout << "value is not in list";
//        exit(1);
//    }
//    q = new node;
//    q->info = newval;
//    q->next = p->next;
//    p->next = q;
//}
//void list::dlt(int oldval) {
//    nodeptr p, q;
//    for (q = 0, p = head; p != 0 && p->info != oldval; q = p, p = p->next) {}
//    if (p == 0) {
//        cout << "value is not in list ";
//        exit(1);
//    }
//    if (q == 0) {
//        head = p->next;
//    }
//    else {
//        q->next = p->next;
//    }
//    delete p;
//}
//void list::push(char newval) {
//    nodeptr p;
//    p = new node;
//    p->info = newval;
//    p->next = head;
//    head = p;
//}
//char list::pop(char& x) {
//    nodeptr p;
//
//    if (emptylist()) {
//        cout << "empty list";
//        exit(1);
//    }
//    p = head;
//    head = p->next;
//    x = p->info;
//    delete p;
//    return x;
//}
//string reverseString(string input) {
//    list charList;
//
//    
//    for (char c : input) {
//        charList.push(c);
//    }
//
//    string reversed = "";
//    while (!charList.emptylist()) {
//        char ch;
//        charList.pop(ch);
//        reversed += ch;;
//    }
//    
//    cout << reversed;
//    return reversed;
//}
//
//int main() {
//
//    string str;
//
//    cout << "Enter a string: ";
//    cin >> ws;
//    getline(cin, str);
//
//    if (str.empty()) {
//        cout << "Error: No input provided." << endl;
//        return 1;
//    }
//
//
//    cout << "Reversed string: " << reverseString(str) << endl;
//
//    return 0;
//}
//EXERCise 6.3:
//#include <iostream>
//using namespace std;
//
//
//struct Node {
//    int info;
//    Node* next;
//};
//
//
//class LinkedStr {
//private:
//    Node* head; // Head pointer
//
//public:
//    // Constructor: Initialize head to NULL
//    LinkedStr() {
//        head = nullptr;
//    }
//
//    // Destructor: Free allocated memory
//    ~LinkedStr() {
//        Node* temp;
//        while (head != nullptr) {
//            temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//
//    // Create a linked list of given length
//    void makeStr(int len) {
//        if (len <= 0) return;
//
//        cout << "Enter " << len << " elements: ";
//        for (int i = 0; i < len; i++) {
//            int val;
//            cin >> val;
//            Node* newNode = new Node{ val, head };
//            head = newNode; // Insert at the head
//        }
//    }
//
//    // Display all elements of the linked list
//    void displayStr() {
//        if (head == nullptr) {
//            cout << "List is empty." << endl;
//            return;
//        }
//
//        Node* temp = head;
//        cout << "Linked List: ";
//        while (temp != nullptr) {
//            cout << temp->info << " - ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//
//    // Remove the first element of the linked list
//    void removeFirst() {
//        if (head == nullptr) return;
//
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//
//    // Remove the last element of the linked list
//    void removeLast() {
//        if (head == nullptr) return;
//        if (head->next == nullptr) {
//            delete head;
//            head = nullptr;
//            return;
//        }
//
//        Node* temp = head;
//        Node* prev = nullptr;
//        while (temp->next != nullptr) {
//            prev = temp;
//            temp = temp->next;
//        }
//        prev->next = nullptr;
//        delete temp;
//    }
//
//    // Remove first node with the given value
//    void remove(int k) {
//        if (head == nullptr) return;
//
//        Node* temp = head;
//        Node* prev = nullptr;
//
//        // If the head node contains the value
//        if (head->info == k) {
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        // Search for the node with value k
//        while (temp != nullptr && temp->info != k) {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        // If not found, do nothing
//        if (temp == nullptr) return;
//
//        // Remove the node
//        prev->next = temp->next;
//        delete temp;
//    }
//};
//
//
//int main() {
//    LinkedStr list;
//    int len;
//
//    cout << "Enter the number of elements: ";
//    cin >> len;
//
//    list.makeStr(len);
//    list.displayStr();
//
//    list.removeFirst();
//    cout << "After removing first element: ";
//    list.displayStr();
//
//    list.removeLast();
//    cout << "After removing last element: ";
//    list.displayStr();
//
//    int val;
//    cout << "Enter value to remove: ";
//    cin >> val;
//    list.remove(val);
//    cout << "After removing element " << val << ": ";
//    list.displayStr();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//class list {
//protected:
//    struct node {
//        int info;
//        node* next;
//    };
//    typedef struct node* nodeptr;
//    nodeptr head;
//public:
//    list() {
//        head = 0;
//    }
//    ~list() {
//        while (head) {
//            nodeptr p = head;
//            head = head->next;
//            delete p;
//        }
//    }
//    bool isempty() {
//        if (head == nullptr) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//    void insert1(int x) {
//        nodeptr p;
//        p = new node;
//        p->info = x;
//        p->next = head;
//        head = p;
//    }
//    void insertlast(int x) {
//        nodeptr p;
//        p = head;
//        while (p->next != nullptr) {
//            p = p->next;
//        }
//        nodeptr q;
//        q = new node;
//        q->info = x;
//        p->next = q;
//    }
//    void insertmid(int old, int newv) {
//        nodeptr p;
//        p = head;
//        while (p != 0 && p->info != old) {
//            p = p->next;
//        }
//        if (p == 0) {
//            cout << old << " not in list";
//        }
//        nodeptr q;
//        q = new node;
//        q->info = newv;
//        q->next = p->next;
//        p->next = q;
//    }
//    int dlt1() {
//        nodeptr p;
//        p = head;
//        if (head == nullptr) {
//            cout << "list is empty";
//            exit(1);
//        }
//        head = head->next;
//        int x = p->info;
//        delete p;
//        return x;
//    }
//    int dltlast() {
//        nodeptr p;
//        p = head;
//        if (head == nullptr) {
//            cout << "list is empty";
//            exit(1);
//        }
//        if (head->next == nullptr) {
//            int x = head->info;
//            delete head;
//            head = nullptr;
//        }
//        nodeptr q;
//        q = nullptr;
//        while (p->next != 0) {
//            q = p;
//            p = p->next;
//        }
//        q->next = p;
//        int x = p->info;
//        delete p;
//        return x;
//    }
//    int dltmid(int val) {
//        nodeptr p;
//        nodeptr q;
//        p = head;
//        if (head == 0) {
//            cout << "list is empty";
//            exit(1);
//        }
//        if (head->info == val) {
//            head = head->next;
//            int x = head->info;
//            delete p;
//            return x;
//        }
//        while (p != 0 && p->info != val) {
//            q = p;
//            p = p->next;
//        }
//        if (p == 0) {
//            cout << val << " not in list";
//        }
//
//        q->next = p->next;
//        int x = p->info;
//        delete p;
//        return x;
//
//    }
//    bool search(int x) {
//        nodeptr p;
//        p = head;
//        while (p != 0) {
//            if (p->info == x) {
//                return true;
//            }
//
//
//            p = p->next;
//        }
//        return false;
//    }
//    int counter() {
//        nodeptr p;
//        p = head;
//        int count = 0;
//        while (p != nullptr) {
//            count = count + 1;
//            p = p->next;
//        }
//        return count;
//    }
//    void makestr(int l) {
//        nodeptr p;
//        p = head;
//        int val;
//        for (int i = 0; i < l; i++) {
//            cout << "enetr value :";
//            cin >> val;
//            nodeptr p = new node{ val, head };
//            head = p;
//        }
//    }
//    void display() {
//        nodeptr p;
//        p = head;
//        while (p != nullptr) {
//            cout << p->info << endl;
//            p = p->next;
//        }
//    }
//
//
//    int pop() {
//        nodeptr p;
//        if (isempty()) {
//            cout << "list is empty";
//            exit(1);
//        }
//        p = head;
//        head = p->next;
//        int x = p->info;
//        delete p;
//        return x;
//    }
//
//};
//int main() {
//    list l;
//    l.insert1(10);
//    l.insert1(20);
//    l.insertmid(20, 25);
//    l.insertlast(30);
//    l.makestr(5);
//    cout << "counting node s:" << l.counter() << endl;
//    cout << "display :"; l.display(); cout << endl;
//    cout << "dldte 1st:" << l.dlt1() << endl;
//    cout << "dldte last:" << l.dltlast() << endl;
//    cout << "dldte specific:" << l.dltmid(10) << endl;
//    if (l.search(25)) {
//        cout << "yes ";
//    }
//    else {
//        cout << "not";
//    }
//    while (!l.isempty()) {
//        cout << "popped :" << l.pop() << endl;
//
//
//    }
//}
