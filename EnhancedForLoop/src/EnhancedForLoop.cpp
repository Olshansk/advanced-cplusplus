#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  auto strs = {"first", "second", "third"};
  string strs2[] = {"first2", "second2", "third2"};

  for (auto s: strs) {
    cout << s << endl;
  }
  cout << endl;
  for (auto s: strs2) {
    cout << s << endl;
  }

  auto ints = {1,2,3};
  int ints2[] = {1,2,3};

  for (auto i : ints) {
    cout << i << endl;
  }
  cout << endl;
  for (auto i : ints2) {
    cout << i << endl;
  }

  // string* strs3 = {"first", "second", "third"};
  // auto str =
  return 0;
}

// //============================================================================
// // Name        : EnhancedForLoop.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Enhanced for loops.
// //============================================================================
//
// #include <iostream>
// #include <vector>
// #include <string>
//
// using namespace std;
//
//
// int main() {
//
// 	auto texts = { "one", "two", "three" };
//
// 	for (auto text : texts)
// 	{
// 		cout << text << endl;
// 	}
//
// 	vector<int> numbers;
// 	numbers.push_back(5);
// 	numbers.push_back(7);
// 	numbers.push_back(9);
// 	numbers.push_back(11);
//
// 	for(auto number: numbers)
// 	{
// 		cout << number << endl;
// 	}
//
//
// 	string hello = "Hello";
// 	for(auto c : hello)
// 	{
// 		cout << c << endl;
// 	}
// 	return 0;
// }
