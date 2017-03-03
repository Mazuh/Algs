/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1010
*/

#include <stdio.h>

int main(){

    int p1Code, p1UnitsQtt;
    double p1PricePerUnit;

    int p2Code, p2UnitsQtt;
    double p2PricePerUnit;

    scanf("%d %d %lf", &p1Code, &p1UnitsQtt, &p1PricePerUnit);
    scanf("%d %d %lf", &p2Code, &p2UnitsQtt, &p2PricePerUnit);

    printf("VALOR A PAGAR: R$ %.2lf\n", (p1UnitsQtt*p1PricePerUnit + p2UnitsQtt*p2PricePerUnit));

    return 0;
}
