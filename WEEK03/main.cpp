//#include<iostream>
//using namespace std;
//Example 3.1:
//int factorial(int n) {
//	int fact = 1;
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		for (int i = 1; i <=n; i++) {
//			fact = fact * i;
//		}
//		return fact;
//	}
//}
//int main() {
//	cout << "factorial is :" << factorial(5) << endl;
//}
// 
// EXAMPLE 3.2:
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
// cout<<"enetr a string :";
//	rev();
//	
//}
// 
// EXAMPLE 3.3:
//int power(int x, int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return power(x, n - 1) * x;
//	}
//}
//int main() {
//	cout << "5 power 2 is " << power(5, 2);
//}
// EXERCISE 3.1:
//#include <iostream>
//#include <iomanip>  
//using namespace std;
//int power(int x, int n) {
//    if (n == 0)
//        return 1;
//    return power(x, n - 1) * x;
//}
//
//int main() {
//    int x = 2, n = 5;
//    cout << setw(10) << "power" << setw(10) << "ans" << endl;
//    for (int i = 0; i <= n; i++) {
//        cout << setw(10) << i << setw(10) << power(x, i) << endl;
//    }
//    return 0;
//}
// 
// EXample 3.4 and Exercise 3.2:
//int ackermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0) {
//		return ackermann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0) {
//		return ackermann(m - 1, ackermann(m, n - 1));
//	}
//}
//int main() {
//	cout<<"output :"<<ackermann(3, 4);
//}
// 
// EXERCise 3.3:
// PART A:
//#include <iostream>
//using namespace std;
//
//void print(int n) {
//    if (n < 0)  
//        return;
//
//    cout <<"number in reversed order :"<< n << endl;
//    print(n - 1); 
//}
//int main() {
//    int num = 5;
//    cout << "number :" << num << endl;
//    cout << endl;
//    print(num);
//    return 0;
//}
// 
// PART B:
//#include <iostream>
//using namespace std;
//int Binomial(int n, int k) {
//    if (k == 0) {  
//        return 1;
//    }
//    else if (k == n) { 
//        return 1;
//    }
//    else {
//        if (k < n && k>0 && n > 1) {
//            return Binomial(n - 1, k - 1) + Binomial(n - 1, k);
//        }
//    }
//}
//int main() {
//    int n = 5, k = 2;
//    cout << "C" <<"(" <<n << "," << k << ") = " << Binomial(n, k) << endl;
//    return 0;
//}
//
// PART C:
//int prime(int n,int div) {
////three bases cases//
//	if (n < 2) {
//		return false;
//	}
//	else if (div == n - 1) {
//		return true;
//	}
//	else if (n % div == 0) {
//		return false;
//	}
//	else {
//		return prime(n, div + 1);
//	}
//}
//int main() {
//
//	int num;
//	string choice;
//	do {
//		cout << "enetr a number ";
//		cin >> num;
//		if (prime(num, 2))
//			cout <<num<< " is prime number.\n";
//		else
//			cout <<num<< " is not a prime number.\n";
//		cout << "do u want to repeat ?";
//		cin >> choice;
//	} 
//	while (choice == "yes" || choice == "Yes");
//}
//	
//
