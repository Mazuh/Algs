#include <stdio.h>

int p(int n){
	if (n >= 2) return 2*p(n-1) + p(n-2);
	else return n;
}

int main(){
	printf("%d\n", p(5));
	return 0;
}
