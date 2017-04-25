/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1045
*/

#include <stdio.h>

int main(){
	
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double orderedV[3] = {a, b, c};
	
	int i, swapped, rightIndex, leftIndex;
	double aux;
	do{ // bubble sort
		swapped = 0;
		for (i = 1; i < 3; i++){
			leftIndex = i-1;
			rightIndex = i;
			if (orderedV[leftIndex] < orderedV[rightIndex]){
				aux = orderedV[leftIndex];
				orderedV[leftIndex] = orderedV[rightIndex];
				orderedV[rightIndex] = aux;
				swapped = 1;
			}
		}
	} while (swapped);

	a = orderedV[0];
	b = orderedV[1];
	c = orderedV[2];

	if (a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if (a*a == b*b + c*c)
			printf("TRIANGULO RETANGULO\n");
		else if (a*a > b*b + c*c)
			printf("TRIANGULO OBTUSANGULO\n");
		else
			printf("TRIANGULO ACUTANGULO\n");
		
		if (a == b && b == c && a == c)
			printf("TRIANGULO EQUILATERO\n");
		else if ((a == b && b != c) || (a == c && a != b) || (b == c && b != a))
			printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}
