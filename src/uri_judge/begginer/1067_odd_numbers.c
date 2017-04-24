/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1067
*/

#include <stdio.h>

int main(){

	int num;
	scanf("%d", &num);

	int i;
	for (i = 1; i <= num; i += 2){
		printf("%d\n", i);
	}

	return 0;
}
