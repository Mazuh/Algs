#include <stdio.h>

int ssearch(int number, int target){
	if (number) return ssearch(number/10, target) + (number % 10 == target);
	else 		return number == target - 1;
}

int main(){
	printf("%d\n", ssearch(762021092, 0));
	return 0;
}
