#include <stdio.h>

int ssearch(int number, int target){
	if (number == 0)
		if (target == 0) return 1;
		else 			 return 0;
	else
		return ssearch(number/10, target) + (number % 10 == target);
}

int main(){
	printf("%d\n", ssearch(762021192, 2));
	return 0;
}
