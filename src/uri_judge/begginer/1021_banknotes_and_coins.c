/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1021
*/

#include <stdio.h>

int main(){

	double fullCash;
	int billCash, coinCash;

	int bills[6] = {100, 50, 20, 10, 5, 2};
	int coins[6] = {100, 50, 25, 10, 5, 1};
	char coinsStrs[6][5] = {"1.00", "0.50", "0.25", "0.10", "0.05", "0.01"};

	scanf("%lf", &fullCash);
	
	billCash = (int) fullCash;
	coinCash = (fullCash - billCash) * 100;

	int i;

	printf("NOTAS:\n");
	int billsQtt;
	for (i = 0; i < 6; i++){
		billsQtt = billCash / bills[i]; /* int division! */
		billCash = billCash % bills[i];
		printf("%d nota(s) de R$ %d.00\n", billsQtt, bills[i]);
	}

	if (billCash){
		coinCash += 100;
	}

	printf("MOEDAS:\n");
	int coinsQtt;
	for (i = 0; i < 6; i++){
		coinsQtt = coinCash / coins[i]; /* int division! */
		coinCash = coinCash % coins[i];
		printf("%d moeda(s) de R$ %s\n", coinsQtt, coinsStrs[i]);
	}

    return 0;
}