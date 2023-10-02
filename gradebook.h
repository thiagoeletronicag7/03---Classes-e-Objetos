#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
private:
    string courseName;
    string instructorName;
public:
    GradeBook(string, string);

    void setCourseName(string);

    string getCourseName();

    void setInstructorName(string);

    string getInstructorName();

    void displayMessage();
};

