#ifndef GBS_CPP
#define GBS_CPP

#include <iostream>
#include <string>
using namespace std;

class GoaBusinessSchool
{
private:
    int id;
    string name;

public:
    GoaBusinessSchool(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void offerProgram(string program)
    {
        cout << name << " offers " << program << endl;
    }
};

#endif