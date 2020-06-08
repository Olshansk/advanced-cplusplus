#include <iostream>
#include <vector>

class Test {
  private:
    int i{1};

  public:
    Test() {}

    Test(const Test& other) {
      this->i = other.i;
    }

    Test(int i): i(i) {}

    void print() {
      std::cout << i << std::endl;
    }

    void setI(int i) {
      this->i = i;
    }
};

void check(Test& t) {
  std::cout << "Other" << std::endl;
}

void check(const Test& t) {
  std::cout << "lValue" << std::endl;
}

void check(Test&& t) {
  std::cout << "rValue" << std::endl;
}


Test getTest() {
  return Test(10);
}

int main (int argc, char *argv[]) {
  Test t;

  std::vector<Test> vec;
  vec.push_back(getTest());
  vec[0].print();

  Test t2 = vec[0];
  Test& t3 = vec[0];
  vec[0].setI(100);
  t2.print();
  t3.print();

  // Doesn't work
  // Test& t4 = getTest();
  // This works instead
  const Test& t4 = getTest();

  Test&& t5 = getTest();

  check(t2);
  check(t3);
  check(t4);
  check(Test());

  return 0;
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
// #include <memory.h>
// using namespace std;
//
// class Test {
// private:
// 	static const int SIZE = 100;
//
// 	int *_pBuffer;
//
// public:
// 	Test() {
// 		cout << "constructor" << endl;
// 		_pBuffer = new int[SIZE] { };
// 	}
//
// 	Test(int i) {
// 		cout << "parameterized constructor" << endl;
// 		_pBuffer = new int[SIZE] { };
//
// 		for (int i = 0; i < SIZE; i++) {
// 			_pBuffer[i] = 7 * i;
// 		}
// 	}
//
// 	Test(const Test &other) {
// 		cout << "copy constructor" << endl;
//
// 		_pBuffer = new int[SIZE] { };
//
// 		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
// 	}
//
// 	Test &operator=(const Test &other) {
// 		cout << "assignment" << endl;
// 		_pBuffer = new int[SIZE] { };
//
// 		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
// 		return *this;
// 	}
//
// 	~Test() {
// 		cout << "destructor" << endl;
//
// 		delete[] _pBuffer;
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
// void check(const Test &value) {
// 	cout << "lValue function!" << endl;
// }
//
// void check(Test &&value) {
// 	cout << "rValue function!" << endl;
// }
//
// void intTest(const int &value) {
//     cout << "lValue int func!" << endl;
// }
//
// void intTest(int &&value) {
//     cout << "rValue int func!" << endl;
// }
// int main() {
//
// 	Test test1 = getTest();
//
// 	cout << test1 << endl;
//
// 	vector<Test> vec;
// 	vec.push_back(Test());
//
// 	Test &ltest1 = test1;
//
// 	Test &&rtest1 = getTest();
//
// 	check(test1);
// 	check(getTest());
// 	check(Test());
//
//     int num = 4;
//     intTest(++num);
//     intTest(num++);
//
// 	return 0;
// }
