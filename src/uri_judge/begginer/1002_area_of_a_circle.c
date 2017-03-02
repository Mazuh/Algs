/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1002
*/

#include <stdio.h>

int main(){

	const double PI = 3.14159;
	double radius;

	scanf("%lf", &radius);

	printf("A=%.4lf\n", PI*radius*radius);

	return 0;
}