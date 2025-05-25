//#include<iostream>
//#include<fstream>
//#include <cctype>
//#include <iomanip>
//#include <string>
//using namespace std;
//EXAMPLE 1.1:
//int max1(int x, int y) {
//	return (x > y) ? x : y;
//}
//void max2(int x, int y, int& larger) {
//	larger= (x > y) ? x : y;
//}
//void max3(int x, int y, int* larger) {
//	*larger = (x > y) ? x : y;
//}
//int main() {
//	int n1 = 10, n2 = 30; int Larger = 0;
//	cout << "1st maximum number is :" << max1(n1, n2) << endl;
//	max2(n1, n2, Larger);
//	cout << "2nd maximum number is: " << Larger << endl;
//	max3(n1, n2, &Larger);
//	cout << "3rd maximum number is: " << Larger << endl;
//}
//EXAMPLE 1.2:
//class complex {
//	float real;
//	float imaj;
//public:
//	complex() :real(0), imaj(0) {}
//	complex(float r, float i) {
//		real = r;
//		imaj = i;
//	}
//	complex(float r) {
//		real = r;
//		imaj = 0.0;
//	}
//	~complex() {}
//	double Magnitude() {
//		return sqrt(real * real + Imajinary() * Imajinary());
//	}
//	float Real() { return real; }
//	float Imajinary() { return imaj; }
//	complex operator +(complex b) {
//		return complex(real + b.real, imaj + b.imaj);
//	}
//	complex operator =(complex b) {
//		real = b.real;
//		imaj = b.imaj;
//		return *this;
//	}
//};
//int main() {
//	complex a(1.0, 1.0);
//	complex* b = new complex(5.0);
//	complex c(0, 0);
//	cout << "a real =" << a.Real() << " a imajinary =" << a.Imajinary() << endl;
//	cout << "b real =" << b->Real() << " b imajinary =" << b->Imajinary() << endl;
//	cout << "c real =" << c.Real() << " c imajinary =" << c.Imajinary() << endl;
//}
//EXERCISE 1.1
//class Complex {
//	int real, imaj;
//public:
//	Complex() :real(0), imaj(0) {}
//	Complex(int r, int i) {
//		real = r;
//		imaj = i;
//	}
//	~Complex() {}
//	Complex operator*(Complex& b) {
//		Complex temp;
//		temp.real = (real * b.real) - (imaj * b.imaj);  
//		temp.imaj = (real * b.imaj) + (imaj * b.real);  
//		return temp;
//
//	}
//	void output() {
//		cout << real << ":" << imaj <<"i" <<endl;
//	}
//};
//int main() {
//	Complex c1(3, 4);
//	Complex c2(5, 6);
//	Complex c3;
//	c3 = c1 * c2;
//	c3.output();
//}
//EXAMPLE 1.3:
//template<typename T>T Getmax(T a, T b) {
//	return (a > b) ? a : b;
//	/*T result;
//	result= (a > b) ? a : b;
//	return result;*/
//}
//int main() {
//	int a = 5, b = 6;
//	long x = 10, y = 7;
//	cout << "max is :" << Getmax(a, b);
//	cout << "\nmax is :" << Getmax(x, y);
//}
// 
//EXAMPLE 1.4:
//template<typename T>
//class mypair {
//	T a,b;
//public:
//	mypair(T first, T second) {
//		a = first;
//		b = second;
//	}
//	T getmax(); 
//};
//template<typename T>T mypair<T>::getmax() {
//	return (a > b) ? a : b;
//}
//int main() {
//	mypair<int>object(3, 4);
//	cout << "max is :" << object.getmax();
//	mypair<float>object2(3.5, 4.8);
//	cout << "\nmax is :" << object2.getmax();
//	
//	}
// EXERCISE 1.2
//template<typename T>
//class mypair {
//	T a, b;
//public:
//	mypair(T first, T second) {
//		a = first;
//		b = second;
//	}
//	T getmax() {
//		return (a > b) ? a : b;
//	}
//	T getmin();
//};
//template<typename T>T mypair<T>::getmin() {
//	return  (a <b) ? a : b;
//}
//int main() {
//	mypair<int>object(3, 4);
//	cout << "1st max number is :" << object.getmax();
//	mypair<float>object2(3.5, 4.8);
//	cout << "\n2nd max number is :" << object2.getmax();
//	cout << "\n\n1st min number is :" << object.getmin();
//	cout << "\n2nd min number is :" << object2.getmin();
//}
//EXAMPLE 1.5:
//template<typename T, int N>
//class mysequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value) {
//		memblock[x] = value;
//	}
//	T getmember(int x);
//};
//template<typename T, int N>T mysequence<T, N>::getmember(int x) {
//	return memblock[x];
//}
//int main() {
//	mysequence<int, 5>myint;
//	myint.setmember(0, 100);
//	cout << myint.getmember(0);
//
//	mysequence<double, 5>myfloat;
//	myfloat.setmember(3, 300);
//	cout << endl;
//	cout << myfloat.getmember(3);
//}
//EXERCISE 1.3:
//template<typename T, int N>
//class mysequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value) {
//		memblock[x] = value;
//	}
//	T getmember(int x);
//	T getmax() {
//		T max = memblock[0];
//		for (int i = 0; i < N; i++) {
//			if (memblock[i] > max) {
//				max = memblock[i];
//
//			}
//			else {
//				max = max;
//
//
//			}
//		}
//		return max;
//	}
//	T getmin() {
//		T min = memblock[0];
//		for (int i = 0; i < N; i++) {
//			if (memblock[i] < min) {
//				min = memblock[i];
//
//			}
//			else {
//				min = min;
//
//			}
//		}
//		return min;
//	}
//};
//template<typename T, int N>T mysequence<T, N>::getmember(int x) {
//	return memblock[x];
//}
//int main() {
//	mysequence<int, 5>myint;
//	myint.setmember(0, 100);
//	myint.setmember(1, 50);
//	myint.setmember(2, 110);
//	myint.setmember(3, 60);
//	myint.setmember(4, 70);
//	cout << "max is :" << myint.getmax();
//	cout << endl;
//	cout << "min is :" << myint.getmin();
//}
//Example 1.6:
//int main(void) {
//	ofstream outfile;
//	outfile.open("fout.txt");
//	ifstream infile("fout.txt");
//	if (!infile.is_open()) {
//		cerr << "file could not be opened";
//	}
//	char ch;
//	int count = 0;
//	while (infile.get(ch)) {
//		outfile << ch;
//		count++;
//	}
//	outfile << "\n number of characters is :" << count << endl;
//	infile.close();
//	outfile.close();
//}
//EXERCISE 1.4:
//int main() {
//    
//    ofstream outfile("fout.txt");
//    if (!outfile) {
//        cerr << "error opening file !" << endl;
//        return 1;
//    }
//    outfile << "Hello world. welcome to fist DSA class?";
//    outfile.close(); 
//    ifstream infile("fout.txt");
//    if (!infile) {
//        cerr << "error opening file !" << endl;
//        return 1;
//    }
//
//    
//    char ch;
//    int countofchar = 0, countofword = 0, sentenceCount = 0;
//    bool Word = false;
//
//    while (infile.get(ch)) {
//        countofchar++;
//
//        if (isspace(ch) || ispunct(ch)) {
//            if (Word) {
//                countofword++;
//                Word = false;
//            }
//        }
//        else {
//           Word = true;  
//        }
//
//        if (ch == '.' || ch == '?' || ch == '!') {
//            sentenceCount++;  
//        }
//    }
//
//    if (Word) {
//        countofword++;
//    }
//
//    infile.close();  
//
//    
//    outfile.open("fout.txt", ios::app); 
//    if (!outfile) {
//        cerr << "error opening file !" << endl;
//        return 1;
//    }
//    outfile << "\nnumber of characters: " << countofchar;
//    outfile << "\nnumber of words: " << countofword;
//    outfile << "\nnumber of sentences: " << sentenceCount << endl;
//    outfile.close();  
//    cout << "number of characters: " << countofchar << endl;
//    cout << "number of words: " << countofword << endl;
//    cout << "number of sentences: " << sentenceCount << endl;
//
//    return 0;
//}

//EXAMPLE 1.7:
//int main() {
//    char name[10];
//    float mt1, mt2, final, avg;
//
//    ifstream fin("input.dat");
//    ofstream fout("output.dat");
//
//    
//    while (!fin.eof()) {
//        fin >> name >> mt1 >> mt2 >> final;
//        avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
//        fout << name << '\t' << avg << endl;
//    }
//
//    fin.close();
//    fout.close();
//
//    return 0;
//}
//
//EXERCISE 1.5:
//class House {
//private:
//    string owner;
//    string address;
//    int bedrooms;
//    float price;
//
//public:
//    void readdata() {
//        cout << "Enter Owner: ";
//        getline(cin, owner);
//        cout << "Enter Address: ";
//        getline(cin, address);
//        cout << "Number of Bedrooms? : ";
//        cin >> bedrooms;
//        cout << "Price: ";
//        cin >> price;
//        cin.ignore(); 
//    }
//
//    void displaydata() const {
//        cout << left << setw(15) << owner
//            << setw(20) << address
//            << setw(10) << bedrooms
//            << setw(10) << price << endl;
//    }
//};
//
//int main() {
//    House data[100]; 
//    int count = 0;
//    char choice;
//
//    
//    do {
//        data[count].readdata();
//        count++;
//
//        cout << "\nenter another house? (Y/N): ";
//        cin >> choice;
//        cin.ignore(); 
//
//    }
//    while ((choice == 'Y' || choice == 'y') && count < 100);
//
//   
//    cout << endl;
//    cout << left << setw(15) << "Owner"
//        << setw(20) << "Address"
//        << setw(10) << "Bedrooms"
//        << setw(10) << "Price" << endl;
//
//    for (int i = 0; i < count; i++) {
//        data[i].displaydata();
//    }
//
//    return 0;
//}


//EXERCISE 1.6:
//class Student {
//private:
//    char name[30];   
//    int grades[10];  
//    float average;   
//public:
//    void read(ifstream& file, int numGrades) {
//        file.ignore();
//        file.getline(name, 30, ' '); 
//
//        int sum = 0;
//        for (int i = 0; i < numGrades; i++) {
//            file >> grades[i];
//            sum += grades[i];
//        }
//
//        average = static_cast<float>(sum) / numGrades; 
//    }
//
//    void display(int numGrades) const {
//        cout << left << setw(20) << name;
//        for (int i = 0; i < numGrades; i++) {
//            cout << setw(5) << grades[i];
//        }
//        cout << setw(10) << average << endl;
//    }
//
//    float displayaverage() const {
//        return average;
//    }
//
//    const char* getName() const {
//        return name;
//    }
//};
//
//int main() {
//    char filename[50];
//    cout << "enter the filename: ";
//    cin >> filename;
//
//    ifstream file(filename);
//    if (!file) {
//        cerr << "Error opening file!" << endl;
//        return 1;
//    }
//
//    int numstudents, numGrades;
//    file >> numstudents >> numGrades;
//
//    Student data[100];
//    float classSum = 0, classAverage;
//    float highestAvg = 0, lowestAvg = 100;
//    char highestStudent[30], lowestStudent[30];
//
//    for (int i = 0; i < numstudents; i++) {
//        data[i].read(file, numGrades);
//        classSum += data[i].displayaverage();
//
//        if (data[i].displayaverage() > highestAvg) {
//            highestAvg = data[i].displayaverage();
//            strcpy(highestStudent, data[i].getName());
//        }
//        if (data[i].displayaverage() < lowestAvg) {
//            lowestAvg = data[i].displayaverage();
//            strcpy(lowestStudent, data[i].getName());
//        }
//    }
//
//    file.close();
//    classAverage = classSum / numstudents;
//
//    cout << "\nStudent Data:\n";
//    cout << left << setw(20) << "Name";
//    for (int i = 0; i < numGrades; i++) {
//        cout << setw(5) << "G" + to_string(i + 1);
//    }
//    cout << setw(10) << "Average" << endl;
//
//    for (int i = 0; i < numstudents; i++) {
//        data[i].display(numGrades);
//    }
//    cout << "\nClass Average: " << classAverage << endl;
//    cout << "Highest Average: " << highestAvg << " (" << highestStudent << ")\n";
//    cout << "Lowest Average: " << lowestAvg << " (" << lowestStudent << ")\n";
//    cout << endl;
//    cout << "Students with below-class average:\n";
//    for (int i = 0; i < numstudents; i++) {
//        if (data[i].displayaverage() < classAverage) {
//            cout << data[i].getName() << " (" << data[i].displayaverage() << ")\n";
//        }
//    }
//
//    return 0;
//}
