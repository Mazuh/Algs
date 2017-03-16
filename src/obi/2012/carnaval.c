/**
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2012f2p1_carnaval
*/

#include <stdio.h>

int main(){
	
	const int QUANTITY = 5;
	
	float lowest = 11.0, higher = -1.0;
	float total = 0;
	
	float current;

	int i;
	for(i = 0; i < QUANTITY; i++){

		scanf("%f", &current);
		total += current;
		
		if (current < lowest)
			lowest = current;
		if (current > higher)
			higher = current;
		
	}
	
	total = total - lowest - higher;
	
	printf("%.1f\n", total);
	
	return 0;
}
