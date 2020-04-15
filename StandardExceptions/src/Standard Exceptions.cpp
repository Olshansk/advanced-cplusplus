//============================================================================
// Name        : Standard.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong{
public:
    CanGoWrong();
    char *p;
};

CanGoWrong::CanGoWrong() {
    char *p = new char[9999999999999999];
}

int main() {
    try {
        CanGoWrong canGoWrong;
        strcpy(canGoWrong.p, "abc");
        cout << canGoWrong.p << endl;
        cout << sizeof(canGoWrong.p) << endl;
    } catch (bad_alloc &e) {
        cout << e.what() << endl;
    }

    cout << "still running" << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[999];
		delete[] pMemory;
	}
};

int main() {

	try {
		CanGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}
*/