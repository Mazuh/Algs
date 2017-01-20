/*
Dada a definição de MDC: "Dados dois números inteiros a e b não nulos,
define-se como o máximo divisor comum (MDC) como sendo o maior 
inteiro que divide simultaneamente a e b". faça um algoritmo que leia dois
números e, a partir deles, descubra o máximo divisor comum (MDC).
*/

#include <stdio.h>

int main(void){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int gcd = 0; // greatest common divisor
    
    for(int i = 1; i <= a && i <= b; i++){
        if ((a % i == 0) && (b % i == 0)){
            gcd = i;
        }
    }

    printf("%d\n", gcd);

    return 0;
}
