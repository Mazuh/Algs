/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1012
*/

#include <stdio.h>

int main(){

    const double PI = 3.14159;

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    /* the area of the rectangled triangle that has base A and height C
    A = (base * height) / 2
    */
    printf("TRIANGULO = %.3lf\n", (a*c)/2);

    /* the area of the radius's circle C. (pi = 3.14159)
    A = PI * radius
    */
    printf("CIRCULO = %.3lf\n", PI*c*c);

    /* the area of the trapezium which has A and B by base, and C by height
    A = ((larger base + minor base) * height) / 2
    */
    printf("TRAPEZIO = %.3lf\n", ((a+b)*c)/2);

    /* the area of ​​the square that has side B
    A = side^2
    */
    printf("QUADRADO = %.3lf\n", b*b);

    /* the area of the rectangle that has sides A and B
    A = base * height
    */
    printf("RETANGULO = %.3lf\n", a*b);

    return 0;
}
