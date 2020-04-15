#include <iostream>
#include "map"

using namespace std;

class Person {

private:
    string name;
    int age;

public:

    Person(): name(""), age(0) {
    }

    Person(string name, int age): name(name), age(age) {
    }

    void print() const {
        cout << name << ": " << age << endl;
    }
};

//using people_map = map<int, Person>;
typedef map<int, Person> people_map;


int main() {

    people_map people = {
            {0, Person("a", 1)}
    };

    people[1] = Person("b", 2);

    people.insert(make_pair(2, Person("c", 3)));

    for (auto it = people.begin(); it != people.end(); it++) {
        it->second.print();
    }

    for (auto pair: people) {
        pair.second.print();
    }

    for_each(people.begin(), people.end(), [](const std::pair<int, Person> &p){
        p.second.print();
    });

    return 0;
}

//#include <iostream>
//#include <map>a
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
//	Person() :
//			name(""), age(0) {
//
//	}
//
//	Person(string name, int age) :
//			name(name), age(age) {
//
//	}
//
//	Person(const Person& other){
//		cout << "Copy constructor running!" << endl;
//		name = other.nam
//		age = other.age
//	}
//
//	void print() {
//		cout << name << ": " << age << endl;
//	}
//};
//
//int main() {
//	map<int, Person> people;
//
//	people[50] = Person("Mike", 40);
//	people[32] = Person("Vicky", 30);
//	people[1] = Person("Raj", 20);
//
//	people.insert(make_pair(55, Person("Bob", 45 )));
//	people.insert(make_pair(55, Person("Sue", 24 )));
//
//	for (map<int, Person>::iterator it = people.begin(); it != people.end();
//			it++) {
//		cout << it->first << ": " << flush;
//		it->second.print();
//	}
//
//	return 0;
//}
