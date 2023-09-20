//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
//inclui get e set e construtor
#include <iostream>

using namespace std;

#include <string>

#include "gradebook.h"

//definição da classe GradeBook

int main()
{
    GradeBook gradeBook1("Teste1");
    GradeBook gradeBook2("Teste2");
    
    cout << "Grade book 1: " << gradeBook1.getCourseName();
    cout << "\nGrade book 2: " << gradeBook2.getCourseName() << endl;

    return 0;
}

