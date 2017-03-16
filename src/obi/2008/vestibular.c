/**
http://olimpiada.ic.unicamp.br/pratique/programacao/nivelj/2008f1pj_vestib
*/

#include <stdio.h>

int main(){
	
	int quizzQtt;
	
	scanf("%d", &quizzQtt);
	
	char correctAnswers[quizzQtt+1];
	char studentAnswers[quizzQtt+1];
	
	scanf("%s", &correctAnswers);
	scanf("%s", &studentAnswers);
	
	int score = 0;
	int i;
	for(i = 0; i < quizzQtt; i++){
		if (studentAnswers[i] == correctAnswers[i]) {
			score++;
		}
	}
	
	printf("%d\n", score);
	
	return 0;
}
