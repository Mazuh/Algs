#include <stdio.h>

void negate(int *numbers, int n){
    for (int i = 0; i < n; i++)
        numbers[i] = -numbers[i];
}

void printTestNegate(int *numbers, int n){
    // "type" inputs and outputs their answer
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    
    negate(numbers, n);

    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n\n");
}

int main(){
    int numbers1[8] = {2, 4, 7, -3, 9, 0, 0, 15};
    int n1 = 8;
    
    printTestNegate(numbers1, n1);

    return 0;
}