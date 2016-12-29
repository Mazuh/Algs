/*
Faça um algoritmo que leia um número de 4 dígitos e escreva-o 
invertido. Por exemplo, se o número lido for 2548, o resultado 
será 8452.
*/

#include <stdio.h>

int main(void){

    char digits[4];
    int digitsQtt = 4;

    for(int i = 0; i < digitsQtt; i++){
        scanf("%c", &digits[i]);
    }
    
    for(int i = digitsQtt-1; i > -1; i--){
        printf("%c", digits[i]);
    }

    printf("\n");

    return 0;
}
