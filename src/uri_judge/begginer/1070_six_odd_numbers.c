/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1070
*/

#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int i;
    for (i = (num % 2) ? num : ++num; i <= num+10; i += 2){
        printf("%d\n", i);
    }

    return 0;
}