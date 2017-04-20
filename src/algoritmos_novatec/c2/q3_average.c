/*
Faça um algoritmo que calcule a média de quatro números introduzidos pelo usuário.
*/

#include <stdio.h>

int main(void){

    float input;
    float sum = 0;
    int qttNums = 4;

    for (int i = 0; i < qttNums; i++){
        scanf("%f", &input);
        sum += input;
    }

    printf("%f\n", (sum / qttNums));

    return 0;
}
