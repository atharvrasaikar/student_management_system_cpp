#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
using namespace std;

class Person
{
private:
    int id;
    string name;

public:

    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    
    string getName()
    {
        return name;
    }


    void setName(string name)
    {
        this->name = name;
    }

    // Abstract Function
    virtual void displayRole() = 0;

};

#endif