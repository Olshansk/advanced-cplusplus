//============================================================================
// Name        : A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"

using namespace std;
using namespace olshansky;

int main() {

	Complex c1(2, 3);
	Complex c2(c1);

	Complex c3;

	c3 = c2;

	cout << c1 << " " << c2 << endl;

//	cout << c2 << ": " << c3 << endl;

	return 0;
}
