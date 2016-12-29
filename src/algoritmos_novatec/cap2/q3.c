/*
Faça um algoritmo que calcule a média de quatro números introduzidos pelo usuário.
*/

#include <stdio.h>

int main(void){

    float input;
    float sum = 0;
    int qtdNums = 4;

    for (int i = 0; i < qtdNums; i++){
        scanf("%f", &input);
        sum += input;
    }

    printf("%f\n", (sum / qtdNums));

    return 0;
}
