//============================================================================
// Name        : Writing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile;
    outFile.open("temp.txt");
    if(outFile.is_open()) {
        outFile << "temp" << endl;
        outFile.close();
    }


    fstream outFile2;
    outFile2.open("temp2.txt", ios::out);
    if(outFile2.is_open()) {
        outFile2 << "line1" << endl;
        outFile2 << "line2";
        outFile2 << " more line2" << endl;
        outFile2.close();
    }
    return 0;
}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	// ofstream outFile;
//
//	fstream outFile;
//
//	string outputFileName = "text.txt";
//
//	// outFile.open(outputFileName);
//	 outFile.open(outputFileName, ios::out);
//
//	if(outFile.is_open()) {
//		outFile << "Hello there" << endl;
//		outFile << 123 << endl;
//		outFile.close();
//	}
//	else {
//		cout << "Could not create file: " << outputFileName << endl;
//	}
//
//	return 0;
//}
