/**
Questão 2
*/

#include <stdio.h>

int main(){

	int i;

	float n;

	float compressedVector[50], originalVector[50];
	int originalVectorSize = 0, compressedVectorSize = 0;
	
	printf("Entre com um vetor: ");
	/* Scanning a vector */
	while(1){
		
		scanf("%f", &n);

		if (n == -999)
			break;
		
		if (n != 0)
			compressedVector[compressedVectorSize++] = n;

		originalVector[originalVectorSize++] = n;

	}

	/* Ending compression */
	for (i = compressedVectorSize; i < originalVectorSize; i++){
		compressedVector[i] = 0;
	}
	compressedVectorSize = originalVectorSize;

	/* Printing */
	printf("Vetor original: ");
	for (i = 0; i < originalVectorSize; i++){
		printf("%.1f ", originalVector[i]);
	}
	printf("\n");

	printf("Vetor compactado: ");
	for (i = 0; i < compressedVectorSize; i++){
		printf("%.1f ", compressedVector[i]);
	}
	printf("\n");

	return 0;

}