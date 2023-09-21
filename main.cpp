//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
//inclui get e set e construtor
/*
Para compilar, utilize o comando:
g++ -c GradeBook.cpp -o GradeBook.o
g++ -c main.cpp -o main.o

depois
g++ GradeBook.o main.o -o my_program
*/
#include <iostream>

using namespace std;

#include <string>

#include "GradeBook.h"

//definição da classe GradeBook

int main()
{
    GradeBook gradeBook1("Teste1");
    GradeBook gradeBook2("Teste2");
    
    cout << "Grade book 1: " << gradeBook1.getCourseName();
    cout << "\nGrade book 2: " << gradeBook2.getCourseName() << endl;

    return 0;
}

