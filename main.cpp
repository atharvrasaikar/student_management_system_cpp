#include <iostream>

#include "Person.cpp"
#include "Student.cpp"
#include "GoaBusinessSchool.cpp"
#include "Program.cpp"
#include "Result.cpp"
#include "Exam.cpp"
#include "Course.cpp"
#include "Faculty.cpp"

using namespace std;

int main()
{
    //creating object

    GoaBusinessSchool gbs(1, "Goa Business School");

    Program mca(101, "MCA");

    Course oot(201, "Object Oriented Technology", 4);

    Faculty faculty(301, "HHR", "hhr@gbs.com");

    Student student(401, "Atharv", "Goa", "1234567890");

    Exam exam("Semester End");

    Result result(501, "Pass");


    gbs.offerProgram(mca.getName());

    mca.addCourse(oot.getName());

    faculty.teachCourse(oot.getName());


    //encapsulation

    cout << "Student Name: "
         << student.getName() << endl;

    cout << "Student Address: "
         << student.getAddress() << endl;


    student.setName("Rakshak");

    cout << "Updated Name: "
         << student.getName() << endl;


    student.enroll(mca.getName());


    Person* p;

    p = new Student(402,"Viraj","Hyderabad","5678901234");

    p->displayRole();

    delete p;

    exam.conductExam();

    result.displayResult();

    return 0;
}