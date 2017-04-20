/*
Faça um algoritmo que leia um número inteiro diferente de zero 
e diga se este é positivo ou negativo.
*/

#include <stdio.h>

int main(void){

    int num;

    scanf("%d", &num);

    if (num > 0){
        printf("Positivo.\n");
    } else if(num < 0){
        printf("Negativo.\n");
    } else{
        return 1;
    }

    return 0;
}
