/*
Faça um algoritmo que leia um número de 4 dígitos e escreva-o 
invertido. Por exemplo, se o número lido for 2548, o resultado 
será 8452.
*/

#include <stdio.h>

int main(void){

    int num, reverse;
    int digitsQtt = 4;

    scanf("%d", &num); // full

    reverse = (int) (num / 1000) * 1;
    num = num % 1000;
    
    reverse += ((int) (num / 100)) * 10;
    num = num % 100;
    
    reverse += ((int) (num / 10)) * 100;
    num = num % 10;

    reverse += ((int) num / 1) * 1000;
    num = num % 1;

    printf("%d\n", reverse);

    return 0;
}
