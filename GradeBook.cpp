#include <iostream>

using namespace std;

#include "GradeBook.h"

GradeBook::GradeBook(string name, string instructor)
{
    setCourseName(name);
    setInsctructorName(instructor);
}

void GradeBook::setCourseName(string name)
{
    if(name.length() <= 25) courseName = name;
    else
     {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum lenght (25).\n"
        "Limiting courseName to first 25 characters.\n" << endl;
     }
}

void GradeBook::setInstructorName(string name)
{
    instructorName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}

string GradeBook::getInstructorName()
{
    return instructorName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
}