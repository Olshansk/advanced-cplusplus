#include <iostream>

class Test {
private:
    std::string name;
    int age;

public:
    Test(std::string name, int age): name(name), age(age) {
    }

    friend std::ostream& operator << (std::ostream& out, const Test& test);
};

std::ostream& operator << (std::ostream& out, const Test& test) {
    std::cout << test.name << ": " << test.age << std::endl;
    return out;
}

template <class T>
void print(T t) {
    std::cout << t << std::endl;
}

int main() {
    print(1);
    print("a");

    Test t("a", 10);
    print(t);
//    print();
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
//template<class T>
//void print(T n) {
//	cout << n << endl;
//}
//
//int main() {
//	print<string>("Hello");
//	print<int>(5);
//
//	print("Hi there");
//
//	return 0;
//}
