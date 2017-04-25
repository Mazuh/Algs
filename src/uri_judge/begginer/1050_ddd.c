/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1050
*/

#include <stdio.h>

int main(){

	const int DDD_INDEX[8] = {61, 71, 11, 21, 32, 19, 27, 31};
	const char DESTINATION_INDEX[8][20] = {
		"Brasilia",
		"Salvador",
		"Sao Paulo",
		"Rio de Janeiro",
		"Juiz de Fora",
		"Campinas",
		"Vitoria",
		"Belo Horizonte",
	};

	int ddd;
	scanf("%d", &ddd);

	int i;
	for (i = 0; i < 8; i++){
		if (ddd == DDD_INDEX[i]){
			printf("%s\n", DESTINATION_INDEX[i]);
			i = 8;
		}
	}

	if (i == 8){
		printf("DDD nao cadastrado\n");
	}

	return 0;
}
