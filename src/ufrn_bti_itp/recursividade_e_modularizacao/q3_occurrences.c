#include <stdio.h>

int ssearch(int number, int target){
	if (number) return ssearch(number/10, target) + (number % 10 == target);
	else 		return !target;
}

int main(){
	printf("%d\n", ssearch(762021192, 2));
	return 0;
}
