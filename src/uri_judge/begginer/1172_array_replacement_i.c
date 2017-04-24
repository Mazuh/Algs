/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1172
*/

#include <stdio.h>

int main(){

    int num, i;
    for (i = 0; i < 10; i++){
        scanf("%d", &num);
        printf("X[%d] = %d\n", i, (num > 0) ? num : 1);
    }

	return 0;
}
