#include <iostream>

using namespace std;

class Person {
public:
  void print() {
    cout << "testing" << endl;
  }
};

class Man: public Person {
};

int main(int argc, char* argv[]) {
  Person p;
  Man m;

  Person *pp = &p;
  cout << pp << endl;

  Man *mp = static_cast<Man*>(&p);
  cout << mp << endl;

  Person *pp2 = static_cast<Person*>(&m);
  cout << pp2 << endl;

  Person&& prv = static_cast<Person&&>(p);
  cout << &prv << endl;
  prv.print();

  return 0;
}


// //============================================================================
// // Name        : Static.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// using namespace std;
//
// class Parent {
// public:
// 	void speak() {
// 		cout << "parent!" << endl;
// 	}
// };
//
// class Brother: public Parent {
//
// };
//
// class Sister: public Parent {
//
// };
//
// int main() {
//
// 	Parent parent;
// 	Brother brother;
//
// 	Parent *ppb = &brother;
//
// 	Brother *pbb = static_cast<Brother *>(ppb);
//
// 	cout << pbb << endl;
//
// 	Parent &&p = static_cast<Parent &&>(parent);
// 	p.speak();
//
// 	return 0;
// }
