/**
Questão 2
*/

#include <stdio.h>
#include <math.h>

int main(){

	int bin[50];
	int binSize = 0;
	char binChar;
	
	int dec = 0;

	printf("Entre com um binario: ");
	while(1){
		scanf("%c", &binChar);
		if (binChar == '1')
			bin[binSize] = 1;
		else if (binChar == '0')
			bin[binSize] = 0;
		else
			break;
		binSize++;
	}

	int i;
	for (i = binSize-1; i >= 0; i--){
		dec += ((int) bin[i] * pow(2, i+1));
	}

	printf("O decimal eh: %d\n", dec);

	return 0;

}