/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2012f1p1_corrida
*/

#include <cstdio>

using namespace std;

int main(){
    
    // VARS
    int c; // o quanto pretende correr
    int n; // comprimento da pista
    
    // INPUTS
    scanf("%d", &c);
    scanf("%d", &n);
    
    // OUTPUT
    printf("%d\n", (c % n));// o C percorre completamente N o quanto
                    // for possível. Depois disso, o resto
                    // é o que, obviamente, resta pra
                    // correr.    
    
    return 0;
}
