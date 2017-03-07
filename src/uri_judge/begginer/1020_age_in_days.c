/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1020
*/

#include <stdio.h>

int main(){

	const int DAYS_PER_MONTH = 30;
	const int DAYS_PER_YEAR = 365;

	int days, months, years;

	scanf("%d", &days);

	years = days / DAYS_PER_YEAR;/* int division! */
	days = days % DAYS_PER_YEAR;

	months = days / DAYS_PER_MONTH;
	days = days % DAYS_PER_MONTH;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}