/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1177
*/

#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    int i, j;
    j = 0;
    for (i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, j);
        j++;
        if (j == t)
            j = 0;
    }
	return 0;
}
