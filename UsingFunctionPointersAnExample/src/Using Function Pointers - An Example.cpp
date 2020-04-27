#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using GT5Func = std::function<bool(const string&)>;


bool greaterThan5(const std::string& test) {
    return test.size() > 5;
}

int customCount(const vector<string>& vec) {
    int count = 0;
    for (const string& s : vec) {
        if (s.size() > 5) {
            count += 1;
        }
    }
    return count;
}

int customCount2(const vector<string>& vec, GT5Func match) {
//int customCount2(const vector<string>& vec, bool (*match)(const string& test)) {
    int count = 0;
    for (const string& s : vec) {
        if (match(s)) {
            count += 1;
        }
    }
    return count;
}

int main () {

    vector<string> vec;
    vec.push_back("A-1");
    vec.push_back("B-22");
    vec.push_back("C-333");
    vec.push_back("D-4444");
    vec.push_back("E-5555");

    int c1 = count_if(vec.begin(), vec.end(), greaterThan5);
    cout << "GT5 count: " << c1 << endl;

    int c2 = count_if(vec.begin(), vec.end(), [&](const string& test) {return test.size() > 5;});
    cout << "GT5 count: " << c2 << endl;

    int c3 = customCount(vec);
    cout << "GT5 count: " << c3 << endl;

    int c4 = customCount2(vec, greaterThan5);
    cout << "GT5 count: " << c4 << endl;



    return 0;
}

////============================================================================
//// Name        : Using.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool match(string test) {
//	//return test == "two";
//	return test.size() == 3;
//}
//
//int countStrings(vector<string> &texts, bool (*match)(string) ) {
//
//	int tally = 0;
//	for(int i=0; i<texts.size(); i++) {
//		if(match(texts[i])) {
//			tally++;
//		}
//	}
//
//	return tally;
//}
//
//int main() {
//	vector<string> texts;
//	texts.push_back("one");
//	texts.push_back("two");
//	texts.push_back("three");
//	texts.push_back("two");
//	texts.push_back("four");
//	texts.push_back("two");
//	texts.push_back("three");
//
//	cout << match("one") << endl;
//
//	cout << count_if(texts.begin(), texts.end(), match) << endl;
//
//	cout << countStrings(texts, match) << endl;
//
//	return 0;
//}
