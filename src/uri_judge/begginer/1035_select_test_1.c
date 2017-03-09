/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1098
*/

#include <stdio.h>

int main(){

	float i = 0, j;

	print("I=0 J=1\nI=0 J=2\nI=0 J=3");

	for (i = 0.2; i < 2; i+=0.2){
		printf("I=%.2f ");
		for (j = 1; j <= 3; j++){
			printf("J=%0.2f\n");
		}
	}

    return 0;
}