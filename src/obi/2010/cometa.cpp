// http://olimpiada.ic.unicamp.br/pratique/programacao/nivel2/2010f1p2_cometa

#include <cstdio>

using namespace std;

int main(){

    const int PRIMEIRO_A = 1986; // é o inicial a ser testado
    const int CONSTANTE = 76; // Passa de 76 em 76 anos 

    int a;
    scanf("%d", &a);

    int prox_a;
    for (int i = 1; i <= 10000; i++){
        prox_a = PRIMEIRO_A + (i * CONSTANTE);
        if (prox_a > a){
            printf("%d\n", prox_a);
            return 0;
        }
    }
    
    
    return 0;
}
