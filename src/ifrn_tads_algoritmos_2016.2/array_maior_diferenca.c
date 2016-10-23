/*
Escreva um programa que leia um array de 1.000 elementos e
mostre a maior diferença (valor absoluto) entre dois elementos
consecutivos desse array e em que índice eles estão.
*/

#include<stdio.h>

int main(){
    int i;

    int arraySize = 5; // a questão pede 1.000
    float array[arraySize];

    printf("Escreva %d valores inteiros:\n", arraySize);

    scanf("%f", &array[0]);
    float lastElement = array[0];
    float higherDiff = 0;
    int higherDiffPos = 0;

    float diff;
    for (i = 1; i < arraySize; i++){
        scanf("%f", &array[i]);

        diff = lastElement - array[i];
        if (diff < 0)
            diff = -diff;

        if (diff > higherDiff){
            higherDiff = diff;
            higherDiffPos = i;
        }

        lastElement = array[i];

    }

    printf("A maior diferença entre elementos consecutivos é de %f, entre as posições %d e %d.\n",
           (higherDiff),
           (higherDiffPos-1),
           (higherDiffPos));

    return 0;

}
