/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1070
*/

#include <stdio.h>

int main(){

    int x, printedQtt;

    scanf("%d", &x);

    printedQtt = 0;
    do {
        if (x % 2){ // if 'mod' result is 1, then it's an odd number
            printf("%d\n", x);
            printedQtt++;
        }
        x++;
    } while(printedQtt < 6);

    return 0;
}