#include <stdio.h>

int compact(int *numbers, int oldSize){
    int newSize = 0;

    for (int i = 0; i < oldSize; i++){
        if (numbers[i] > 0)
            numbers[newSize++] = numbers[i];
    }

    return newSize;
}

int main(){

    int numbers[100];
    int size;

    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        scanf("%d", &numbers[i]);
    }

    int compactSize = compact(numbers, size);

    for (int i = 0; i < compactSize; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}