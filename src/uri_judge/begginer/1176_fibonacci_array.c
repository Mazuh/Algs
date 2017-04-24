/*
https://www.urionlinejudge.com.br/judge/en/problems/view/1176
*/

#include <stdio.h>

int printFibonacciArray(){
    // prints an array of 60nd's first fibonnaci values
    int i;
    unsigned long long current;
    unsigned long long precedingBy1 = 1, precedingBy2 = 0;

    printf("const unsigned long long FIBONNACI[61] = {\n    0,\n    1");
    for (i = 0; i < 59; i++){
        current = precedingBy1 + precedingBy2;
        printf(",\n    %llu", current);
        precedingBy2 = precedingBy1;
        precedingBy1 = current;
    }
    printf("\n};\n");
}

const unsigned long long FIBONNACI[61] = {
    0,
    1,
    1,
    2,
    3,
    5,
    8,
    13,
    21,
    34,
    55,
    89,
    144,
    233,
    377,
    610,
    987,
    1597,
    2584,
    4181,
    6765,
    10946,
    17711,
    28657,
    46368,
    75025,
    121393,
    196418,
    317811,
    514229,
    832040,
    1346269,
    2178309,
    3524578,
    5702887,
    9227465,
    14930352,
    24157817,
    39088169,
    63245986,
    102334155,
    165580141,
    267914296,
    433494437,
    701408733,
    1134903170,
    1836311903,
    2971215073,
    4807526976,
    7778742049,
    12586269025,
    20365011074,
    32951280099,
    53316291173,
    86267571272,
    139583862445,
    225851433717,
    365435296162,
    591286729879,
    956722026041,
    1548008755920
};

int main(){

    int n;
    scanf("%d", &n);

    int i, term;
    for (i = 0; i < n; i++){
        scanf("%d", &term);
        printf("Fib(%d) = %llu\n", term, FIBONNACI[term]);
    }

	return 0;
}
