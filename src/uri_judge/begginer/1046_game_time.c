/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1046
*/

#include <stdio.h>

int main(){
	
	int beginning, ending, duration;

	scanf("%d %d", &beginning, &ending);

	duration = ending - beginning;

	if (duration <= 0)
		duration += 24;
	
	printf("O JOGO DUROU %d HORA(S)\n", duration);

	return 0;
}
