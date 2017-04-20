/*
Dado um ano d.C. (depois de Cristo), identifique se este é um ano bissexto 
ou não. Considere que para o ano ser bissexto basta que seja divisível por
400. Caso contrário, este precisará ser divisível por 4 e não ser divisível
por 100.
*/

#include <stdio.h>

int main(void){

    int year;

    scanf("%d", &year);

    if ((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
        printf("Bissexto\n");
        return 0;
    } else{
        printf("Não bissexto\n");
        return 1;
    }
    
}
