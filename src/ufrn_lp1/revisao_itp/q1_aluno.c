#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno_struct{
	char *nome;
	float media;
} Aluno;

int main(){
	
	FILE *arqEntrada = fopen("entrada.dat", "r");
	int qtdAlunos = 0;
	Aluno *alunos = malloc(sizeof(Aluno) * qtdAlunos);

	printf("Lendo registros...\n");

	// input

	while (!feof(arqEntrada)){
		alunos = realloc(alunos, ++qtdAlunos * sizeof(Aluno));

		int nomeTam = 0;
		alunos[qtdAlunos-1].nome = malloc(nomeTam);
		char c = '.';
		while (c != ';'){
			c = fgetc(arqEntrada);
			alunos[qtdAlunos-1].nome = realloc(alunos[qtdAlunos-1].nome, ++nomeTam);
			alunos[qtdAlunos-1].nome[nomeTam-1] = (c == ';') ? '\0' : c ;
		}

		fscanf(arqEntrada, "%f; ", &alunos[qtdAlunos-1].media);
	}

	// output
	float somatorioMedias = 0;

	for (int i = 0; i < qtdAlunos; i++){
		printf("Lido: %s - %.1f\n", alunos[i].nome, alunos[i].media);
		somatorioMedias += alunos[i].media;
	}

	printf("Calculando...\n");

	printf("Media das notas dos alunos: %.1f\n", somatorioMedias/qtdAlunos);

	// clear

	for (int i = 0; i < qtdAlunos; i++){
		free(alunos[i].nome);
	}

	free(alunos);

	fclose(arqEntrada);
	
	return 0;
}