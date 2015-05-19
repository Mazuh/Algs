/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2011f1p1_pas
*/

#include <iostream>

using namespace std;

int main(){

    // VARS
    int n; // qtd de elementos da PA
    int qtdQuebras; // qtd mínima de quebras que a PA pode ter (output)

    // VARs auxiliares
    int lido;
    int ultimoLido;
    int razao;

    
    // INPUTS
    cin >> n;

    // mais INPUTS e PROCESSAMENTO
    // primeiro elemento a ser lido
    cin >> lido;
    ultimoLido = lido;

    // mais de 1 elemento
    if (n > 1){
        cin >> lido;
        razao = lido - ultimoLido;
        ultimoLido = lido;
    }
    
    qtdQuebras = 1; // já temos uma PA formada
    
    // mais de 2 elementos em diante
    for (int i = 2; i < n; i++){
        cin >> lido;

        if (lido - ultimoLido != razao){ // nova razão = nova PA
            qtdQuebras++;

            // "adianta" o loop pra descobrir a nova razão
            i++;
            if (i < n){
                ultimoLido = lido;
                
                cin >> lido;
                
                razao = lido - ultimoLido;
                ultimoLido = lido;
            }
            
        }else{
            // nenhuma nova razão, continue seu serviço, algoritmo
            ultimoLido = lido;
        }

    }

    // OUTPUT
    cout << qtdQuebras << endl;

    return 0;
}
