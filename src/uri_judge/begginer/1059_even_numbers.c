/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1059
*/

#include <stdio.h>

int main(){

    int num;

    for (num = 1; num <= 100; num++)
        if (num % 2 == 0)
            printf("%d\n", num);

    return 0;
}
