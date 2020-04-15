#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test {
private:
    string test;
public:
    Test(string test): test(test) {}

    ~Test() {}

    void print() const {
        cout << test << endl;
    }

};

int main() {

    stack<Test> s;
    s.push(Test("a"));
    s.push(Test("b"));
    s.push(Test("c"));

    while (s.size() > 0) {
        Test& t = s.top();
        t.print();
        s.pop();
    }

    cout << endl;

    queue<Test> q;
    q.push(Test("a"));
    q.push(Test("b"));
    q.push(Test("c"));

    while (q.size() > 0) {
        Test& t = q.front();
        t.print();
        q.pop();
    }

    return 0;
}



//#include <iostream>
//#include <string>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//class Test
//{
//	string name;
//public:
//
//	explicit Test(string name) : name(name)
//	{
//
//	}
//
//	~Test()
//	{
//
//	}
//
//	void print() const
//	{
//		cout << name << endl;
//	}
//};
//int main(int argc, char const *argv[])
//{
//	//LIFO
//	stack<Test> testStack;
//
//	testStack.push(Test("Mike"));
//	testStack.push(Test("John"));
//	testStack.push(Test("Sue"));
//
//	cout << endl;
//
//	Test &test1 = testStack.top();
//	test1.print();
//
//	testStack.pop();
//	Test &test2 = testStack.top();
//	test2.print();
//
//	//FIFO
//	queue<Test> testQueue;
//
//	testQueue.push(Test("Mike"));
//	testQueue.push(Test("John"));
//	testQueue.push(Test("Sue"));
//
//	cout << endl;
//
//	testQueue.back().print();
//
//	while(testQueue.size() > 0)
//	{
//		Test &test = testQueue.front();
//		test.print();
//		testQueue.pop();
//	}
//
//	return 0;
//}