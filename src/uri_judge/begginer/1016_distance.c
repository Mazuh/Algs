/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1016
*/

#include <stdio.h>

int main(){

    int distanceToBeTaken;

    scanf("%d", &distanceToBeTaken);

    /* Both cars start at equal positions.
    Y is faster than X.
    They run only in constant speed.

    Using proportion calc:
    - After 2 minutes, Y takes 1 km of distance from X.
    - So after %d minutes, Y takes distanceToBeTaken km of distance from X.*/
    printf("%d minutos\n", distanceToBeTaken*2);

    return 0;
}
