/**
https://www.urionlinejudge.com.br/judge/en/problems/view/1014
*/

#include <stdio.h>

int main(){

    int distanceTraveled;
    double fuelSpent;

    scanf("%d %lf", &distanceTraveled, &fuelSpent);

    printf("%.3lf km/l\n", distanceTraveled / fuelSpent);

    return 0;
}
