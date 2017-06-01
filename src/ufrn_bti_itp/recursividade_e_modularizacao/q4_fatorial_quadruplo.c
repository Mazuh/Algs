#include <stdio.h>

int fac(int n){
	if (n == 0) return 1;
	else return fac(n-1) * n;
}

int quadraFac(int n){
	return fac(2*n)/fac(n);
}

int main(){
	printf("%d\n", quadraFac(3));
	return 0;
}
