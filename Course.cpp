#ifndef COURSE_CPP
#define COURSE_CPP

#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int id;
    string name;
    int credits;

public:
    Course(int id, string name, int credits)
    {
        this->id = id;
        this->name = name;
        this->credits = credits;
    }

    string getName()
    {
        return name;
    }
};

#endif