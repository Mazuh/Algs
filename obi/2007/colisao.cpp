/*
 http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f1p1_colisoes
 */

#include <iostream>

using namespace std;

int main(){

    // vars
    bool colidem;
    // variáveis de primeiro e segundo 'r'etângulos
    // a "legenda" é: X inicial, Y inicial, X final, Y inicial
    int r1_Xi, r1_Yi, r1_Xf, r1_Yf;
    int r2_Xi, r2_Yi, r2_Xf, r2_Yf;

    // entrada
    cin >> r1_Xi;
    cin >> r1_Yi;
    cin >> r1_Xf;
    cin >> r1_Yf;
    
    cin >> r2_Xi;
    cin >> r2_Yi;
    cin >> r2_Xf;
    cin >> r2_Yf;

    // verifica se não colidem
    if ((r2_Xf <= r1_Xi) 
        || (r2_Xi >= r1_Xf)
        || (r2_Yi >= r1_Yf)
        || (r2_Yf <= r1_Yi)){
        
        colidem = false;
    
    } else{
        
        colidem = true;
        
    }
    
    // saída
    cout << ((int) colidem) << endl;

    return 0;
}
