#ifndef STUDENT_CPP
#define STUDENT_CPP

#include "Person.cpp"

class Student : public Person
{
private:
    string address;
    string phone;

public:
    Student(int id, string name, string address, string phone)
        : Person(id, name)
    {
        this->address = address;
        this->phone = phone;
    }

    string getAddress()
    {
        return address;
    }

    void enroll(string program)
    {
        cout << getName() << " enrolled in " << program << endl;
    }

    void displayRole() override
    {
        cout << getName() << " is a Student" << endl;
    }
};

#endif