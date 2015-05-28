/*
http://olimpiada.ic.unicamp.br/pdf/pratique/programacao/nivel1/2010f1p1_copa
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int m, n; // vars de leitura
    char equipes[] = { // 16 equipes
        'A', 'B', 'C', 'D', 'E',
        'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O',
        'P'
    };
    
    int qtdJogos; // definido por potência variável de base 2.
    
    for (int expo = 3; expo >= 0; expo--){
        
        // quantidade muda em cada rodada (vai diminuindo)    
        qtdJogos = (int) pow(2, expo); // padrão observado
        
        // analisando placar de cada jogo da rodada atual
        for (int i = 0; i < qtdJogos; i++){
            // inputs
            cin >> m >> n;
            
            // análise
            if (m > n){ // esquerda venceu
                equipes[i] = equipes[i * 2];
            } else{ // direita venceu
                equipes[i] = equipes[i * 2 + 1];
            }
            
        }
        
    }
    
    // output
    // o vetor foi diminuindo até o último jogo e
    // chegou à menor posição possível.
    cout << equipes[0] << endl;
    
    return 0; // flw
}
