/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1018
*/

#include <stdio.h>

int main(){

	int cash;
	int bills[7] = {100, 50, 20, 10, 5, 2, 1};

	scanf("%d", &cash);

	printf("%d\n", cash);

	int billsQtt;
	int i;
	for (i = 0; i < 7; i++){
		billsQtt = cash / bills[i]; /* int division! */
		cash = cash % bills[i];
		printf("%d nota(s) de R$ %d,00\n", billsQtt, bills[i]);
	}

    return 0;
}