/*
Recebe uma quantidade qualquer de valores quaisquer.
Os valores devem estar separados por quebra de linha.

Imprime a porcentagem em que cada valor apareceu.
Também mostra a quantidade total de entradas.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    // VARs ////////////////////////////////////
    int qtdTotal;
    vector<string> valores;
    vector<string> especiesDeValores;
    // VARs auxiliares
    string lido;
    int contAparicoes = 0;
    bool encontrou = false;
    float porcentagem = 0;

    // Hello, world! ---------------------
    cout << endl << "ESTATÍSTICAS SIMPLES\n";
    cout << "(Copyright 2015 Mazuh - GitHub Free Source)\n\n";
    
    // INPUTs /////////////////////////////////
    cout << "Quantidade de valores: ";
    cin >> qtdTotal;
    
    cout << "Valores:" << endl;
    for (int i = 0; i < qtdTotal; i++){

        cin >> lido;
        valores.push_back(lido);

        // esse valor já foi digitado antes?
        encontrou = false; // reseta flag.
        for (int j = 0;
             (!encontrou) && (j < especiesDeValores.size());
             j++){

            if (especiesDeValores[j] == lido){
                encontrou = true; // já existe
            }

        }
        if (!encontrou){ // não existe? adiciona
            especiesDeValores.push_back(lido);
        }

    }

    // PROCESSAMENTO da lista e OUTPUT de porcentagens /////////
    cout << "---------------" << endl;
    cout << "Total de entradas: " << valores.size() << endl;
    // percorre o vector de especies
    for (int i = 0; i < especiesDeValores.size(); i++){

        contAparicoes = 0; // reseta contador

        for (int j = 0; j < valores.size(); j++){
            if (valores[j] == especiesDeValores[i]){
                contAparicoes++; // essa espécie apareceu aqui!
            }
        }

        // imprime resultado da espécie
        porcentagem = (float) contAparicoes / qtdTotal * 100;
        cout << "Valor '" << especiesDeValores[i] << "' é ";
        cout << porcentagem << "% (" << contAparicoes << ")"; 
        cout << " das entradas." << endl;
    }
    
    cout << endl;

}
