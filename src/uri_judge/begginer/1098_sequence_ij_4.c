/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1098

TODO:
Resolver a formatação da última impressão do loop.
Está:
I=2.0 J=3.0
I=2.0 J=4.0
I=2.0 J=5.0
Mas deveria estar:
I=2 J=3
I=2 J=4
I=2 J=5

*/

#include <stdio.h>

int main(){

	double i, j;

	i = 0;
	do{

		for (j = 1; j <= 3; j++){
			if (i == (int) i){
				printf("I=%.0lf J=%.0lf\n", i, i+j);
			} else{
				printf("I=%.1lf J=%.1lf\n", i, i+j);
			}
		}

		i += 0.2;
		//printf("Finalizando loop... Double: %lf e Float: %d\n", (double) i, (int) i); // debug
	} while(i <= 2.0);


    return 0;
}