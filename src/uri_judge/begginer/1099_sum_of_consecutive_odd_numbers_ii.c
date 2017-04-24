/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1099
*/

#include <stdio.h>

int main(){

    int qtt;
    scanf("%d", &qtt);

    int x, y, aux;
    int sum;

    int i, j;
    for (i = 0; i < qtt; i++){
        scanf("%d %d", &x, &y);

        if (x > y){
            aux = x;
            x = y;
            y = aux;
        }

        sum = 0;
        for ((j = (x%2) ? x+2 : x+1); (j < y); (j += 2)){
            sum += j;
        }
        printf("%d\n", sum);
    }

	return 0;
}
