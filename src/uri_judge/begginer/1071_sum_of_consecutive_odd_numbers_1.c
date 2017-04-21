/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1071
*/

#include <stdio.h>

int main(){

    int x, y;
    int aux;

    scanf("%d %d", &x, &y);

    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }

    int sum = 0;

    int i;
    for (i = x+1; i < y; i++){
        if (i % 2)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
