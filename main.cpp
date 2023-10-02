//definindo a classe GradeBook com uma função que aceita parâmetro
//cria um objeto GradeBook e chama sua função
//inclui get e set e construtor
/*
Para compilar, utilize o comando:
g++ main.cpp GradeBook.cpp -o main.exe

depois
execute o programa:
./main.cpp
*/
#include <iostream>

using namespace std;

#include <string>

#include "GradeBook.h"

//definição da classe GradeBook

int main()
{
    GradeBook gradeBook1("Teste1", "Thiago");
    GradeBook gradeBook2("Teste2", "Isadora");
    
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();

    return 0;
}

