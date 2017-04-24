/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1175
*/

#include <stdio.h>

#define SIZE 3

int main(){

    int n[SIZE];

    int i;

    for (i = SIZE-1; i > -1; i--){
        scanf("%d", &n[i]);
    }

    for (i = 0; i < SIZE; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }


	return 0;
}
