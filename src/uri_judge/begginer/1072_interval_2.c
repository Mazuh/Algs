/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1072
*/

#include <stdio.h>

int main(){

    int n, x;

    scanf("%d", &n);

    int inQtt = 0, outQtt = 0;

    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        if (x < 10 || x > 20)
            outQtt++;
        else
            inQtt++;
    }

    printf("%d in\n%d out\n", inQtt, outQtt);

    return 0;
}
