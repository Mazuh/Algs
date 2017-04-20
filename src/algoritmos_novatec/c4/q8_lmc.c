/*
Otimize o algoritmo do exercício 7 considerando que os números
candidatos ao MMC devem ser múltiplos do maior dos dois números.
Portanto, teste apenas seus múltiplos (somando não 1, mas o valor
do maior dos dois números), dentro do laço para encontrar o MMC.
*/

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int i;
    int higher = (a > b) ? a : b;
    for(i = higher; (i % a != 0 || i % b != 0); i += higher){
        // while at least one of them can't divide, repeat
    }

    printf("%d\n", i);

    return 0;
}
