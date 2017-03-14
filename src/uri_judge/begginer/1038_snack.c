/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1038
*/

#include <stdio.h>

int main(){

	int cod, qtt;
	const float PRICES[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

	scanf("%d %d", &cod, &qtt);

	printf("Total: R$ %.2f\n", PRICES[cod-1] * qtt);

    return 0;
}