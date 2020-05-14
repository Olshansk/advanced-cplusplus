#include <iostream>

using namespace std;
int main()
{

  class C {
    public:
    string s;
    int i;
  };
  C c = {"C", 0};

  struct S {
    string s;
    int i;
  };
  S s = {"S", 1};

  struct {
    string s;
    int i;
  } r1 = {"R1", 2}, r2 = {"R2", 3};

  cout << c.s << " " << c.i << endl;
  cout << s.s << " " << s.i << endl;
  cout << r1.s << " " << r1.i << endl;
  cout << r2.s << " " << r2.i << endl;
}

// //============================================================================
// // Name        :
// // Author      : John Purcell
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// int main() {
// 	int values[] = { 1, 4, 5 };
//
// 	cout << values[0] << endl;
//
// 	class C {
// 	public:
// 		string text;
// 		int id;
// 	};
//
// 	C c1 = { "Hello", 7 };
//
// 	cout << c1.text << endl;
//
// 	struct S {
// 		string text;
// 		int id;
// 	};
//
// 	S s1 = { "Hello", 7 };
//
// 	cout << s1.text << endl;
//
// 	struct {
// 		string text;
// 		int id;
// 	} r1 = { "Hello", 7 }, r2 = { "Hi", 9 };
//
//
// 	cout << r1.text << endl;
// 	cout << r2.text << endl;
//
// 	vector<string> strings;
// 	strings.push_back("One");
// 	strings.push_back("Two");
// 	strings.push_back("Three");
//
// 	return 0;
// }
