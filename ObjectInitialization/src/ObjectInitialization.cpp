#include <iostream>

using namespace std;

class Test{
private:
    int i {10};
    string s {"hello"};

public:

    Test() = default;

    Test(const Test& other) = default;

    Test(int i): i(i) {};

    Test& operator = (const Test& other) = default;

    void print();
};

void Test::print() {
    cout << s << " : " << i << endl;
}

int main(int argc, char* argv[]) {
    Test t1;
    t1.print();

    Test t2(t1);
    t2.print();

    Test t3 = t2;
    t3.print();

    Test t4(5);
    t4.print();


}

////============================================================================
//// Name        : ObjectInitialization.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Test
//{
//	int id{ 3 };
//	string name{"Mike"};
//
//public:
//	Test() = default;
//	Test(const Test &other) = delete;
//	Test& operator=(const Test& other) = delete;
//
//	Test(int id) : id(id)
//	{
//
//	}
//
//	void print()
//	{
//		cout << id << ": " << name << endl;
//	}
//};
//
//int main() {
//
//	Test test;
//	test.print();
//
//	Test test1(77);
//	test1.print();
//
//	/**
//	 * Won't work, we deleted them.
//	 */
//	//test2 = test;
//
//	return 0;
//}
