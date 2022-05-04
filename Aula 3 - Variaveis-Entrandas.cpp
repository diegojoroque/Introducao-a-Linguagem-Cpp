/*
Módulo 1 - O começo da jornada!
Aula 03 - Variáveis e Entradas
Disponível em https://www.youtube.com/watch?v=WYCKFyBii_Q
*/

/*
Tipos de variáveis:
    Bool (booleano) - true (1) or false (0);
    Char (caracter) - 1 único caractere;
    String (caracter) - 1 ou + caracteres;
    Int (inteiro) - sem decimal;
    Double (duplo)("real") - nº c/ menos de 15 casas decimais;
    Float (flutuador)("real") - nº c/ menos de 6 casas decimais.
*/

#include <iostream>

using namespace std;

int main(){
    int inteiro1 = 5; //tipo de variável seguida do seu nome e valor

    int inteiro2; //ou tipo variável seguida apenas do nome
    inteiro2 = 6; //e valor atribuido posteriormente (como aqui)

    float flutua;
    flutua = 1.1;

    cout << flutua << endl;
    cout << inteiro1 << endl << inteiro2; //endl para saltar a linha

    return 0;
}