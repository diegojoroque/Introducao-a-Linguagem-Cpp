/*
Curso de C++ #22 - Funções - Parte 1 do canal CFBCursos (disponível em https://www.youtube.com/watch?v=uB3Gm0QrgRw).
*/

#include <iostream>

using namespace std;

float n;
void equacao (float x);

int main (){
    cout << "Digite:\n";
    cin >> n;

    equacao(n);

    return 0;
}

void equacao(float x){
    cout << "potencia de " << x << " e " << x*x << "\n";
}