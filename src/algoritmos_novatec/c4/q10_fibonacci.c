/*
Faça um algoritmo que encontre o n-ésimo termo da série de Fibonnaci.
A série de Fibonnaci é dada por:
f(n) = f(n-1) + f(n-2), para n > 1;
f(1) = 1; e
f(0) = 0.

Exemplos:
f(0) = 0
f(1) = 1
f(2) = f(1) + f(0) = 1 + 0 = 1
f(3) = f(2) + f(1) = 1 + 1 = 2
f(4) = f(3) + f(2) = 2 + 1 = 3
f(5) = f(4) + f(3) = 3 + 2 = 5
f(6) = f(5) + f(4) = 5 + 3 = 8
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int penultimate = 0, last = 1;
    int current;

    int i;
    printf("0 "); // some people claims the first fib number as 0
    for (i = 0; i < n-1; i++){
        current = penultimate + last;
        printf("%d ", current);
        penultimate = last;
        last = current;
    }
    printf("\n");
    return 0;
}
