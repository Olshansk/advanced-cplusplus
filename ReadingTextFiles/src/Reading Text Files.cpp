//============================================================================
// Name        : Reading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream inFile;
    string inFileName = "test.txt";
    inFile.open(inFileName);

    if (inFile.is_open()) {
        string line;
        int i = 0;
        while(!inFile.eof()) {
            getline(inFile, line);
            cout << "Line number " << i << " is: " << line << endl;
            i++;
        }
    } else {
        cout << "Cannot open file error " << inFileName << endl;
    }
}

//#include <iostream>
//#include <fstream>
//#include <sstream>
//
//using namespace std;
//
//int main() {
//
//	string inFileName = "test.txt";
//
//	ifstream inFile;
//
//	inFile.open(inFileName);
//
//	if (inFile.is_open()) {
//
//		string line;
//
//		while (inFile) {
//			getline(inFile, line);
//			cout << line << endl;
//		}
//
//		inFile.close();
//	} else {
//		cout << "Cannot open file: " << inFileName << endl;
//	}
//
//	return 0;
//}
