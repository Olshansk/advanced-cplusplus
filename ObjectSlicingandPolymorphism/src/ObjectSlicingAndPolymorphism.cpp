#include <iostream>

using namespace std;


class Parent {
protected:
    int v1;

public:

    Parent(): v1(0) {

    }

    Parent(int v1): v1(v1) {

    }

    Parent (const Parent& other) {
        cout << "Parent copy constructor" << endl;
        v1 = other.v1;
    }

//    virtual void print() {
    virtual void print() {
        cout << "Parent: " << v1 << endl;
    }
};

class Child: public Parent {
private:
    int v2;

public:

    Child(): v2(0) {
        v1 = 10;
    }

    void print() {
        cout << "Child: v1: " << v1 << " v2: " << v2 << endl;
    }

};

int main() {
    Parent p1(1);
    p1.print();

    Child c;
    Parent& p2 = c;
    c.print();
    p2.print();

    Parent p3 = c;
    p3.print();

    Parent p4(c);
    p4.print();


//    Child
//    return 0;
}


////============================================================================
//// Name        : Object.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//using namespace std;
//
//class Parent {
//private:
//	int one;
//
//public:
//	Parent(): one(0) {
//
//	}
//
//	Parent(const Parent &other): one(0) {
//
//		one = other.one;
//		cout << "copy parent" << endl;
//	}
//
//	virtual void print() {
//		cout << "parent" << endl;

//	}
//
//	virtual ~Parent() {
//
//	}
//};
//
//class Child: public Parent {
//private:
//	int two;
//
//public:
//	Child(): two(0) {
//
//	}
//
//	void print() {
//		cout << "child" << endl;
//	}
//};
//
//int main() {
//
//	Child c1;
//	Parent &p1 = c1;
//	p1.print();
//
//	Parent p2 = Child();
//	p2.print();
//
//	return 0;
//}
