#include <iostream>

using namespace std;

class Test{
private:
    int age;
    string name;

public:
    Test(): age(0), name("") {

    }

    Test(int age, string name): age(age), name(name) {

    }
    Test(const Test& other) {
        *this = other;
    }


    const Test& operator = (const Test& other) {
        age = other.age;
        name = other.name;
        return *this;
    }

    friend ostream& operator << (ostream& out, const Test& test);

};

ostream& operator << (ostream &out, const Test &test) {
    out << test.name << ": " << test.age;
    return out;

}

int main() {
    Test test1(1, "a");
    Test test2(2, "b");

    cout << test1 << " ; "<< test2 << endl;
    return 0;
}









////============================================================================
//// Name        : Overloading.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <ostream>
//#include <string>
//using namespace std;
//
//class Test {
//private:
//	int id;
//	string name;
//
//public:
//	Test() :
//			id(0), name("") {
//	}
//
//	Test(int id, string name) :
//			id(id), name(name) {
//
//	}
//
//	const Test &operator=(const Test &other) {
//		id = other.id;
//		name = other.name;
//
//		return *this;
//	}
//
//	Test(const Test &other) {
//		*this = other;
//	}
//
//	friend ostream &operator<<(ostream &out, const Test &test) {
//		out << test.id << ": " << test.name;
//		return out;
//	}
//};
//
//int main() {
//
//	Test test1(10, "Mike");
//
//	cout << test1 << endl;
//
//	return 0;
//}
