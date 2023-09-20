#include <iostream>

using namespace std;

class GradeBook
{
private:
    string courseName;
public:
    GradeBook(string name)
    {
        setCourseName(name);
    }

    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage()
    {
        cout << "Welcome to the gradebook for\n" << getCourseName() << "!" << endl;
    }
};

