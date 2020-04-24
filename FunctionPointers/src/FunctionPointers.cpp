#include <iostream>

using namespace std;

void test() {
    cout << "test" << endl;
}

void test1(int v1) {
    cout << "test1 " << " v1 " << v1 << endl;
}

void test2(int v1, string v2) {
    cout << "test2" << " v1: " << v1 << " v2: " << v2 << endl;
}

using FunctionTest2TypeV1 = void (*)(int, string);
using FunctionTest2TypeV2 = std::add_pointer<void(int, string)>::type;
typedef void (*FunctionTest2TypeV3)(int, string) ;

int main() {
    test();

    void (*pTest)() = test;
    void (*pTestR)() = &test;
    pTest();
    pTestR();

    void (*pTest1)(int) = test1;
    void (*pTest1R)(int) = &test1;

    pTest1(10);
    pTest1R(11);

    FunctionTest2TypeV1 pTest2V1 = test2;
    FunctionTest2TypeV2 pTest2V2 = test2;
    FunctionTest2TypeV3 pTest2V3 = test2;
    pTest2V1(1, "v1");
    pTest2V2(2, "v2");
    pTest2V3(3, "v3");

//    void (*pTest2)(int) = test2;
//    void (*pTest2R)(int) = &test2;

    return 0;
}

////============================================================================
//// Name        : Function.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//
//using namespace std;
//
//void test(int value) {
//	cout << "Hello: " << value << endl;
//}
//
//int main() {
//	test(7);
//
//	void (*pTest)(int) = test;
//
//	pTest(8);
//
//
//
//	return 0;
//}
