/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1164
*/

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int i, j, num, sum, maxSuspect;
    for (i = 0; i < n; i++){
        scanf("%d", &num);

        maxSuspect = num / 2;
        sum = 0;
        for (j = 1; j <= maxSuspect; j++)
            if (num % j == 0)
                sum += j;

        if (sum == num)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }

	return 0;
}
