/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 10

Crie um Algoritmo em C++, que tenha uma função recebe dois ponteiros e troca o valor de referência entre os dois.
*/

#include <iostream>

using namespace std;

int main (){

    int var1=10,var2=20;
    int*pont1;
    int*pont2;

    pont1=&var1;
    pont2=&var2;

    cout << "Valor da variavel 1 atraves do ponteiro 1 = " << *pont1 << endl;
    cout << "Valor da variavel 2 atravez do ponteiro 2 = " << *pont2 << endl;

    return 0;
}