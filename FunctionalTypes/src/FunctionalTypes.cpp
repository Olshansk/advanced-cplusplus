#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f3(string s) {
    return s.size() >= 3;
}

class F4 {
public:
    bool operator () (string s) {
        return s.size() >= 4;
    }
} f4;

int main(int argc, char* argv[]) {

    vector<string> v {"1", "22", "333", "4444", "55555"};

    int count = count_if(v.begin(), v.end(), [](string s){ return s.size() >= 1; });
    cout << count << endl;

    auto f2 = [](string s){ return s.size() >= 2; };
    count = count_if(v.begin(), v.end(), f2);
    cout << count << endl;

    std::function<int(std::string)> f0 = [](string s) { return s.size() >= 0; };
    count = count_if(v.begin(), v.end(), f0);
    cout << count << endl;

    count = count_if(v.begin(), v.end(), f4);
    cout << count << endl;

    count = count_if(v.begin(), v.end(), F4());
    cout << count << endl;

    return 0;
}



////============================================================================
//// Name        : FunctionalTypes.cpp


//// Author      :


//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <functional>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool check(string &test) {
//    return test.size() == 3;
//}
//
//struct Check {
//    bool operator()(string &test) {
//        return test.size() == 5;
//    }
//} check1;
//
//void run(function<bool(string&)> check) {
//    string test = "stars";
//    cout << check(test) << endl;
//}
//
//int main() {
//
//    int size = 5;
//    vector<string> vec{"one", "two", "three"};
//
//    auto lambda = [size](string test) {return test.size() == size;};
//
//    auto count = count_if(vec.begin(), vec.end(), lambda);
//
//    cout << count << endl;
//
//    count = count_if(vec.begin(), vec.end(), check);
//    cout << count << endl;
//
//    count = count_if(vec.begin(), vec.end(), check1);
//    cout << count << endl;
//
//    run(lambda);
//    run(check1);
//    run(check);
//
//    function<int(int, int)> add = [](int one, int two) { return one + two;};
//    cout << add(7, 3) << endl;
//
//    return 0;
//}
