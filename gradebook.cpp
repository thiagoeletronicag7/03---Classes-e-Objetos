//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
//inclui get e set
#include <iostream>

using namespace std;

#include <string>

//definição da classe GradeBook
class GradeBook
{
    public:
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
    string nomeCurso;
    GradeBook myGradeBook;

    cout << "Valor Inicial do curso é:" << myGradeBook.getCourseName() << endl;
    
    cout << "Por favor, insira o nome do curso: " << endl;

    getline(cin, nomeCurso);
    myGradeBook.setCourseName(nomeCurso);

    cout << endl;

    myGradeBook.displayMessage();

    return 0;
}

