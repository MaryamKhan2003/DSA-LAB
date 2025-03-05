/Example 4.1 && EXERCISE 4.1:
//#include <iostream>
//#include "queue.h"
//
//using namespace std;

//int main() {
//    Queue info;
//    info.insert(20);
//    info.insert(40);
//    info.insert(60);
//
//    Queue info2[10];
//    int value;
//
//    for (int i = 0; i < 10; i++) {
//        cout << "Insert number at index " << i << ": ";
//        cin >> value;
//        info2[i].insert(value);
//    }
//
//    cout << endl;
//    for (int i = 0; i < 10; i++) {
//        while (!info2[i].isempty()) {
//            int rem = info2[i].remove();
//            cout << "Removed number from index " << i << ": " << rem << endl;
//        }
//    }
//
//    cout << endl;
//    while (!info.isempty()) {
//        int rem = info.remove();
//        cout << rem << endl;
//    }
//
//    return 0;
//}


//	Example 4.2:
//#include <iostream>
//#include "queue.cpp"
//
//using namespace std;
//int main() {
//	queue<int>info[10];
//	int num;
//	for (int i = 0; i < 10; i++) {
//		cout << "enetr number at index:" << i << "=";
//		cin >> num;
//		info[i].insert(num);
//	}
//	int rem;
//	cout << endl;
//	for (int i = 0; i < 10; i++) {
//		while (!info[i].isempty()) {
//			info[i].remove(rem);
//			cout << "remove number from index :" << i << "=" << rem << endl;
//		}
//	}
//	cout << endl;
//}

//Exercise 4.2:
//#include <iostream>
//#include "queue.cpp"
//
//int main() {
//	queue<string>info[10];
//	string num;
//	for (int i = 0; i < 10; i++) {
//		cout << "enetr name of friend:"<<i<<"=";
//		cin >> num;
//		info[i].insert(num);
//	}
//	string rem;
//		cout << endl;
//		for (int i = 0; i < 10; i++) {
//			while (!info[i].isempty()) {
//				info[i].remove(rem);
//				cout << "remove name from index :"<<i<<"="<<rem << endl;
//			}
//		}
//		cout << endl;
//}
// //EXERCISE 4.3:
//#include <iostream>
//#include "queue.h"
//
// int main() {
//queue info;
//info.pushback(100);
//info.pushback(20);
//info.pushback(30);
//info.pushback(40);
//info.pushback(50);
//
//int p;
//info.popfront(p);
//cout << "popped :" << p << endl;
//info.popfront(p);
//cout << "popped :" << p << endl;
//info.popfront(p);
//cout << "popped :" << p << endl;
//info.popfront(p);
//cout << "popped :" << p << endl;
//info.popfront(p);
//cout << "popped :" << p << endl;
//info.popfront(p);
//cout << "popped :" << p << endl;
//
//return 0;
//}
 
//EXERCISE 4.4:
//#include <iostream>
//#include "queue.h"
//
//bool pallindrome(string str) {
//    queue s;
//    for (char ch : str) {
//        s.pushright(ch);
//    }
//    for (char ch : str) {
//        if (s.popright() != s.popleft()) {
//            return false;
//        }
//        else {
//            return true;
//        }
//    }
//
//}
//int main() {
//
//    string stri;
//    cout << "eneter a string :";
//    cin >> stri;
//    pallindrome(stri);
//    if (pallindrome(stri)) {
//        cout << stri << " is pallindrome";
//    }
//    else {
//        cout << stri << " is not pallindrome";
//    }
//
//
//    return 0;
//}