/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1065
*/

#include <stdio.h>

int main(){

    int num;

    int evenQtt = 0;

    int i;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if (num % 2 == 0)
            evenQtt++;
    }

    printf("%d valores pares\n", evenQtt);

    return 0;
}
