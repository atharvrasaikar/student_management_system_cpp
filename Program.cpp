#ifndef PROGRAM_CPP
#define PROGRAM_CPP

#include <iostream>
#include <string>
using namespace std;

class Program
{
private:
    int id;
    string name;

public:
    Program(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void addCourse(string course)
    {
        cout << course << " added to " << name << endl;
    }
};

#endif