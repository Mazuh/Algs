/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2012f1p1_iguais
*/

#include <iostream>

using namespace std;

int main(){
    
    // VARS
    int n;
    int maiorCont;
    
    int contSequenciaAtual;
    int ultimoNumero, lido;
    
    
    // INPUTS iniciais
    cin >> n; 
    cin >> lido;
    
    
    // ATRIBUIÇÕES iniciais
    ultimoNumero = lido;
    maiorCont = 1;
    contSequenciaAtual = 1;
    
    
    // INPUTS e processamento lógico
    for (int i = 1; i < n; i++){
        cin >> lido;
        
        if (lido == ultimoNumero){
            // número igual ao último, contador incrementado.
            contSequenciaAtual++;
            //ultimoNumero = lido // inútil, pq vai ser ==
        } else{
            // número diferente, contador reiniciado.
            ultimoNumero = lido;
            contSequenciaAtual = 1;
        }
        
        // a maior sequência definirá os pontos
        if (contSequenciaAtual > maiorCont){
            maiorCont = contSequenciaAtual;
        }
        
    }
    
    // OUTPUTS
    // o ponto máximo do contador serão os pontos
    cout << maiorCont << endl;
    
    return 0;
}
