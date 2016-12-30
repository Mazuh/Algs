/*
Faça um algoritmo que determine se um dado número é par ou ímpar 
(utilize o operador resto: <dividendo> resto <divisor>, que retorna o resto
da divisão inteira de <dividendo>/<divisor>).
*/

#include <stdio.h>

int main(void){

    int num;

    scanf("%d", &num);

    if (num % 2)
        printf("Ímpar.\n");
    else
        printf("Par.\n");

    return 0;
}
