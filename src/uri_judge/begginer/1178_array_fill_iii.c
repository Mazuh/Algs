/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1178
*/

#include <stdio.h>
#include <math.h>

int main(){

    double x;
    scanf("%lf", &x);

    int i;
    for (i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, x/pow(2, i));
    }
	return 0;
}
