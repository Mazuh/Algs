/*
Faça um algoritmo que calcule a soma dos números primos entre 1 e 100.
*/

#include <stdio.h>
#include <math.h>

int main(void){

    int sum = 2;
    char isPrime;
    
    // starting loop at 3, cause 2 (first prime number) is already
    // in my sum var.
    for (int i = 3; i < 100; i++){
        
        isPrime = 1;
        
         // start checking if it's an even number!
        for (int j = 2; j <= sqrt((float) i); j++){
            // stop when find at least one divider 
            // (loop will never reach the number itself)
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
            sum += i;
        }

    }

    printf("%d\n", sum);

    return 0;
}
