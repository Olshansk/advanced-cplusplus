#include <iostream>

using namespace std;

class Test{
private:
    int i{1};
    string s{"test"};

public:
    void run(){
        int i2{2};
        string s2{"test2"};

        auto func = [this, &i2, &s2](){
            cout << s << " : " << i << endl;
            cout << s2 << " : " << i2 << endl;
            this->s = "test_modified";
            s = "test_modified";
        };
        func();
        cout << s << " : " << i << endl;
    }
};

int main(int argc, char* argv[]) {

    Test t;
    t.run();

    cout << "\n======\n" << endl;

    // lol
    [](){}();

    int i = 1;
    string s = "test";

    [](){
        cout << "Nothing captured" << endl;
    }();

    [=](){
        cout << "Captured by value: " << s << ": " << i << endl;
    }();

    [&](){
        i = 2;
        s = "test2";
        cout << "Captured by reference: " << s << ": " << i << endl;
    }();

    [=](){
        cout << "Captured by after assignment in capture by reference: " << s << ": " << i << endl;
    }();

    [&i, s](){
        i = 3;
        cout << "Mixed capture: " << s << ": " << i << endl;
    }();

    return 0;
}

////============================================================================
//// Name        : LambdaCaptureExpressions.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int one = 1;
//    int two = 2;
//    int three = 3;
//
//    // Capture one and two by value
//    [one, two](){ cout << one << ", " << two << endl; }();
//
//    // Capture all local variables by value.
//    [=](){ cout << one << ", " << two << endl; }();
//
//    // Default capture all local variables by value, but three by reference.
//    [=, &three](){ three = 7; cout << one << ", " << two << endl; }();
//    cout << three << endl;
//
//    // Default capture all local variables by reference.
//    [&](){ three = 7; two = 8; cout << one << ", " << two << endl; }();
//    cout << two << endl;
//
//    // Default capture all local variables by reference but two and three by value.
//    [&, two, three](){ one = 100;  cout << one << ", " << two << endl; }();
//    cout << one << endl;
//
//    return 0;
//}
