/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1044
*/

#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);

	if (a % b && b % a){
		printf("Nao sao Multiplos\n");
	} else{
		printf("Sao Multiplos\n");
	}

	return 0;
}
