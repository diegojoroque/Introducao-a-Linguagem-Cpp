/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 1

Dada a função f(x)=x²-4x+5.
Crie um Algoritmo em C++, que tenha uma função que calcula o valor de f(a), em que a é um número real informado pelo usuário.
*/

#include <iostream>

using namespace std;

main (){
    float a;

    cout << "Informe um numero qualquer:\n";
    cin >> a;    

    float fa = (a*a)-(4*a)+5;

    cout << "O valor de f(" << a << ") e " << fa << "." <<endl;

    return 0;
}