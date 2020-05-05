#include <iostream>

using namespace std;

struct Test {
    virtual bool operator()(string& test)=0;
};

struct MatchTest : public Test {
    virtual bool operator()(string& test) {
        return test == "valid" ? true : false;
    }
};

void check_test(string& text, Test& tester) {
    if (tester(text)) {
        cout << "Tester matched string!" << endl;
    } else {
        cout << "Tester did not match string..." << endl;
    }
}

int main() {

    MatchTest m;
    Test *t = &m;

    string valid = "valid";
    string invalid = "invalid";

    cout << "About to test 'Matchtest'\n" << endl;
    check_test(valid, m);
    check_test(invalid, m);

    cout << "About to test 'Test'\n" << endl;
    check_test(valid, *t);
    check_test(invalid, *t);

    return 0;
}







////============================================================================
//// Name        : Functors.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Functors in C++.
////============================================================================
//
//#include <iostream>
//
//using namespace std;
//
//struct Test
//{
//	virtual bool operator()(string &text) = 0;
//};
//
//struct MatchTest : Test
//{
//	virtual bool operator()(string &text){
//		return text == "lion";
//	}
//};
//
//struct MyMatchTest : Test
//{
//	virtual bool operator()(string &text) {
//		return text == "text";
//	}
//};
//
//void check(string text, Test &t)
//{
//	if(t(text))
//	{
//		cout << "Text matches!" << endl;
//	}
//	else
//	{
//		cout << "No match." << endl;
//	}
//}
//
//int main() {
//
//	MatchTest pred;
//	string value = "lion";
//
//	cout << pred(value) << endl;
//
//	check(value, pred);
//
//	MyMatchTest myPred;
//	check(value, myPred);
//
//	return 0;
//}
