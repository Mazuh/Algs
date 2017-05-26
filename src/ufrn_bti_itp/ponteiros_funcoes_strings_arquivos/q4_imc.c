#include <stdio.h>

double IMC(double weight, double height){
    return (weight)/(height*height);
}

char* descriptionByIMC(double imc){
    if (imc < 17)
        return "Muito abaixo do peso";
    if (imc < 18.5)
        return "Abaixo do peso";
    if (imc < 25)
        return "Peso normal";
    if (imc < 30)
        return "Acima do peso";
    if (imc < 35)
        return "Obesidade I";
    if (imc < 40)
        return "Obesidade II (severa)";
    else
        return "Obesidade III (mórbida)";
}

int main(){
    double weight, height;

    printf("Peso (em kg): ");
    scanf(" %lf", &weight);
    printf("Altura (em m): ");
    scanf(" %lf", &height);

    double imc = IMC(weight, height);
    printf("IMC: %lf (%s)\n", imc, descriptionByIMC(imc));

    return 0;
}