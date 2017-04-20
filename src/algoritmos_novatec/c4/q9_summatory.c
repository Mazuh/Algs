/*
Faça o algoritmo para a resolução do somatório a seguir,
sendo n definido pelo usuário e maior do que 5:
  n
 ---
 \ (2 * i^2 + 5 * i + 1)
 /
 ---
 i=5
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n <= 5)
        return 1;

    int sum = 0;
    int i;
    for(i = 5; i <= n; i++){
        sum += i*(2*i + 5) + 1;
    }

    printf("%d\n", sum);

    return 0;
}
