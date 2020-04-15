//============================================================================
// Name        : Custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MyException: public exception {
public:
    virtual const char* what() const throw();
};

class Test {

public:
    void throwException() {
        throw MyException();
    }
};

const char* MyException::what() const throw(){
    return "This is a custom exception";
}

int main() {

    Test t;
    try {
        t.throwException();
    } catch (MyException &e) {
        cout << e.what() << endl;
    }

    return 0;
}

//#include <iostream>
//#include <exception>
//
//using namespace std;
//
//class MyException: public exception {
//public:
//	virtual const char* what() const throw() {
//		return "Something bad happened!";
//	}
//};
//
//class Test {
//public:
//	void goesWrong() {
//		throw MyException();
//	}
//};
//
//int main() {
//
//	Test test;
//
//	try {
//		test.goesWrong();
//	}
//	catch(MyException &e) {
//		cout << e.what() << endl;
//	}
//
//
//	return 0;
//}
