#include <stdio.h>

int main(){

	double somatorio = 0;

	double inNota;

	double menorNota = 11;
	char temMenorQue3 = 0;

	printf("Insira as notas das 3 unidades: ");

	int i = 0;
	
	for (i = 0; i < 3; i++){
		scanf(" %lf", &inNota);

		somatorio += inNota;

		if (inNota < menorNota)
			menorNota = inNota;

		if (inNota < 3.0)
			temMenorQue3 = 1;
	}

	if ((somatorio/3 >= 7.0) || (somatorio/3 >= 5.0 && !temMenorQue3)){
		printf("Aprovado.\n");

	} /*else if (somatorio/3 < 3.0){
		printf("Reprovado.\n");

	} */else{
		printf("Em reposição...\nDigite a nota da reposição: ");
		scanf(" %lf", &inNota);
		somatorio = somatorio - menorNota + inNota;
		if (somatorio/3 >= 5.0){
			printf("Aprovado.\n");
		} else{
			printf("Reprovado.\n");
		}
	}

	return 0;
}