//#include <iostream>
//using namespace std;
////example 7.1:
//template <class T>
//class double_linked {
//    struct node {
//        T data;
//        node* prev;
//        node* next;
//        node(T t, node* p = NULL, node* n = NULL) {
//            data = t;
//            prev = p;
//            next = n;
//        }
//    };
//
//    node* head;
//    node* tail;
//
//public:
//    double_linked() : head(NULL), tail(NULL) {}
//
//    template<int N>
//    double_linked(T(&arr)[N]) {
//        head = tail = NULL;
//        for (int i = 0; i < N; ++i) {
//            push_back(arr[i]); 
//        }
//    }
//
//    bool empty() const {
//        return head == NULL;
//    }
//
//    operator bool() const {
//        return !empty();
//    }
//
//    void push_back(T);
//    void push_front(T);
//    T pop_back();
//    T pop_front();
//
//    ~double_linked() {
//        while (head) {
//            node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//
//template <class T>
//void double_linked<T>::push_back(T data) {
//    node* newNode = new node(data, tail, NULL);
//    if (!head) {
//        head = tail = newNode;
//    }
//    else {
//        tail->next = newNode;
//        tail = newNode;
//    }
//}
//
//template <class T>
//void double_linked<T>::push_front(T data) {
//    node* newNode = new node(data, NULL, head);
//    if (!head) {
//        head = tail = newNode;
//    }
//    else {
//        head->prev = newNode;
//        head = newNode;
//    }
//}
//
//template <class T>
//T double_linked<T>::pop_back() {
//    if (empty()) {
//        throw runtime_error("double_linked: list is empty");
//    }
//    node* temp = tail;
//    T data = tail->data;
//    tail = tail->prev;
//    if (tail) {
//        tail->next = NULL;
//    }
//    else {
//        head = NULL;
//    }
//    delete temp;
//    return data;
//}
//
//template <class T>
//T double_linked<T>::pop_front() {
//    if (empty()) {
//        throw runtime_error("double_linked: list is empty");
//    }
//    node* temp = head;
//    T data = head->data;
//    head = head->next;
//    if (head) {
//        head->prev = NULL;
//    }
//    else {
//        tail = NULL;
//    }
//    delete temp;
//    return data;
//}
//
//int main() {
//    int array[5] = { 4, 6, 8, 32, 19 };
//    double_linked<int> dlist(array);
//
//    dlist.push_back(11);
//    dlist.push_front(100);
//
//    while (dlist) {
//        cout << dlist.pop_back() << " ";
//    }
//
//    return 0;
//}

//example//
//#include <iostream>
//using namespace std;
//
//template <class T>
//class circular_double_linked {
//    struct node {
//        T data;
//        node* prev;
//        node* next;
//        node(T t, node* p = NULL, node* n = NULL) {
//            data = t;
//            prev = p;
//            next = n;
//        }
//    };
//
//    node* head;
//    node* tail;
//
//public:
//    circular_double_linked() : head(NULL), tail(NULL) {}
//
//    bool empty() const {
//        return head == NULL;
//    }
//
//    void push_back(T data) {
//        node* newNode = new node(data);
//        if (!head) {
//            head = tail = newNode;
//            head->next = head;  // Circular link
//            head->prev = head;  // Circular link
//        }
//        else {
//            newNode->prev = tail;
//            newNode->next = head;  // Circular link
//            tail->next = newNode;
//            head->prev = newNode;
//            tail = newNode;
//        }
//    }
//
//    void push_front(T data) {
//        node* newNode = new node(data);
//        if (!head) {
//            head = tail = newNode;
//            head->next = head;
//            head->prev = head;
//        }
//        else {
//            newNode->next = head;
//            newNode->prev = tail;
//            head->prev = newNode;
//            tail->next = newNode;
//            head = newNode;
//        }
//    }
//
//    T pop_back() {
//        if (empty()) throw runtime_error("List is empty");
//        T data = tail->data;
//        if (head == tail) {
//            delete tail;
//            head = tail = NULL;
//        }
//        else {
//            node* temp = tail;
//            tail = tail->prev;
//            tail->next = head;
//            head->prev = tail;
//            delete temp;
//        }
//        return data;
//    }
//
//    T pop_front() {
//        if (empty()) throw runtime_error("List is empty");
//        T data = head->data;
//        if (head == tail) {
//            delete head;
//            head = tail = NULL;
//        }
//        else {
//            node* temp = head;
//            head = head->next;
//            tail->next = head;
//            head->prev = tail;
//            delete temp;
//        }
//        return data;
//    }
//
//    void display() {
//        if (empty()) {
//            cout << "List is empty" << endl;
//            return;
//        }
//        node* temp = head;
//        do {
//            cout << temp->data << " ";
//            temp = temp->next;
//        } while (temp != head);
//        cout << endl;
//    }
//};
//
//int main() {
//    circular_double_linked<int> cdl;
//    cdl.push_back(10);
//    cdl.push_back(20);
//    cdl.push_back(30);
//    cdl.display(); 
//
//    cdl.pop_front();
//    cdl.display(); 
//
//    cdl.pop_back();
//    cdl.display();
//
//    return 0;
//}
//exercise 7.1:
//#include <iostream>
//using namespace std;
//
//
//struct Node {
//    int data;
//    Node* prev;
//    Node* next;
//    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
//};
//
//
//class LongInt {
//private:
//    Node* head;
//    Node* tail;
//
//public:
//    LongInt() : head(nullptr), tail(nullptr) {}
//
//    // Function to insert a digit at the end
//    void insertDigit(int digit) {
//        Node* newNode = new Node(digit);
//        if (!head) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//
//    // Function to insert a number from string 
//    void insertNumber(const string& number) {
//        for (char digit : number) {
//            insertDigit(digit - '0'); // Convert character to integer
//        }
//    }
//
//    // Function to display the number
//    void display() const {
//        if (!head) {
//            cout << "0";
//            return;
//        }
//        Node* temp = head;
//        while (temp) {
//            cout << temp->data;
//            temp = temp->next;
//        }
//    }
//
//    // Function to add two long integers represented as doubly linked lists
//    static LongInt add(LongInt& num1, LongInt& num2) {
//        LongInt result;
//        Node* p1 = num1.tail;
//        Node* p2 = num2.tail;
//        int carry = 0;
//
//        // Traverse from the end 
//        while (p1 || p2 || carry) {
//            int sum = carry;
//            if (p1) {
//                sum += p1->data;
//                p1 = p1->prev;
//            }
//            if (p2) {
//                sum += p2->data;
//                p2 = p2->prev;
//            }
//
//            carry = sum / 10; 
//            result.insertFront(sum % 10); // Insert result at the front
//        }
//
//        return result;
//    }
//
//    // Function to insert a digit at the front (for addition result)
//    void insertFront(int digit) {
//        Node* newNode = new Node(digit);
//        if (!head) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//        }
//    }
//
//    // Destructor to free memory
//    ~LongInt() {
//        while (head) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//};
//
//
//int main() {
//    LongInt num1, num2, result;
//    string str1, str2;
//
//    cout << "Enter first long integer: ";
//    cin >> str1;
//    cout << "Enter second long integer: ";
//    cin >> str2;
//
//    num1.insertNumber(str1);
//    num2.insertNumber(str2);
//
//    cout << "\nFirst Number: ";
//    num1.display();
//    cout << "\nSecond Number: ";
//    num2.display();
//
//    result = LongInt::add(num1, num2);
//
//    cout << "\nSum: ";
//    result.display();
//    cout << endl;
//
//    return 0;
//}
