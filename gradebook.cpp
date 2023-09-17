#include <iostream>

using namespace std;

class GradeBook
{
    public:
    //exibe mensagem na tela
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    return 0;
}

