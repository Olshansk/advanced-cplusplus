#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    int v1 = 5;
    int v2 {5};
    cout << v1 << endl;
    cout << v2 << endl;

    string text = "abc";
    string text2 { "def"} ;
    cout << text << endl;
    cout << text2 << endl;

    int n[] = {1,2,3};
    int n2[] {1,2,3};
    int *n3 = new int[] {1,2,3};
    int n4[3] {1,2,3};
    int n5[] {1,2,3};
    int n6[3];
    n6[1] = 2;
    cout << n[1] << endl;
    cout << n2[1] << endl;
    cout << n3[1] << endl;
    cout << n4[1] << endl;
    cout << n5[1] << endl;
    cout << n6[1] << endl;

    struct S {
        string t;
        int n;
    };

    struct {
        string t;
        int n;
    } s2 {"b", 2};

    struct {
        string t;
        int n;
    } s3 = {"c", 3};

    S s1 {"a", 0};
    cout << s1.t << " " << s1.n << endl;
    cout << s2.t << " " << s2.n << endl;
    cout << s3.t << " " << s3.n << endl;

    int *null1 = nullptr;
    int *null2 {};

    cout << null1 << endl;
    cout << null2 << endl;

    return 0;
}


////============================================================================
//// Name        :
//// Author      : John Purcell
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//
//	int value { 5 };
//	cout << value << endl;
//
//	string text { "Hello" };
//	cout << text << endl;
//
//	int numbers[] { 1, 2, 4 };
//	cout << numbers[1] << endl;
//
//	int *pInts = new int[3] { 1, 2, 3 };
//	cout << pInts[1] << endl;
//	delete[] pInts;
//
//	int value1 { };
//	cout << value1 << endl;
//
//	int *pSomething { }; // equivalent to int *pSomething = nullptr;
//
//	cout << pSomething << endl;
//
//	int numbers1[5] { };
//	cout << numbers1[1] << endl;
//
//	struct {
//		int value;
//		string text;
//	} s1{5, "Hi"};
//
//	cout << s1.text << endl;
//
//	vector<string> strings{"one", "two", "three"};
//	cout << strings[2] << endl;
//
//	return 0;
//}
