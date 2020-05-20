#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

class Test {
private:
    std::vector<string> texts;

public:
    Test(initializer_list<string> strs) {
        for (auto str: strs) {
            texts.push_back(str);
        }
    }

    void print() {
        for (auto s: texts) {
            cout << s << endl;
        }
    }

    void print(initializer_list<string> strs) {
        for (auto s: strs) {
            cout << s << endl;
        }
    }
};

int main (int argc, char* argv[]) {

    Test t {"a", "b", "c"};
    t.print();
    cout << "\n" << endl;
    t.print({"d", "e", "f"});
    return 0;
}

////============================================================================
//// Name        : RingBuffer.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <initializer_list>
//
//using namespace std;
//
//class Test
//{
//public:
//	Test(initializer_list<string> texts)
//	{
//		for(auto value : texts)
//		{
//			cout << value << endl;
//		}
//	}
//
//	void print(initializer_list<string> strings)
//	{
//		for (auto value : strings)
//		{
//			cout << value << endl;
//		}
//	}
//};
//int main() {
//
//	vector<int> numbers{ 1, 3, 4, 6 };
//	cout << numbers[2] << endl;
//
//	Test test{ "apple", "orange", "banana" };
//
//	test.print({ "one", "two", "three", "four" });
//
//
//	return 0;
//}
