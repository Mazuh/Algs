/*
Dada a definição de MMC: "dados dois números inteiros a e b não nulos, 
define-se como mínimo múltiplo comum (MMC) como sendo o menor número 
inteiro positivo múltiplo comum de a e b [simultaneamente]", faça um 
algoritmo que leia dois números e encontre o mínimo múltiplo comum 
(MMC). Esse algoritmo deve utilizar o seguinte método para calcular
o MMC: "multiplicar os dois números e dividir pelo MDC (máximo divisor
comum)".
*/

#include <stdio.h>

int main(void){

    int a, b;
    scanf("%d %d", &a, &b);

    // lowest common multiple
    int lcm = (a * b) / gcd(a, b);

    printf("%d\n", lcm);

    return 0;
}

/** Aux function, from a previous algorithm */
int gcd(int a, int b){
    if (a < 0)
        a = -a;
    
    if (b < 0)
        b = -b;

    int gcd = a < b ? a : b;
    
    for(int i = gcd; i >= 1; i--){
        if ((a % i == 0) && (b % i == 0)){
            return i;
        }
    }
}
