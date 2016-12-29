/*
Faça um algoritmo que receba a temperatura em graus Celsius e 
apresente-a em graus Fahrenheit, de acordo com a fórmula
ºF = (1,8ºC) + 32.
*/

#include <stdio.h>

int main(void){

    float celsius, fahrenheit;

    scanf("%f", &celsius);
    
    fahrenheit = 1.8 * celsius + 32;
    printf("%f\n", fahrenheit);

    return 0;
}
