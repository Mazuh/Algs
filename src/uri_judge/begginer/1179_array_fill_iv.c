/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1179
*/

#include <stdio.h>

#define MAX_PAIR_SIZE 5

void printMyArray(int myArray[MAX_PAIR_SIZE], int size, int isOdd){
    int i;
    for (i = 0; i < size; i++)
        printf("%s[%d] = %d\n", (isOdd ? "impar" : "par" ), i, myArray[i]);
}

int main(){

    int evens[MAX_PAIR_SIZE], odds[MAX_PAIR_SIZE];
    int evensSize = 0, oddsSize = 0;

    int num, isOdd;

    int i, j;
    for (i = 0; i < 15; i++){

        scanf("%d", &num);

        if (isOdd = num%2){
            if (oddsSize == MAX_PAIR_SIZE){
                printMyArray(odds, oddsSize, isOdd);
                oddsSize = 0;
            }
            odds[oddsSize++] = num;

        } else{
            if (evensSize == MAX_PAIR_SIZE){
                printMyArray(evens, evensSize, isOdd);
                evensSize = 0;
            }
            evens[evensSize++] = num;

        }

    }

    printMyArray(odds, oddsSize, isOdd = 1);
    printMyArray(evens, evensSize, isOdd = 0);

	return 0;
}
