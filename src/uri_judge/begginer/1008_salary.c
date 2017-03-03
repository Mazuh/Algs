/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1008
*/

#include <stdio.h>

int main(){

    int number;
    int workedHoursInMonth;
    double salaryPerHour;

    scanf("%d %d %lf", &number, &workedHoursInMonth, &salaryPerHour);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, workedHoursInMonth*salaryPerHour);

    return 0;
}
