#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
  Test() {
    cout << "Initialize" << endl;
  }

  void print() {
    cout << "Printing" << endl;
  }

  ~Test() {
    cout << "Destroy" << endl;
  }
};

int main(int argc, char* argv[]) {

  std::unique_ptr<Test> t;
  t->print();

  std::unique_ptr<Test[]> tArray(new Test[3]);
  tArray[2].print();

  return 0;
}

// #include <iostream>
// #include <memory>
//
// using namespace std;
//
// class Test {
// public:
// 	Test() {
// 		cout << "created" << endl;
// 	}
//
// 	void greet() {
// 		cout << "Hello" << endl;
// 	}
//
// 	~Test() {
// 		cout << "destroyed" << endl;
// 	}
// };
//
// class Temp {
// private:
// 	unique_ptr<Test[]> pTest;
//
// public:
// 	Temp(): pTest(new Test[2]) {
//
// 	}
// };
//
// int main() {
//
// 	Temp temp;
//
// 	unique_ptr<Test[]> pTest(new Test[2]);
//
// 	pTest[1].greet();
//
// 	cout << "Finished" << endl;
//
// 	return 0;
// }
