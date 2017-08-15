#include <stdio.h>

void scalar(int coefficient, int *numbers, int n){
    for (int i = 0; i < n; i++)
        numbers[i] = coefficient*numbers[i];
}

void printTest(int coefficient, int *numbers, int n){
    // "type" inputs and output their answer
    printf("%d %d\n", n, coefficient);
    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    
    scalar(coefficient, numbers, n);

    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n\n");
}

int main(){
    int numbers1[8] = {2, 4, 7, -3, 9, 0, 0, 15};
    int n1 = 8;
    int m1 = 3;
    
    printTest(m1, numbers1, n1);

    return 0;
}