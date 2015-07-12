/*
http://olimpiada.ic.unicamp.br/info/para_competidores/pratique/programacao/nivelj/2010f1pj_pneu
*/

#include <cstdio>

using namespace std;

int main(){
    
    int n, // pressão desejada pelo motorista
        m; // pressão lida pela bomba
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    printf("%d\n", (n - m));
    
    return 0;
}
