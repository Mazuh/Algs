/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1048
*/

#include <stdio.h>

int main(){

	double currentSalary, increasedSalary, increaseRate;

	scanf("%lf", &currentSalary);

	if (currentSalary < 400.01)
		increaseRate = 0.15;
	else if (currentSalary < 800.01)
		increaseRate = 0.12;
	else if (currentSalary < 1200.01)
		increaseRate = 0.10;
	else if (currentSalary < 2000.01)
		increaseRate = 0.07;
	else
		increaseRate = 0.04;
	

	increasedSalary = currentSalary + currentSalary*increaseRate;

	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", 
		increasedSalary, 
		increasedSalary - currentSalary, 
		increaseRate * 100);

	return 0;
}
