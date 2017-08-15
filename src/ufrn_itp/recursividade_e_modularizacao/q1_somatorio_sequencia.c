#include <stdio.h>
#include <math.h>

double f(int n){
	if (n == 0) return 1;
	else return f(n-1) + (1/pow(2, n));
}

int main(){
	printf("%lf\n", f(2));
	return 0;
}