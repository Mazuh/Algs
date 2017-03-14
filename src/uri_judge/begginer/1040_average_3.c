/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1040
*/

#include <stdio.h>

int main(){

	float n1, n2, n3, n4;
	float average;
	float exam;

	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	average = (2*n1 + 3*n2 + 4*n3 + n4) / 10;

	printf("Media: %.1f\n", average);

	if (average >= 7){
		printf("Aluno aprovado.\n");

	} else if (average < 5){
		printf("Aluno reprovado.\n");

	} else{
		printf("Aluno em exame.\n");
		scanf("%f", &exam);

		printf("Nota do exame: %0.1f\n", exam);

		average = (average + exam) / 2;

		printf("Aluno %s.\nMedia final: %.1f\n", (average < 5) ? "reprovado" : "aprovado", average);
	}

    return 0;
}