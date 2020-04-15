#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test {
private:
    string name;
    int age;


public:
    Test(): name(""), age(0) {

    }

    Test(string name, int age): name(name), age(age) {

    }

    void print() const {
        cout << name << ": " << age << endl;
    }

    friend bool comp1(const Test& a, const Test& b);
    friend bool comp2(const Test& a, const Test& b);

};

bool comp1(const Test& a, const Test& b) {
    return a.name < b.name;
}

bool comp2(const Test& a, const Test& b) {
    return a.age < b.age;
}

int main() {

    vector<Test> v;

    v.push_back(Test("a", 1000));
    v.push_back(Test("a", 600));
    v.push_back(Test("b", 900));
    v.push_back(Test("d", 700));
    v.push_back(Test("c", 800));


    for (const Test& t: v) {
        t.print();
    }
    cout << endl;

    sort(v.begin(), v.end(), comp1);
    for (const Test& t: v) {
        t.print();
    }
    cout << endl;

    sort(v.begin(), v.end(), comp2);
    for (const Test& t: v) {
        t.print();
    }
    cout << endl;

    return 0;
}





















//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Test
//{
//	string name;
//	int id;
//
//public:
//	Test(int id, string name) :
//		id(id), name(name)
//	{
//
//	}
//
//	bool operator<(const Test &other)  const {
//		return name == other.name ? id < other.id : name < other.name;
//	}
//	void print()
//	{
//		cout << id << ": " << name << endl;
//	}
//
//	friend bool comp(const Test &first, const Test &second);
//};
//
//bool comp(const Test &first, const Test &second)
//{
//	return first.name < second.name;
//}
//
//int main(int argc, char const *argv[])
//{
//
//	vector<Test> tests;
//
//	tests.push_back(Test(5, "Mike"));
//	tests.push_back(Test(10, "Sue"));
//	tests.push_back(Test(7, "Raj"));
//	tests.push_back(Test(3, "Vicky"));
//
//	sort(tests.begin(), tests.end(), comp);
//
//	for(int i = 0; i < tests.size(); i++)
//	{
//		tests[i].print();
//	}
//
//	return 0;
//}