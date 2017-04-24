/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1073
*/

#include <stdio.h>

int main(){

    int num;
	scanf("%d", &num);

	int i;
	for (i = 2; i <= num; i += 2){
		printf("%d^2 = %d\n", i, i*i);
	}

    return 0;
}