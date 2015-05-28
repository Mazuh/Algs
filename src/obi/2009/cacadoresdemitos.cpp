/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel2/2009f1p2_mito
*/

#include <iostream>
using namespace std;

int v[501][501] = {0};

int main(){
    
    int n; // número de raios
    int x, y; // variáveis de leitura
    
    // input 
    cin >> n;
    
    for (int i = 0; i < n; i++){
        
        // input de coordenadas
        cin >> x >> y;
        
        // verifica se tem algo diferente do 0 (padrão) na posição
        if (v[x][y]){
            cout << 1 << endl;
            return 0; // termina a rotina, pode parar a busca
        } else{
            v[x][y] = 1; // marca a posição
        }
        
    }
    
    // se passou por tudo sem finalizar, então não achou nada.
    cout << 0 << endl;
    
    return 0;
}
