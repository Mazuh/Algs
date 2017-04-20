/*
Faça um algoritmo que simule uma calculadora com as quatro 
operações básicas (+, -, *, /). O algoritmo deve solicitar ao usuário
a entrada de dois operandos e da operação solicitada, na forma de menu. 
Dependendo da opção escolhida, deve ser executada a operação executada
e escrito seu resultado. Utilize uma variável caractere para armazenar
a operação e utilize o comando caso para escolher a operação a ser executada
a partir do operador.
*/

#include <stdio.h>

int main(void){

    float a, b, res;
    char op;

    scanf("%f %c %", &a, &op, &b);

    switch(op){
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
    }

    printf("%f\n", res);

    return 0;
}
