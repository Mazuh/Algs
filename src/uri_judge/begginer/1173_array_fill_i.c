/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1173
*/

#include <stdio.h>

int main(){

    int num, i;
    scanf("%d", &num);
    printf("N[0] = %d\n", num);
    for (i = 1; i < 10; i++){
        num *= 2;
        printf("N[%d] = %d\n", i, num);
    }

	return 0;
}
