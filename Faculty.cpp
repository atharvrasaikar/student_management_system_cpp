#ifndef FACULTY_CPP
#define FACULTY_CPP

#include <iostream>
#include <string>
using namespace std;

class Faculty
{
private:
    int id;
    string name;
    string email;

public:
    Faculty(int id, string name, string email)
    {
        this->id = id;
        this->name = name;
        this->email = email;
    }

    void teachCourse(string course)
    {
        cout << name << " teaches " << course << endl;
    }
};

#endif