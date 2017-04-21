/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1064
*/

#include <stdio.h>

int main(){

    int i;
    float positiveSum = 0;
    int positiveQtt = 0;
    
    float num;
    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0){
            positiveSum += num;
            positiveQtt++;
        }
    }

    printf("%d valores positivos\n%.1f\n", positiveQtt, positiveSum/positiveQtt);

    return 0;
}