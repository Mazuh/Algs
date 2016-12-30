/*
Faça um algoritmo que leia as respostas de três questões de múltiplica
escolha ('a', 'b', 'c', 'd'). Em seguida, leia o gabarito dessas
respostas, ou seja, as respostas corretas. Depois, compare as respostas
dadas com as do gabarito e indique quantas respostas estão corretas.
*/

#include <stdio.h>

int main(void){

    int asksQtt = 3;
    char asks[][4] = {"Q1?", "Q2?", "Q3?"};
    char answers[] = {'a', 'c', 'd'};

    int correctAnswersQtt = 0;

    char answer;
    for (int i = 0; i < asksQtt; i++){
        printf("%s ", asks[i]);
        scanf(" %c", &answer);

        if (answers[i] == answer){
            correctAnswersQtt++;
        }
    }

    printf("%d\n", correctAnswersQtt);

    return 0;
}
