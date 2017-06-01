#include <stdio.h>


int _findLower(int *vector, int lastIndex, int lowerUntilNow){
		if (lastIndex == 0) {
		return lowerUntilNow;
	} else{
		int current = vector[--lastIndex];
		lowerUntilNow = (lowerUntilNow < current) ? lowerUntilNow : current;
		return _findLower(vector, lastIndex, lowerUntilNow);
	}
}

int findLower(int *vector, int size){
	int lastValue = vector[size-1];
	return _findLower(vector, size, lastValue);
}

int main(){
	int vector[] = {10, 5, 2, -9, 8, 4, 9};
	printf("%d\n", findLower(vector, 7));
	return 0;
}
