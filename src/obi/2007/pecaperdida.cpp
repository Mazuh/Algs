#include <iostream>
#include <algorithm>
#include <vector>

/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f1p1_perdida
*/

using namespace std;

bool compare(const int x, const int y){
    return x < y;
}

int main(){

    // INPUTS
    // quantidade de peças
    int n;
    cin >> n;
    
    // vetor de peças
    vector<int> pecas;
    for (int i = 0; i < (n - 1); i++){ // p
        int peca;
        cin >> peca;
        pecas.push_back(peca);
    }
    
     
    // ordenação do vetor
    sort(pecas.begin(), pecas.end(), compare);
    
    // percorre vetor até encontrar a peça que falta
    for(int i = 0; i < n; i++){
        
        // o 'í'ndice deve ser igual ao valor, pois tá em ordem
        if (pecas[i] != i+1){  // 'i'+1 pra compensar o 1o como 0
            // a peça atual não corresponde ao 'índice' do loop..
            // ..logo o 'índice' está ocupado por uma peça errada
            cout << (i+1) << endl; // é este índice perdido! 
            break; 
        }
        
    }

    return 0;

}
