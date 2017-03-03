/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1013
*/

#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", highest(highest(a, b), c));

    return 0;
}

/** Return the highest value between A and B. */
int highest(int a, int b){
    return (a + b + abs(a - b)) / 2; /* by the way... wtf? */
}
