#include <iostream>

using namespace std;

class GradeBook
{
private:
    string courseName;
public:
    GradeBook(string name);

    void setCourseName(string name);

    string getCourseName();

    void displayMessage();
};

