#include <iostream>

template<class T, class K>
class Test {
private:
    T t;
    K k;

public:
    Test(T t, K k): t(t), k(k) {

    }

    void print() {
        std::cout << "T: " << t << " K: " << k << std::endl;
    }

};

int main() {
    Test<int, int> t1(1, 2);
    Test<std::string, int> t2("a", 2);

    t1.print();
    t2.print();

    return 0;
}





////============================================================================
//// Name        : Template.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T, class K>
//class Test {
//private:
//	T obj;
//	K id;
//public:
//	Test(T obj, K m_id) {
//		this->obj = obj;
//		this->id = m_id;
//	}
//
//	void print() {
//		cout << obj << ": " << id << endl;
//	}
//};
//
//int main() {
//
//	Test<string, int> test1("Hello", 5);
//	test1.print();
//
//	Test<string, double> test2("Hello again", 4.0);
//	test2.print();
//
//	return 0;
//}
