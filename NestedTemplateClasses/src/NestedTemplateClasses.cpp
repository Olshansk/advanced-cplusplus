#include <iostream>
#include "ring.h"
#include "ring2.h"

using namespace std;

int main(int argc, char* argv[]) {

    ring<int> r(3);
    r.add(1);
    r.add(2);
    r.add(3);
    r.add(4);

    for (int i = 0; i < r.size(); i++) {
        cout << r.get(i) << endl;
    }

    ring2<string> r2(2);
    r2.add("first");
    r2.add("second");
    r2.add("third");

    for (int i = 0; i < r2.size(); i++) {
        cout << r2.get(i) << endl;
    }

    return 0;
}

////============================================================================
//// Name        : NestedTemplateClasses.cpp


//// Author      : John Purcell
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Nested Template classes
////============================================================================
//
//#include <iostream>
//#include <string>
//#include "ring.h"
//using namespace std;
//
//int main() {
//
//	ring<string>::iterator it;
//	it.print();
//
//	ring<string> textRing(3);
//
//	textRing.add("one");
//	textRing.add("two");
//	textRing.add("three");
//	textRing.add("four");
//
//
//	for(auto i =0; i < textRing.size(); i++)
//	{
//		cout << textRing.get(i) << endl;
//	}
//
//	return 0;
//}
