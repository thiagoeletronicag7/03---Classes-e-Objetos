//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
//inclui get e set e construtor
#include <iostream>

using namespace std;

#include <string>

//definição da classe GradeBook
class GradeBook
{
    public:
        GradeBook(string name)
        {
            setCourseName(name);
        }
        //exibe mensagem de boas vindas
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
            cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
        }

    private:
    string courseName;
};

int main()
{
    GradeBook gradeBook1("Teste1");
    GradeBook gradeBook2("Teste2");
    
    cout << "Grade book 1: " << gradeBook1.getCourseName();
    cout << "\nGrade book 2: " << gradeBook2.getCourseName() << endl;

    return 0;
}

