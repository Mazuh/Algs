#include <stdio.h>

#define MIN_TAX_KHW 45
#define MIN_TAX_PRICE 20.00
#define TAX_PRICE_PER_KHW 0.50

double energyConsumptionBill(double kwh){
    double bill = MIN_TAX_PRICE;
    kwh -= MIN_TAX_KHW;

    if (kwh > 0)
        bill += TAX_PRICE_PER_KHW * kwh;
    
    return bill;
}

int main(){
    double kwh;

    printf("Consumo mensal (em Kwh): ");
    scanf(" %lf", &kwh);

    printf("Conta: R$ %.2lf\n", energyConsumptionBill(kwh));

    return 0;
}