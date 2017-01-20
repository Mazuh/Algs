/*
Dada a definição de MDC: "Dados dois números inteiros a e b não nulos,
define-se como o máximo divisor comum (MDC) como sendo o maior 
inteiro que divide simultaneamente a e b". faça um algoritmo que leia dois
números e, a partir deles, descubra o máximo divisor comum (MDC).
*/

#include <stdio.h>

int main(void){

    int a, b;

    scanf("%d %d", &a, &b);

    // analysing only positive divisors...
    // e.g.: divisors of number 4 are +-1, +-2, +- 1,
    // so the greatest of them will always be a positive value.
    if (a < 0)
        a = -a;
    
    if (b < 0)
        b = -b;

    // greatest common divisor
    int gcd = a < b ? a : b;
    
    // why don't start by 0? Cause I'm looking for the greatest of them!
    for(int i = gcd; i >= 1; i--){
        if ((a % i == 0) && (b % i == 0)){
            gcd = i;
            break;
        }
    }

    printf("%d\n", gcd);

    return 0;
}
