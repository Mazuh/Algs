/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1009
*/

#include <stdio.h>

int main(){

    char name[100];
    double fixedSalary;
    double totalSaleMade;

    scanf("%s\n", &name);
    scanf("%lf %lf", &fixedSalary, &totalSaleMade);

    printf("TOTAL = R$ %.2lf\n", (fixedSalary + 0.15*totalSaleMade));

    return 0;
}
