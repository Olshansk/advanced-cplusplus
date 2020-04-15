//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    vector<int> d1(3);
    vector<vector<int>> d2(3, vector<int>(4));

    d1[1] = 2;
    d2[0][10] = 5;

    list<int> l;

    l.push_back(10);
    l.push_back(11);
    l.push_back(12);
    l.push_front(0);

    list<int>::iterator it = l.begin();
    l.insert(it, 100);
    it--;
    cout << "Current: " << *it << endl;

    list<int>::iterator eraseIt = l.begin();
//    eraseIt++;
    l.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl;

    for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}


//#include <iostream>
//#include <list>
//
//using namespace std;
//
//int main() {
//	list<int> numbers;
//
//	numbers.push_back(1);
//	numbers.push_back(2);
//	numbers.push_back(3);
//	numbers.push_front(0);
//
//	list<int>::iterator it = numbers.begin();
//	it++;
//	numbers.insert(it, 100);
//	cout << "Element: " << *it << endl;
//
//	list<int>::iterator eraseIt = numbers.begin();
//	eraseIt++;
//	eraseIt = numbers.erase(eraseIt);
//	cout << "Element: " << *eraseIt << endl;
//
//	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
//		cout << *it << endl;
//	}
//
//	return 0;
//}
