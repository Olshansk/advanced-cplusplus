//============================================================================
// Name        : Binary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)


struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main() {
    Person p = {"Daniel", 27, 140};

    string filename = "test.bin";
    ofstream outputFile;

    outputFile.open(filename, ios::binary);

    if (outputFile.is_open()) {
        // old style
//        outputFile.write((char *)&p, sizeof(Person));
        outputFile.write(reinterpret_cast<char *>(&p), sizeof(Person));
        outputFile.close();
    } else {
        cout << "Could not create file: " << filename << endl;
    }


    ifstream inFile;
    inFile.open(filename);

    if(inFile.is_open()) {
        Person p2;
        inFile.read(reinterpret_cast<char*>(&p2), sizeof(Person));
        cout << "Name of p2 is" << p2.name << endl;
        inFile.close();
    }

    return 0;
}


//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#pragma pack(push, 1)
//
//struct Person {
//	char name[50];
//	int age;
//	double height;
//};
//
//#pragma pack(pop)
//
//int main() {
//
//	Person someone = { "Frodo", 220, 0.8 };
//
//	string fileName = "test.bin";
//
//	//// Write binary file ////////////////
//
//	ofstream outputFile;
//
//	outputFile.open(fileName, ios::binary);
//
//	if (outputFile.is_open()) {
//
//		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
//
//		outputFile.close();
//	} else {
//		cout << "Could not create file " + fileName;
//	}
//
//	//// Read binary file ////////////////
//
//	Person someoneElse = {};
//
//	ifstream inputFile;
//
//	inputFile.open(fileName, ios::binary);
//
//	if (inputFile.is_open()) {
//
//		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
//
//		inputFile.close();
//	} else {
//		cout << "Could not read file " + fileName;
//	}
//
//	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
//
//	return 0;
//}
