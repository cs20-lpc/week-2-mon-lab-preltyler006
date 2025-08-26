#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
using namespace std;

class Student {
    public:
        // Constructor
        Student();
        // Destructor
        ~Student();

        void setName(string s);
        void setAge(int i);
        string getName() const;
        int getAge() const;

    private:
        string* name;
        int* age;

};

#endif