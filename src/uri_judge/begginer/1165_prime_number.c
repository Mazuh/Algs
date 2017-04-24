/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1165
*/

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int i, j, num, maxSuspect;
    int isPrime;
    for (i = 0; i < n; i++){
        scanf("%d", &num);

        maxSuspect = num / 2;
        isPrime = 1;

        for (j = 2; isPrime && j <= maxSuspect; j++)
            if (num % j == 0)
                isPrime = 0;

        if (isPrime)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);

    }

	return 0;
}
