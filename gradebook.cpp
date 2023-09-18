//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
#include <iostream>

using namespace std;

#include <string>

//definição da classe GradeBook
class GradeBook
{
    public:
    //exibe mensagem de boas vindas
    void displayMessage(string nomeDoCurso)
    {
        cout << "Welcome to the Grade Book for\n" << nomeDoCurso << "!" << endl;
    }
};

int main()
{
    string nomeCurso;
    GradeBook myGradeBook;

    cout << "Entre com o nome do curso:" << endl;
    getline (cin, nomeCurso);
    cout << endl;

    myGradeBook.displayMessage(nomeCurso);

    return 0;
}

