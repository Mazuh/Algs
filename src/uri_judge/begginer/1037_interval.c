/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1037
*/

#include <stdio.h>

int main(){

	double num;

	scanf("%lf", &num);

	if (num < 0 || num > 100){
		printf("Fora de intervalo\n");
	} else{
		printf("Intervalo ");
		if (num <= 25){
			printf("[0,25]\n");
		} else if (num <= 50){
			printf("(25,50]\n");
		} else if (num <= 75){
			printf("(50,75]\n");
		} else{
			printf("(75,100]\n");
		}
	}

    return 0;
}