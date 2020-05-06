#include <iostream>
#include <typeinfo>
using namespace std;

class MyClass {
private:
  int m;

public:
  MyClass(): m(11) {};
  MyClass(int m): m(m) {};
  friend ostream& operator << (ostream& out, MyClass& m);
};

ostream& operator << (ostream& out, MyClass& m) {
  out << m.m;
  return out;
};

int main() {

  double d = 5.0;
  int i = 5;
  string s = "s";
  MyClass m(5);

  cout << typeid(d).name() << ": " << d << endl;
  cout << typeid(i).name() << ": " << i << endl;
  cout << typeid(s).name() << ": " << s << endl;
  cout << typeid(m).name() << ": " << m << endl;
  cout << endl;

  decltype(d) d2 = 6;
  decltype(i) i2 = 6;
  decltype(s) s2 = "6";
  decltype(m) m2(6);

  cout << typeid(d2).name() << ": " << d2 << endl;
  cout << typeid(i2).name() << ": " << i2 << endl;
  cout << typeid(s2).name() << ": " << s2 << endl;
  cout << typeid(m2).name() << ": " << m2 << endl;
  cout << endl;

  return 0;
}

// //============================================================================
// // Name        : DecltypeAndTypeid.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Decltype and typeid in C++
// //============================================================================
//
// #include <iostream>
// #include <string>
// #include <typeinfo>
//
// using namespace std;
//
// class Test
// {
// public:
// 	Test() {}
// 	~Test() {}
// };
//
// int main() {
// 	int value;
// 	string str;
// 	Test test;
//
// 	cout << typeid(value).name() << endl;
// 	cout << typeid(str).name() << endl;
// 	cout << typeid(test).name() << endl;
//
// 	decltype(str) name = "Bob";
//
// 	cout << name << endl;
// 	return 0;
// }
