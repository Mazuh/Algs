#include <stdio.h>

void swap(int *x, int *y){
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

void printTest(int a, int b){
    // "type" inputs and output their answer
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n\n", a, b);
}

int main(){
    int a = 8;
    int b = 3;
    
    printTest(a, b);

    return 0;
}