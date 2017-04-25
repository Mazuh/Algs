/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1042
*/

#include <stdio.h>

int main(){

	int regularV[3];
	int i;

	scanf("%d %d %d", &regularV[0], &regularV[1], &regularV[2]);
	
	int orderedV[3] = {regularV[0], regularV[1], regularV[2]};
	
	int swapped, aux, rightIndex, leftIndex;
	do{ // bubble sort
		swapped = 0;
		for (i = 1; i < 3; i++){
			leftIndex = i-1;
			rightIndex = i;
			if (orderedV[leftIndex] > orderedV[rightIndex]){
				aux = orderedV[leftIndex];
				orderedV[leftIndex] = orderedV[rightIndex];
				orderedV[rightIndex] = aux;
				swapped = 1;
			}
		}
	} while (swapped);

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", 
		orderedV[0], orderedV[1], orderedV[2], 
		regularV[0], regularV[1], regularV[2]);

	return 0;
}
