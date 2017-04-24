/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1075
*/

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int i = 0;

    do{ // to find first divisor
        i++;
    } while (i % n != 2);

    while (i < 10000){ // to keep walking faster, step n
        printf("%d\n", i);
        i += n;
    }

	return 0;
}
