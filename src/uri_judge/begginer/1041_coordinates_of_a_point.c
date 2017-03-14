/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1041
*/

#include <stdio.h>

int main(){

	float x, y;

	scanf("%f %f", &x, &y);

	if (x == 0 && y == 0){
		printf("Origem\n");

	} else if (x == 0){
		printf("Eixo Y\n");
	
	} else if (y == 0){
		printf("Eixo X\n");
	
	} else if (y > 0){
		printf("Q%d\n", (x < 0) ? 2 : 1);

	} else { /* y < 0 */
		printf("Q%d\n", (x < 0) ? 3 : 4);
	}

    return 0;
}