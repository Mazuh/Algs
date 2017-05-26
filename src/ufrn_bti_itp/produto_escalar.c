/**
Produto escalar de dois vetores de N posições.
A.B = axbx + ayby + ... + anbn.
*/

#include <stdio.h>

int produtoEscalar(int sizes, int *v1, int *v2){
	int i;
	int escalar = 0;
	for (i = 0; i < sizes; i++){
		escalar += v1[i] * v2[i];
	}

	return escalar;
}

int main(){

	int n;
	
	printf("Dimensão dos vetores: ");
	scanf("%d", &n);

	int v1[n];
	int v2[n];

	printf("Escreva os %d elementos inteiros de cada um dos DOIS vetores.\n", n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &v1[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &v2[i]);
	}

	printf("Produto escalar: %d\n", produtoEscalar(n, v1, v2));

    return 0;

}