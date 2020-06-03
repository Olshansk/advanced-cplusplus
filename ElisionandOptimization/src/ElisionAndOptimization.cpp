#include <iostream>

using namespace std;

class Test {
private:
  int i{10};

public:
  Test() {
    cout << "Default constructor" << endl;
  }

  Test(int i): i(i) {
    cout << "Default constructor with integer" << endl;
  }

  Test(const Test& other) {
    cout << "Copy constructor" << endl;
    this->i = other.i;
  }

  Test &operator=(const Test& other) {
    cout << "Assignment Operator" << endl;
    return *this;
  }

  ~Test() {
    cout << "Destructor" << endl;
  }

  friend ostream& operator << (ostream& out, const Test& t);
};

ostream& operator << (ostream& out, const Test& t) {
  out << t.i << endl;
  return out;
}

Test returnByValue() {
  return Test();
}

Test& returnByReference() {
  Test t;
  return t;
}

int main(int argc, char* argv[]) {
  cout << "~~~~~~" << endl;
  Test t = returnByValue();
  cout << "~~~~~~" << endl;
  Test t2 = returnByReference();
  cout << "~~~~~~" << endl;
}

// //============================================================================
// // Name        : Elision.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Test {
//
// public:
// 	Test() {
// 		cout << "constructor" << endl;
// 	}
//
// 	Test(int i) {
// 		cout << "parameterized constructor" << endl;
// 	}
//
// 	Test(const Test &other) {
// 		cout << "copy constructor" << endl;
// 	}
//
// 	Test &operator=(const Test &other) {
// 		cout << "assignment" << endl;
// 		return *this;
// 	}
//
// 	~Test() {
// 		cout << "destructor" << endl;
// 	}
//
// 	friend ostream &operator<<(ostream &out, const Test &test);
// };
//
// ostream &operator<<(ostream &out, const Test &test) {
// 	out << "Hello from test";
// 	return out;
// }
//
// Test getTest() {
// 	return Test();
// }
//
// int main() {
//
// 	Test test1 = getTest();
//
// 	cout << test1 << endl;
//
// 	vector<Test> vec;
// 	vec.push_back(Test());
//
// 	return 0;
// }
