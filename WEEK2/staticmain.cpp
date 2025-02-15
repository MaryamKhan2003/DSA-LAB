//EXAMPLE 2.1:
//#include <iostream>
//#include "stack1.h"
//#include <string>
//
//using namespace std;
//
//int main() {
//    stack s, s2;
//    string stri;
//    char ch;
//    for (int i = 0; i < 20; i++) {
//        s.Push(i);
//    }
//    while (!s.IsEmpty()) {
//        int item;
//        s.Pop(item);
//        cout << item << " ";
//    }
//    cout << endl;
//    return 0;
//}
// EXERCISE 2.1:
// #include <iostream>
//#include "stack1.h"
//#include <string>
//
//using namespace std;
//
//int main() {
//    stack s, s2;
//    string stri;
//    char ch;
//
//   
//
//    for (int i = 0; i < 20; i++) {
//        s.Push(i);
//    }
//   
//    cout << "Top element: " << s.Peek() << endl;
//
//    
//    while (!s.IsEmpty()) {
//        int item;
//        s.Pop(item);
//        cout << item << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//EXERCISE 2.2:
//#include <iostream>
//#include <string>
//#include "stack1.h"
//
//using namespace std;
//
//string reverse(string str) {
//    stack s;
//
//    for (char ch : str) {
//        s.Push(ch);
//    }
//
//   
//    string rev = "";
//    while (!s.IsEmpty()) {
//        char ch;
//        s.Pop(ch);
//        rev += ch;
//    }
//
//    return rev;
//}
//
//int main() {
//    string stri;
//    cout << "Enter a string: ";
//    getline(cin, stri);
//
//    string rev = reverse(stri);
//    cout << "reversed string: " << rev << endl;
//
//    return 0;
//}
//EXERCISE 2.3:
//#include <iostream>
//#include <cctype>
//#include "stack1.h"
//
//using namespace std;
//
//
//bool isvalid(string expr) {
//    Stack s;
//    for (char ch : expr) {
//        if (ch == '(' || ch == '{' || ch == '[') {
//            s.push(ch);
//        }
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (s.isEmpty()) return false;
//            char top = s.pop();
//            if ((ch == ')' && top != '(') ||
//                (ch == '}' && top != '{') ||
//                (ch == ']' && top != '[')) {
//                return false;
//            }
//        }
//    }
//    return s.isEmpty();
//}
//
//
//int precedencerule(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    return 0;
//}
//
//
//string infixtopostfix(string infix) {
//    Stack s;
//    string postfix = "";
//
//    for (char ch : infix) {
//        if (isalnum(ch)) {
//            postfix = postfix+ ch;
//        }
//        else if (ch == '(') {
//            s.push(ch);
//        }
//        else if (ch == ')') {
//            while (!s.isEmpty() && s.peek() != '(') {
//                postfix += s.pop();
//            }
//            s.pop();  
//        }
//        else {  
//            while (!s.isEmpty() && precedencerule(s.peek()) >= precedencerule(ch)) {
//                postfix += s.pop();
//            }
//            s.push(ch);
//        }
//    }
//
//    while (!s.isEmpty()) {
//        postfix += s.pop();
//    }
//
//    return postfix;
//}
//
//
//int checkpostfix(string postfix) {
//    Stack s;
//
//    for (char ch : postfix) {
//        if (isdigit(ch)) {
//            s.push(ch - '0');  
//        }
//        else {
//            int val2 = s.pop();
//            int val1 = s.pop();
//
//            switch (ch) {
//            case '+': s.push(val1 + val2); break;
//            case '-': s.push(val1 - val2); break;
//            case '*': s.push(val1 * val2); break;
//            case '/':
//                if (val2 == 0) { 
//                    cout << "Error: Division by zero!" << endl;
//                    return 0;  
//                }
//                s.push(val1 / val2);
//                break;
//            default:
//                cout << "Invalid operator: " << ch << endl;
//                return 0;
//            }
//        }
//    }
//
//    return s.pop();
//}
//
//
//int main() {
//    string exp;
//    int choice;
//
//    do {
//        cout << "\nplease select ur choice:\n";
//        cout << "1 Check Parenthesis Validity\n";
//        cout << "2 Convert Infix to Postfix\n";
//        cout << "3 Evaluate Postfix exp\n";
//        cout << "4 Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//        if (choice == 1) {
//            cout << "enetr expression :";
//            cin >> exp;
//            cout << (isvalid(exp) ? "Valid" : "Invalid") << endl;
//            break;
//        }
//        else if (choice == 2) {
//            cout << "Enter infix exp: ";
//            cin >> exp;
//            cout << "Postfix: " << infixtopostfix(exp) << endl;
//            break;
//
//        }
//        else if (choice == 3) {
//            cout << "Enter postfix exp: ";
//            cin >> exp;
//            cout << "Result: " << checkpostfix(exp) << endl;
//            break;
//
//        }
//        else {
//            cout << "stop";
//            break;
//           
//        }
//       
//        cin >> choice;
//    } while (choice == !4);
//
//    return 0;
//}
