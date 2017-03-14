/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1094
*/

#include <stdio.h>

int main(){

	int testsQtt;

	scanf("%d", &testsQtt);

	int i;
	char animalType;
	int animalAmount;

	int totalQtt = 0, cQtt = 0, rQtt = 0, sQtt = 0;
	for (i = 0; i < testsQtt; i++){
		scanf("%d %c", &animalAmount, &animalType);

		if (animalType == 'C') cQtt += animalAmount;
		else if (animalType == 'R') rQtt += animalAmount;
		else if (animalType == 'S') sQtt += animalAmount;

		totalQtt += animalAmount;
	}

	printf("Total: %d cobaias\n", totalQtt);
	printf("Total de coelhos: %d\n", cQtt);
	printf("Total de ratos: %d\n", rQtt);
	printf("Total de sapos: %d\n", sQtt);
	printf("Percentual de coelhos: %.2f %%\n", ((100.0/totalQtt) * cQtt));
	printf("Percentual de ratos: %.2f %%\n", ((100.0/totalQtt) * rQtt));
	printf("Percentual de sapos: %.2f %%\n", ((100.0/totalQtt) * sQtt));

    return 0;
}