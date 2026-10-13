#ifndef RESULT_CPP
#define RESULT_CPP

#include <iostream>
#include <string>
using namespace std;

class Result
{
private:
    int id;
    string status;

public:
    Result(int id, string status)
    {
        this->id = id;
        this->status = status;
    }

    void displayResult()
    {
        cout << "Result: " << status << endl;
    }
};

#endif