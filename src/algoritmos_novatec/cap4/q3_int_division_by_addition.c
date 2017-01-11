/*
Faça um algoritmo que calcule a divisão inteira entre dois números,
por exemplo, 10 div 3 = 3, utilizando o operador de adição ou subtração. 
Depois, faça o teste de mesa para garantir que o exercício está correto. 
*/

#include <stdio.h>

int multiply(float a, float b){
    float res = 0;
    for (int j = 0; j < b; j++){
        res += a;
    }
    return res;
}

int main(void){

    float a, b;
    char aSign, bSign;
    float result;

    scanf("%f %f", &a, &b);

    if (b == 0){  // doesnt exist!
        return 1;
    }

    // are they positive or negative values?
    if (a < 0){
        aSign = '-';
        a = -a;
    } else{
        aSign = '+';
    }

    if (b < 0){
        bSign = '-';
        b = -b;
    } else{
        bSign = '+';
    }

    // how far do I need to go before surpass (ie,  (x-1) and not surpassing (x) value) my dividend?
    for (int i = 0; ; i++){
        if (multiply(b, i) > a){
            result = i - 1;
            break;
        }
    }

    // do I need to resign anything?
    if (aSign != bSign){
        result = -result;
    }

    // done!
    printf("%.0f\n", result);

    return 0;
}
