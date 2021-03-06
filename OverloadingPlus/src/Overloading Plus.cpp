#include <iostream>
#include "Complex.h"

using namespace olshansky;
using namespace std;

int main() {

    Complex c1(1, 1);
    Complex c2(2, 2);

    cout << c1 << endl;
    cout << c2 << endl;
    cout << c1 + c2 << endl;
    cout << c1 + 5 + c2 + 10 << endl;

    cout << "Is equal: " << (c1 == c2) << endl;
    cout << "Is not equal: " << (c1 != c2) << endl;

    cout << "Conjugate of " << c1 << " is " << (*c1) << endl;

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
//#include "Complex.h"
//
//using namespace std;
//using namespace caveofprogramming;
//
//int main() {
//
//	Complex c1(3, 4);
//	Complex c2(2, 3);
//
//	Complex c3 = c1+c2;
//
//	cout << c1 << endl;
//
//	cout << c1+c2+c3 << endl;
//
//	Complex c4(4, 2);
//	Complex c5 = c4+7;
//	cout << c5 << endl;
//
//	Complex c6(1, 7);
//
//	cout << 3.2 + c6 << endl;
//
//	cout << 7 + c1 + c2 + 8 + 9 + c6 << endl;
//
//
//	return 0;
//}
