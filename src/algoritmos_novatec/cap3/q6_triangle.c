/*
Faça um algoritmo que leia três valores que representam os lados
de um triângulo. Primeiramente, verifique se os lados podem formar
um triângulo (a soma de dois lados não pode ser menor que o terceiro lado). 
Caso possa formar um triângulo, indique se este é equilátero, isósceles ou 
escaleno.
*/

#include <stdio.h>

int main(void){

    int segA, segB, segC;
    scanf("%d %d %d", &segA, &segB, &segC);

    if(segA+segB < segC || segA+segC < segB || segB+segC < segA
        || segA <= 0 || segB <= 0 || segC <= 0){
        printf("Absurdo\n");
        return 1;

    } else if (segA == segB && segA == segC){
        printf("Equilátero\n");

    } else if (segA == segB || segA == segC || segB == segC){
        printf("Isósceles\n");
    
    } else{
        printf("Escaleno\n");
    }

    return 0;
}
