#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(): name(""), age(0) {}

    Person(string name, int age): name(name), age(age) {}

    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    bool operator < (const Person& other) const {
           return name < other.name;
    }

    void print() const {
        cout << name << flush;
    }

};

using people_map = std::map<Person, int>;

int main () {
    people_map map;

    map[Person("a", 1)] = 0;
    map[Person("b", 2)] = 1;
    map[Person("c", 3)] = 2;

    for (const std::pair<Person, int> p: map) {
        p.first.print();
        cout << endl;
    }

    return 0;
}

//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//
//	Person() : name(""), age(0) {
//
//	}
//
//	Person(string name, int age) : name(name), age(age) {
//
//	}
//
//	Person(const Person& other) {
//		name = other.name;
//		age = other.age;
//	}
//
//	void print() const {
//		cout << name << ": " << age << flush;
//	}
//
//	bool operator<(const Person &other) const {
//
//		if (name == other.name) {
//			return age < other.age;
//		} else {
//			return name < other.name;
//		}
//	}
//};
//
//int main() {
//	map<Person, int> people;
//
//	people[Person("Mike", 40)] = 40;
//	people[Person("Mike", 444)] = 123;
//	people[Person("Sue", 30)] = 30;
//	people[Person("Raj", 40)] = 20;
//
//	for (map<Person, int>::iterator it = people.begin(); it != people.end();
//			it++) {
//		cout << it->second << ": " << flush;
//		it->first.print();
//		cout << endl;
//	}
//
//	return 0;
//}
