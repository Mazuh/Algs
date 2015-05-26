/*
http://olimpiada.ic.unicamp.br/pratique/programacao/nivel2/2008f1p2_ogros
*/

#include <iostream>

using namespace std;

int main(){

    // VARs e INPUTS ---------------------------
    int n; // número de faixas de premiação
    int m; // número de ogros a participar
    cin >> n >> m;

    int lim[n-1]; // limites
    for (int i = 0; i < n-1; i++){
        cin >> lim[i];
    }

    int ppf[n]; // ppf = pontuação por faixa
    for (int i = 0; i < n; i++){
        cin >> ppf[i];
    }

    int ponto;
    int iFaixa;
    for (int i = 0; i < m; i++){

        cin >> ponto;

        // verifica todos os limites
        // iniciação de índice em n-1 caso a verificação
        // não tenha encontrado nada.
        iFaixa = n - 1;
        for (int j = 0; j < n-1; j++){
            if (ponto < lim[j]){
                iFaixa = j;
                break;
            }
        } // fim verificação

        cout << ppf[iFaixa] << " ";

    }

}
