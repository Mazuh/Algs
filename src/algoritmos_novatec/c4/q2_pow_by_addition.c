/*
Considerando que a potenciação é o resultado de várias
multiplicações e que a multiplicação pode ser 
expressa por meio de adições, implemente um algoritmo que
que realize potenciações por meio de adições.
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

    float base, exponent;
    float aux;
    float result = 1;

    scanf("%f %f", &base, &exponent);

    for (int i = 0; i < (exponent < 0 ? -exponent : exponent); i++){
        result = multiply(result, base);
    }

    if (exponent < 0){
        result = 1 / result;
    }
    
    printf("%f\n", result);

    return 0;
}
