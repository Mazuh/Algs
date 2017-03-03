/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1011
*/

#include <stdio.h>

int main(){

    const double PI = 3.14159;

    double radius;

    scanf("%lf", &radius);

    printf("VOLUME = %.3lf\n", ((4.0/3.0) * PI * radius*radius*radius));

    return 0;
}
