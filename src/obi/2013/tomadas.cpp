/*
http://olimpiada.ic.unicamp.br/tobi/problem/show/1/165
*/

#include <cstdio>

using namespace std;

int main(){
    
    int t; // variável auxiliar pra ler as tomadas
    int soma = 0; // variável para armazenar os plugues possíveis das quatro réguas.
    
    // leitura e cálculo
    for (int i = 0; i < 4; i++){
        scanf("%d", &t); // entrada do tamanho da tomada
        soma += t - 1; // -1 pra compensar a conexão entre cada régua, indisponibilizando um plugue
    }
    
    // output
    printf("%d\n", (soma + 1)); // +1 pra compensar a última régua que é toda livre
    
    return 0;
}
