/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1060
*/

#include <stdio.h>

int main(){

    int i;
    float num;

    int positiveQtt = 0;
    
    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0)
            positiveQtt++;
    }

    printf("%d valores positivos\n", positiveQtt);

    return 0;
}
