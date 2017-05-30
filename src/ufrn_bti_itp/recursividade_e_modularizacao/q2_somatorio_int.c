#include <stdio.h>

int f(int *vector, int size){
	if (size == 0) return 0;
	else return vector[size-1] + f(vector, size-1);
}

int main(){
	int size = 6;
	int vector[6] = {1, 1, 1, 1, 1, 9};
	printf("%d\n", f(vector, size));
	return 0;
}