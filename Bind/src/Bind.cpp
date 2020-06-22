#include <iostream>
#include <functional>

using namespace std;

class Test {

private:
  int i{999};

public:
  int add(int a, int b, int c) {
    return i + a + b + c;
  }
};

int add_all(int a, int b, int c) {
  cout << a << " " << b << " " << c << ": ";
  return (a + b + c);
}

int add_100_wrapper_5_6(std::function<int(int, int)> foo) {
  return foo(5, 6);
}

int main(int argc, char *argv[]) {
  auto add_all_100 = std::bind(add_all, std::placeholders::_2, 100, std::placeholders::_1);

  Test t;
  auto t_wrapper = std::bind(&Test::add, t, std::placeholders::_1, std::placeholders::_2, 0);

  cout << "add_all: " << add_all(1, 100, 3) << endl;
  cout << "add_all_100: " << add_all_100(1, 3) << endl;
  cout << "add_100_wrapper_5_6: " << add_100_wrapper_5_6(add_all_100) << endl;
  cout << "t_wrapper: " << t_wrapper(0, 1) << endl;
}

// //============================================================================
// // Name        : Bind.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// #include <functional>
//
// using namespace std;
// using namespace placeholders;
//
// class Test {
// public:
// 	int add(int a, int b, int c) {
// 		cout << a << ", " << b << ", " << c << endl;
// 		return a + b + c;
// 	}
// };
//
// int run(function<int(int, int)> func) {
// 	return func(7, 3);
// }
//
// int main() {
//
// 	Test test;
//
// 	auto calculate = bind(&Test::add, test, _2, 100, _1);
//
// 	cout << run(calculate) << endl;
//
// 	return 0;
// }
