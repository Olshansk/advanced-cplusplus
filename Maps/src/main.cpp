//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Sets

#include <iostream>
#include <set>

using namespace std;

class Person {
private:
    mutable int age;
    string name;

public:
//    Person() : age(0), name("") {
//
//    }

    Person(int age, string name): age(age), name(name) {

    }

//    Person(const Person& other) {
//        age = other.age;
//        name = other.name;
//    }

    void print() const {
        cout << name << ": " << age << flush;
    }

//    bool operator == (const Person& other) const {
//        return name == other.name;
//    }

    bool operator < (const Person& other) const {
        return name < other.name;
    }
};

int main() {
    set<int> numbers;
    set<Person> people;


    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);

    people.insert(Person(0, "a"));
    people.insert(Person(1, "b"));
    people.insert(Person(2, "c"));
    people.insert(Person(1000, "c"));

    cout << people.size() << endl;

    for (Person p: people) {
        p.print();
        cout << endl;
    }

    const Person p = Person(0, "a");
    cout << people.count(p) << endl;

    return 0;
}


//// MultiMap
//
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//using mm_type = multimap<int, string>;
//
//int main() {
//    mm_type m;
//
//    m.insert(make_pair(1, "a"));
//    m.insert(make_pair(1, "b"));
//    m.insert(make_pair(2, "c"));
//    m.insert(make_pair(2, "d"));
//    m.insert(make_pair(1, "e"));
//
//    for (mm_type::iterator it = m.begin(); it != m.end(); it++) {
////        cout << it->first << " " << it->second << endl;
//    }
//
//    for (const std::pair<int, string> p: m) {
////        cout << p.first << " " << p.second << endl;
//    }
//
//    auto ranges = m.equal_range(2);
//
//    for (auto it = ranges.first; it != ranges.second; it++) {
//        cout << it->first << " " << it->second << endl;
//    }
//
//    return 0;
//}


// Map

//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//int main() {
//    map<string, int> ages;
//    ages["a"] = 10;
//    ages["b"] = 20;
//    ages["c"] = 30;
//    cout << ages["a"] <<endl;
//
//    ages.insert(pair<string, int>("d", 40));
//    ages.insert(make_pair("e", 50));
//
//    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
//        cout << "No pair: " << it->first << " " << it->second << endl;
//        pair<string, int> p = *it;
//        cout << "With pair: " << p.first << " " << p.second << endl;
//    }
//    return 0;
//}
















//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	map<string, int> ages;
//
//	ages["Mike"] = 40;
//	ages["Raj"] = 20;
//	ages["Vicky"] = 30;
//
//	ages["Mike"] = 70;
//
//	ages.insert(make_pair("Peter", 100));
//
//	cout << ages["Raj"] << endl;
//
//	if(ages.find("Vicky") != ages.end()) {
//		cout << "Found Vicky" << endl;
//	}
//	else {
//		cout << "Key not found." << endl;
//	}
//
//	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
//		pair<string, int> age = *it;
//
//		cout << age.first << ": " << age.second << endl;
//	}
//
//	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
//			cout << it->first << ": " << it->second << endl;
//		}
//
//
//	return 0;
//}
