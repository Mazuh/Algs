/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1097
*/

#include <stdio.h>

int main(){

	int i, j;
	int start = 7;

	for (i = 1; i <= 9; i += 2){
		for (j = start; j > start-3; j--){
			printf("I=%d J=%d\n", i, j);
		}
		start += 2;
	}

	return 0;
}
