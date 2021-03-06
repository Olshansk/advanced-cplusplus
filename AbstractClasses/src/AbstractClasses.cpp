#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
    virtual void run() const =0;
    virtual void voice() const =0;
};

class Dog: public Animal {
public:
    virtual void run() const {
        cout << "Dog is running" << endl;
    }
};

class Lab: public Dog {
public:
    virtual void voice() const {
        cout << "Lab is speaking" << endl;
    }
};

void animalRunsAndSpeak(const Animal& a) {
    a.voice();
    a.run();
    cout << endl;
}

int main() {

    Lab labs[5];
    for (const Lab& l : labs) {
        animalRunsAndSpeak(l);
    }

    vector<Lab> labs2(5);
    for (const Lab& l : labs2) {
        animalRunsAndSpeak(l);
    }

    cout << labs2.size() << endl;
    cout << labs2.capacity() << endl;

    // Can't instantiate abstract class here
//    Dog dogs[5];
//    for (const Dog& d : dogs) {
//        animalRunsAndSpeak(d);
//    }

    return 0;
}

////============================================================================
//// Name        : Abstract.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void run()=0;
//	virtual void speak() = 0;
//};
//
//class Dog: public Animal {
//public:
//	virtual void speak() {
//		cout << "Woof!" << endl;
//	}
//};
//
//class Labrador: public Dog {
//public:
//	Labrador() {
//		cout << "new labrador" << endl;
//	}
//	virtual void run() {
//		cout << "Labrador running" << endl;
//	}
//};
//
//class Husky: public Dog
//{
//public:
//	Husky()
//	{
//		cout << "new husky" << endl;
//	}
//	virtual void run()
//	{
//		cout << "Husky running" << endl;
//	}
//};
//
//void test(Animal &a) {
//	a.run();
//}
//
//int main() {
//
//	Labrador lab;
//	lab.run();
//	lab.speak();
//
//	Animal *animals[5];
//	animals[0] = &lab;
//
//	animals[0]->speak();
//
//	Husky husky;
//
//	test(lab);
//	test(husky);
//
//	return 0;
//}
