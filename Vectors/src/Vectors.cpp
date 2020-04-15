//============================================================================
// Name        : Vectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

//    vector<string> strings(5);
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

//    strings[3] = "three";
//
    cout << strings[2] << endl;
    cout << strings.size() << endl;


    vector<string>::iterator it = strings.begin();
    cout << *it << endl;
    cout << *(it+1) << endl;
    cout << *(it+2) << endl;

    return 0;
}

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	vector<string> strings;
//
//	strings.push_back("one");
//	strings.push_back("two");
//	strings.push_back("three");
//
//	cout << "For loop: " << endl;
//	for(int i=0; i<strings.size(); i++) {
//		cout << strings[i] << endl;
//	}
//	cout << endl;
//
//	cout << "Iterator loop: " << endl;
//	for(auto it = strings.begin(); it != strings.end(); ++it) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	cout << "Single item." << endl;
//	vector<string>::iterator it = strings.begin();
//	it += 2;
//
//	cout << *it << endl;
//
//	return 0;
//}
