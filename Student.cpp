#include "Student.hpp"
#include <iostream>
using namespace std;


Student::Student() {
    age = new int(0);
    name = new string("");
    cout << "Student object created!" << endl;
}

Student::~Student() {
    delete name;
    delete age;
    cout << "Student object destroyed!" << endl;
}

void Student::setName(string s) {
    if (name == nullptr) {
        name = new string(s);
    } else {
        *name = s;
    }
}

void Student::setAge(int i) {
    if (age == nullptr) {
        age = new int(i);
    } else {
        *age = i;
    }
}

string Student::getName() const {
    if (name != nullptr) {
        return *name;
    } else {
        return " ";
    }
}

int Student::getAge() const {
    if (age != nullptr) {
        return *age;
    } else {
        return -1;
    }
}
