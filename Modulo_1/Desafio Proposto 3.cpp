/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 3

Crie um Algoritmo em C++, que tenha uma função que calcula o fatorial de um número inteiro positivo. informado pelo usuário.
*/

/*
Código com utilização de função:
*/

#include <iostream>

using namespace std;

int produto (int x){
    int fatorial;
    int x = 1;
    int cont = 1;
    while (cont <= x){
        x=x*cont;
        cont++;
        return fatorial;
    }
}

int main (){
    int resultado;
    
    cout << "Informe um numero inteiro positivo:\n";
    cin >> n;

    resultado=produto(n);
    cout << "O fatorial de " << n << " e " << resultado << ".\n";

    return 0;
}

/*
Código com utilização do while apenas, sem função:
#include <iostream>

using namespace std;

int main (){
    int num;
    int fat = 1;
    int cont = 1;

    cout << "Informe um numero inteiro positivo:\n";
    cin >> num;

    while (cont <= num){
        fat = fat * cont;
        if (cont < num){
            cout << cont << "*";
        } else if (cont = num) {
            cout << cont << "= " << fat <<endl;
        }
        cont+=1;
    }

    cout << "O fatorial de " << num << " e " << fat;

    return 0;
}
*/