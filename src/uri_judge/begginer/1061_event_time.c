/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1061
*/

#include <stdio.h>

int main(){

	const int MAX_TIMES[4] = {30, 24, 60, 60};

	int timeDiff = 0;
	int i;

	int durationTimes[4];
	int beginningTimes[4];	
	int endingTimes[4];

	scanf("Dia %d", &beginningTimes[0]);
	scanf(" %d : %d : %d", &beginningTimes[1], &beginningTimes[2], &beginningTimes[3]);
	
	scanf(" Dia %d", &endingTimes[0]);
	scanf(" %d : %d : %d", &endingTimes[1], &endingTimes[2], &endingTimes[3]);

	for (i = 3; i >= 0; i--){
		timeDiff = endingTimes[i] - beginningTimes[i] - (timeDiff < 0);
		durationTimes[i] = timeDiff;
		if (durationTimes[i] < 0)
			durationTimes[i] += MAX_TIMES[i];
	}

	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", 
		durationTimes[0], durationTimes[1], durationTimes[2], durationTimes[3]);

	return 0;
}
