/*
Da mesma forma que a multiplicação pode ser expressa
como o resultado de várias adições, a potenciação pode ser
representada por uma série de multiplicações. Faça um
algoritmo que calcule a potenciação usando o operador
"*". Depois, faça o teste de mesa para garantir que o 
exercício está correto.
*/

#include <stdio.h>

int main(void){

    float base, exponent; // exponent may also be called index or power.
    float result = 1;

    scanf("%f %f", &base, &exponent);

    for (int i = 0; i < (exponent < 0 ? -exponent : exponent); i++){
        result *= base;
    }

    if (exponent < 0){
        result = 1 / result;
    }
    
    printf("%f\n", result);

    return 0;
}
