/**

*/

#include <stdio.h>

int main(){

	int bilboNum, gollumNum;

	int minor, major;

	printf("Digite os números de Bilbo e Gollum, respectivamente:\n");
	scanf("%d %d", &bilboNum, &gollumNum);

	minor = (bilboNum < gollumNum) ? bilboNum : gollumNum;
	major = (bilboNum < gollumNum) ? gollumNum : bilboNum;

	int sum = minor;
	int sumQtt = 1;
	printf("%d", minor);
	do{
		sum += minor + sumQtt;
		printf(" + %d", (minor + sumQtt));
		sumQtt++;
	} while(sum < major);

	printf(" = %d\n", sum);
	printf("%d numeros somados.\n", sumQtt);
	printf("Se %d for par, Bilbo vence; mas se for ímpar, Gollum venceu.\n", sumQtt);
	printf("Logo %s venceu!\n", (sumQtt % 2) ? "Gollum" : "Bilbo");

    return 0;

}