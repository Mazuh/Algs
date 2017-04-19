/*
Faça um novo algoritmo para o cálculo de MMC de dois números,
mas que em vez de utilizar fatoração, parta do seguinte princípio:
"o MMC é o menor número maior ou igual dos dois números escolhidos
e que é divisível pelos dois números iniciais." Portanto, parta do
maior dos dois números e verifique, dentro do laço, se o número
é o MMC testando sua divisibilidade pelos dois números.
*/

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int i;

    for(i = (a > b ? a : b); (i % a != 0 || i % b != 0); i++){
        // while at least one of them can't divide, repeat
    }

    printf("%d\n", i);

    return 0;
}
