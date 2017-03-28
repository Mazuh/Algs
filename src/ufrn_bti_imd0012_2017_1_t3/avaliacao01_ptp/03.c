/**
Questão 3: código corrigido
*/

#include <stdio.h>

int main(){

	int num,
	aux,
	reverso;

	printf("Digite um inteiro positivo: ");
	scanf("%d", &num);

	aux = num;
	reverso = 0;

	while (aux != 0){
		reverso = reverso * 10 + aux % 10;
		aux = aux / 10;
	}

	if (reverso == num)
		printf("O numero %d e um numero palindromo \n", num);
	else
		printf("O numero %d nao e um numero palindromo \n", reverso);

	return 0;

}