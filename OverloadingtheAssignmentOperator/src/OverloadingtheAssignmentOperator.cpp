#include <iostream>
#include <string>

using namespace std;

class Test {
private:
    int age;
    string name;

public:

    Test(): age(0), name("") {

    }

    Test(int age, string name): age(age), name(name) {

    }

    void setAge(int age) {
        this->age = age;
    }

    Test(const Test& other) {
        cout << "Copy constructor" << endl;
        age = other.age;
        name = other.name;
    }

    const Test& operator = (const Test& other) {
        cout << "Assignment operator" << endl;
        age = other.age;
        name = other.name;
        return *this;
    }

    void print() {
        cout << name << ": " << age << endl;
    }

};

int main() {
    Test test1(1, "a");
    test1.print();

    cout << endl;

    Test test2;
    test2 = test1;
    test2.setAge(2);
    test1.print();
    test2.print();

    cout << endl;

    Test test3 = test2;
    test3.setAge(3);
    test1.print();
    test2.print();
    test3.print();

    return 0;
}




////============================================================================
//// Name        : OverloadingtheAssignmentOperator.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Assignment operator overloading.
////============================================================================
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Test
//{
//	int id;
//	string name;
//
//public:
//	Test() : id(0), name("")
//	{
//
//	}
//
//	Test(int id, string name) : id(id), name(name)
//	{
//
//	}
//
//	Test(const Test& other)
//	{
//		cout << "Copy constructor running" << endl;
//		this->id = other.id;
//		this->name = other.name;
//	}
//
//	const Test& operator=(const Test &other) {
//		cout << "Assignment running" << endl;
//		this->id = other.id;
//		this->name = other.name;
//		return *this;
//	}
//
//	void print() const
//	{
//		cout << id << ": " << name << endl;
//	}
//};
//
//int main() {
//
//	Test test1(10, "Mike");
//	cout << "Print test1: " << flush;
//	test1.print();
//
//	Test test2(20, "Bob");
//
//	test2 = test1;
//	cout << "Print test2: " << flush;
//	test2.print();
//
//	Test test3;
//	test3 = test2;
//	cout << "Print test3: " << flush;
//	test3.print();
//
//	cout << endl;
//
//	// Copy initialization.
//	Test test4 = test1;
//	test4.print();
//	return 0;
//}
