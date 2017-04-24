/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1180
*/

#include <stdio.h>

int main(){

	int lowestNumPosition, lowestNumValue;

	int n;
    scanf("%d", &n);

	int i;
	int num;
    scanf("%d", &num); // read first
    lowestNumPosition = 0;
    lowestNumValue = num;
	for (i = 1; i < n; i++){
		scanf("%d", &num); // read others
		if (num < lowestNumValue){
			lowestNumValue    = num;
			lowestNumPosition = i;
		}
	}

	printf("Menor valor: %d\nPosicao: %d\n", lowestNumValue, lowestNumPosition);

	return 0;
}
