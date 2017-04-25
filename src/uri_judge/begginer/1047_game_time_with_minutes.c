/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1047
*/

#include <stdio.h>

int main(){
	
	int beginningHour, beginningMinute;
	int endingHour, endingMinute;
	int durationHour, durationMinute;

	scanf("%d %d %d %d", &beginningHour, &beginningMinute, &endingHour, &endingMinute);

	durationHour = endingHour - beginningHour;
	durationMinute = endingMinute - beginningMinute;

	if (durationMinute < 0){
		durationMinute += 60;
		durationHour   -= 1;
	}

	if (durationHour <= 0){
		durationHour += 24;
	}

	if (durationHour == 24 && durationMinute > 0){
		durationHour = 0;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);

	return 0;
}
