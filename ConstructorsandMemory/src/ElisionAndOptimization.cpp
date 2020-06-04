#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

class Test {
  private:
    static const int SIZE = 5;
    int* _iBuffer;

  public:
    Test() {
      _iBuffer = new int [SIZE];
    }

    Test(const Test& other) {
      _iBuffer = new int[SIZE];
      memcpy(_iBuffer, other._iBuffer, sizeof(int) * SIZE);
    }

    ~Test() {
      delete [] _iBuffer;
    }

    void print() {
      for (int i = 0; i < SIZE; i++) {
        cout << _iBuffer[i] << endl;
      }
      cout << "~~~" << endl;
    }

    void makeAllones() {
      for (int i = 0; i < SIZE; i++) {
        _iBuffer[i] = 1;
      }
    }
};

int main(int argc, char* argv[]) {
  Test t;
  t.print();
  t.makeAllones();
  t.print();
  Test t2(t);
  t2.print();
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
//         // alternate way to copy buffer.
//         //std::copy(other._pBuffer, other._pBuffer + SIZE, _pBuffer);
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
