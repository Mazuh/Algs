/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1079
*/

#include <stdio.h>

int main(){

    int n;
    float a, b, c;

    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++){
        scanf("%f %f %f", &a, &b, &c);
        printf("%.1f\n", (2*a + 3*b + 5*c)/10);
    }

    return 0;
}
