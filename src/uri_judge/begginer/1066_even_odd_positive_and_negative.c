/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1066
*/

#include <stdio.h>

int main(){

	int num;

	int oddQtt = 0, negativeQtt = 0, positiveQtt = 0, totalQtt = 5;
	
	int i;
	for (i = 0; i < totalQtt; i++){
		scanf("%d", &num);
		if (num % 2)
			oddQtt++;
		if (num < 0)
			negativeQtt++;
		else if (num > 0)
			positiveQtt++;
	}

	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",
		(totalQtt - oddQtt), (oddQtt), (positiveQtt), (negativeQtt));

	return 0;
}
