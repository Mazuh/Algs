/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1051
*/
#include <stdio.h>

int main(){

	double salary;
	double taxes;

	scanf("%lf", &salary);

	double taxFloor, taxRate, taxesAval;
	const double TAX_FLOOR[3] = {4500.01, 3000.01, 2000.01};
	const double TAX_RATE[3]  = {0.28, 0.18, 0.08};

	taxes = 0;

	int i;
	for (i = 0; i < 3; i++){
		if (salary > TAX_FLOOR[i]){
			taxes += (salary - TAX_FLOOR[i]) * TAX_RATE[i];
			salary -= salary - TAX_FLOOR[i];
		}
	}

	if (taxes)
		printf("R$ %.2f\n", taxes);
	else
		printf("Isento\n");
	return 0;
}