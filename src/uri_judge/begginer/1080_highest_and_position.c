/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1080
*/

#include <stdio.h>

int main(){

	int highestPosition, highestValue = -1;

	int i;
	int num;

	for (i = 0; i < 100; i++){
		scanf("%d", &num);
		if (num > highestValue){
			highestValue    = num;
			highestPosition = i + 1;
		}
	}

	printf("%d\n%d\n", highestValue, highestPosition);

	return 0;
}
