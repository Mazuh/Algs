/**
Questão 3
*/

#include <stdio.h>

int main(){

	int i, j, k;
	int couldFindRepeteadValue;

	int vectorValues[2][50];
	int vectorSizes[2] = {0, 0};
	int vectorNames[2] = {'M', 'N'};
	
	int uniqueValues[100];
	int uniqueValuesSize = 0;

	/* reading values and storing the unique ones */
	for (i = 0; i < 2; i++){
		printf("Entre com o valor de %c: ", vectorNames[i]);
		scanf("%d", &vectorSizes[i]);
		
		printf("Valores da sequência %c: ", vectorNames[i]);
		for (j = 0; j < vectorSizes[i]; j++) {
			scanf("%d", &vectorValues[i][j]);

			couldFindRepeteadValue = 0;
			for(k = 0; k < uniqueValuesSize; k++){
				if (uniqueValues[k] == vectorValues[i][j]){
					couldFindRepeteadValue = 1;
					break;
				}
			}

			if (!couldFindRepeteadValue){
				uniqueValues[uniqueValuesSize++] = vectorValues[i][j];
			}

		}

	}

	/* sorting the unique values using bubble algorithm */
	int leftIndex, rightIndex, swapped, aux;
	do{
		swapped = 0;
		for (i = 1; i < uniqueValuesSize; i++){
			leftIndex = i-1;
			rightIndex = i;
			if (uniqueValues[leftIndex] > uniqueValues[rightIndex]){
				aux = uniqueValues[leftIndex];
				uniqueValues[leftIndex] = uniqueValues[rightIndex];
				uniqueValues[rightIndex] = aux;
				swapped = 1;
			}
		}
	} while (swapped);

	/* printing the sorted unique values */
	for(i = 0; i < uniqueValuesSize; i++){
		printf("%d ", uniqueValues[i]);
	}

	printf("\n");

	return 0;

}