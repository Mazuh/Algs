/**
Questão 1
*/

#include <stdio.h>

int main(){

	int i, j;
	int sumDivisors;
	int m;

	printf("Entre com o valor de M: ");
	scanf("%d", &m);

	printf("Números perfeitos entre 0 e %d (intervalo ABERTO): ", m);
	for (i = 1; i < m; i++){
		
		sumDivisors = 0;
		for (j = 1; j <= i/2; j++){
			if(i % j == 0){
				sumDivisors += j;
			}
		}

		if (sumDivisors == i){
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;

}