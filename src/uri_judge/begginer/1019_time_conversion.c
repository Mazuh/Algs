/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1019
*/

#include <stdio.h>

int main(){

	int seconds, minutes, hours;

	scanf("%d", &seconds);

	minutes = seconds / 60; /* int division! */
	seconds = seconds % 60;

	hours = minutes / 60; /* once again! */
	minutes = minutes % 60;

	printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}