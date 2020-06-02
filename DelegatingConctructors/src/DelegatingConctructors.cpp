#include <iostream>
#include <vector>
#include <map>

using namespace std;
using MapType = map<string, int>;

class Parent {
private:
  int i{5};
  string s;

protected:
  MapType m;

public:
  Parent() {
    m.insert(make_pair("0", 0));
  }

  Parent(string s): s(s) {
    m.insert(make_pair(s, 1));
  }

  Parent(const Parent& other) {
    this->i = other.i;
    this->s = other.s;
    this->m = other.m;
  }

  void iterate_map() {
    for(auto p : m) {
      cout << p.first << " ";
    }
    cout << endl;
  }

  void add(pair<string, int> p) {
    m.insert(p);
  }

};

class Child: public Parent {
  public:
    Child() = default;
    Child(const Parent& p): Parent(p) {
      // this->m = p.m;

    }

    Child(string s1, string s2): Parent(s1) {
      m.insert(make_pair(s2,2));
    };
};

int main(int argc, char* argv[]) {
  Parent p;
  p.add(make_pair("a", 10));

  Child c = p;
  c.iterate_map();

  p.add(make_pair("b", 12));
  c.add(make_pair("c", 13));
  c.iterate_map();
  cout << "~~~" << endl;
  Child c2("s1", "s2");
  c2.iterate_map();

  [](string s){
    cout << s << endl;
  }("here");

}

// //============================================================================
// // Name        : Delegating.cpp
// // Author      : John Purcell
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// using namespace std;
//
// class Parent {
// 	int dogs{5};
// 	string text{"hello"};
//
// public:
// 	Parent(): Parent("hello") {
// 		cout << "No parameter parent constructor" << endl;
// 	}
//
// 	Parent(string text) {
// 		cout << "string parent constructor" << endl;
// 	}
// };
//
// class Child: public Parent {
// public:
// 	Child() = default;
// };
//
// int main() {
// 	Parent parent("Hello");
// 	Child child;
// 	return 0;
// }
