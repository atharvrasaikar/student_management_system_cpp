#ifndef EXAM_CPP
#define EXAM_CPP

#include <iostream>
#include <string>
using namespace std;

class Exam
{
private:
    string type;

public:
    Exam(string type)
    {
        this->type = type;
    }

    void conductExam()
    {
        cout << type << " Exam Conducted" << endl;
    }
};

#endif