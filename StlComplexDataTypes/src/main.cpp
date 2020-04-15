#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ScoresMap = map<string, vector<int>>;

int main() {

    ScoresMap m;

    m["a"].push_back(1);
    m["a"].push_back(2);

    m.insert(make_pair<string, vector<int>>("b", {3}));
    m["b"].push_back(4);

    for (const auto p : m) {
        cout << p.first << ": " << p.second[0] << endl;
    }

    cout << endl;

    for (ScoresMap::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second[1] << endl;

    }

    return 0;
}







////============================================================================
//// Name        : main.cpp



//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
///**************************************************
//*
//* Note, some compilers are OK with angle brackets
//* used in connection with template types
//* being next to each other with no spaces, like
//* this: map<string, vector<int>> scores;
//* Others require spaces, like this:
//* map<string, vector<int> > scores;
//* It's safer to put in spaces.
//*
//**************************************************/
//
//int main() {
//
//	map<string, vector<int> > scores;
//
//	scores["Mike"].push_back(10);
//	scores["Mike"].push_back(20);
//	scores["Vicky"].push_back(15);
//
//	for(map<string, vector<int> >::iterator it = scores.begin(); it!= scores.end(); it++)
//	{
//		string name = it->first;
//		vector<int> scoreList = it->second;
//
//		cout << name << ": " << flush;
//
//		for(int i = 0; i < scoreList.size(); i++)
//		{
//			cout << scoreList[i] << " " << flush;
//		}
//
//		cout << endl;
//	}
//	return 0;
//}
