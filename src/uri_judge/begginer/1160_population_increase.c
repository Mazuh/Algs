/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1160

TODO:
		Test this conjecture:
		Since f(x) is the number of inhabitants as a function of x years, such f is a function defined in natural numbers.
		Then f(x) = rx/100 + s, such that r and s are real (floating) constants,
		where r is the growing hate percentual (0<=r<=100)
		and s is the initial population in this experiment.

TODO2
		Test this conjecture:
		This loop can be turned into a recurrency relation (ie, a recursive function)

TODO3
		Test this conjecture:
		If TODO2 returns True, then this recurrency relation can be turned into a closed form (ie, a regular function).
*/

#include <stdio.h>

int main(){

	int testsQtt;

	int aPopulation, bPopulation;
	double aPercentualGrowing, bPercentualGrowing;

	scanf("%d", &testsQtt);

	char results[testsQtt];

	int i, years;
	for (i = 0; i < testsQtt; i++){

		scanf("%d %d %lf %lf", &aPopulation, &bPopulation, &aPercentualGrowing, &bPercentualGrowing);

		years = 0;
		while(aPopulation <= bPopulation){
			years++;

			if (years > 100){
				break;
			}
			
			aPopulation += (int) (aPopulation*aPercentualGrowing/100);
			bPopulation += (int) (bPopulation*bPercentualGrowing/100);
		}

		results[i] = years;
	}

	for (i = 0; i < testsQtt; i++){
		if (results[i] > 100){
			printf("Mais de 1 seculo.\n");
		} else{
			printf("%d anos.\n", results[i]);
		}
	}

    return 0;
}